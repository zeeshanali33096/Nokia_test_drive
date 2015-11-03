#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtCore/QCoreApplication>
#include<QGeoCoordinate>
#include <QGeoSatelliteInfo>
#include <QGeoPositionInfo>
#include <QNetworkConfigurationManager>
#include <QNetworkAccessManager>
#include <QDataStream>
#include <QMessageBox>
#include <QFileInfo>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    startGPS();
    interval=1;
    getcell_Id();
    ui->groupBox->setVisible(false);
    ui->horizontalSlider->setRange(1,10);
    islogging=false;
    bool success = scrSvr.setScreenSaverInhibit();
            if(success == false) {
                scrSvr.setScreenSaverInhibit();

            }



    count=0;
    isOnline=false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void MainWindow::showExpanded()
{
#ifdef Q_OS_SYMBIAN
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}

void MainWindow::startGPS()
{
    // Obtain the location data source if it is not obtained already
    if (!locationDataSource)
    {
        locationDataSource =
                QGeoPositionInfoSource::createDefaultSource(this);

            // Whenever the location data source signals that the current
            // position is updated, the positionUpdated function is called.
        locationDataSource->setPreferredPositioningMethods(QGeoPositionInfoSource::SatellitePositioningMethods);
        locationDataSource->setUpdateInterval(1000);
            QObject::connect(locationDataSource,
                             SIGNAL(positionUpdated(QGeoPositionInfo)),
                             this,
                             SLOT(positionUpdated(QGeoPositionInfo)));
            // Start listening for position updates

            locationDataSource->startUpdates();


    }
}

void MainWindow::positionUpdated(QGeoPositionInfo geoPositionInfo)
{
    if (geoPositionInfo.isValid())
    {
        // Stop regular position updates, because a valid position has been
        // obtained
        //locationDataSource->stopUpdates();

        // Get the current location as latitude and longitude
        QTextStream out(&file);


        QGeoCoordinate geoCoordinate = geoPositionInfo.coordinate();
        //CoordinateFormat format;
        /*double lat = geoCoordinate.latitude();
        double lon = geoCoordinate.longitude();
        */
        double alt = geoCoordinate.altitude();

        //geoPositionInfo.hasAttribute(geoPositionInfo.GroundSpeed)=true;
        QString Coord=geoCoordinate.toString(geoCoordinate.DegreesWithHemisphere);
        QStringList list=Coord.split(",", QString::KeepEmptyParts);
        //QString::SectionFlag flag = QString::SectionSkipEmpty;
        QString latitude=list.at(0);
        QString longitude=list.at(1);
        //qreal alt=geoCoordinate.altitude();
        QString altitude=QString("%1").arg(alt);
        qreal vSpeed,hSpeed;
        qreal angle;
        if(geoPositionInfo.hasAttribute(QGeoPositionInfo::Direction)==true)
            angle=geoPositionInfo.attribute(QGeoPositionInfo::Direction);
        else
            angle=0;
        if(geoPositionInfo.hasAttribute(QGeoPositionInfo::VerticalSpeed)==true)
        {
        vSpeed=geoPositionInfo.attribute(QGeoPositionInfo::VerticalSpeed)*3.6;
        }
        else
            vSpeed=0.0f;
        if(geoPositionInfo.hasAttribute(QGeoPositionInfo::GroundSpeed)==true)
        {
        hSpeed=geoPositionInfo.attribute(QGeoPositionInfo::GroundSpeed)*3.6;
        }
        else
            hSpeed=0.0f;

        ui->label_Latitude->setText(latitude);
        ui->label_Longitude->setText(longitude);
       // ui->label_Altitude->setText(altitude);
        if(hSpeed==-1.0f)
            hSpeed=0.0f;
        if(vSpeed==-1.0f)
            vSpeed=0.0f;
        QString speed=QString("%1 km/hr").arg(hSpeed);
        ui->label_Angle->setText(QString("%1").arg(angle));
        ui->label_Speed->setText(speed);
        QDateTime DT=QDateTime::currentDateTime();
        ui->label_Timestamp->setText(DT.toString("yyyy-MM-dd hh:mm:ss"));
        ui->label_DataStatus->setText("Disconnected");
        qreal vAcc,hAcc;
        if(geoPositionInfo.hasAttribute(QGeoPositionInfo::VerticalAccuracy)==true)
        {
        vAcc=geoPositionInfo.attribute(QGeoPositionInfo::VerticalAccuracy);
        }
        else
            vAcc=0.0f;

        if(geoPositionInfo.hasAttribute(QGeoPositionInfo::HorizontalAccuracy)==true)
        {
        hAcc=geoPositionInfo.attribute(QGeoPositionInfo::HorizontalAccuracy);
        }
        else
            hAcc=0.0f;

        QString accuracy=QString("%1 m").arg(hAcc);
        ui->label_Accuray->setText(accuracy);

        QList<QNetworkConfiguration> activeConfigs = mgr.allConfigurations(QNetworkConfiguration::Active);
            if (activeConfigs.count() > 0)
            {
                Q_ASSERT(mgr.isOnline());
                ui->label_DataStatus->setText("Connected");
            }
            QFileInfo file_Info(sizz);
            //ui->file_Size->setText(QString("%1 bytes").arg(file_Info.size()));
            ui->file_Size->setText(QString("%1").arg(count));
            QString st1=ui->label_DataStatus->text();
            QString gAcc=QString("%1").arg(hAcc);
            QString gSpeed=QString("%1").arg(hSpeed);
            //out<<"ABC"+st1+"asd";
            //int le=altitude.length();
           // QString alti="";
            //alti.append(altitude);
            //alti.truncate(le-1);

            if(cll_Id!=netInfo.cellId())
            {
                cll_Id=netInfo.cellId();
                ui->cell_Id->setText(QString("%1").arg(cll_Id));
            }
            if(lacod!=netInfo.locationAreaCode())
            {
                lacod=netInfo.locationAreaCode();
                ui->LAC->setText(QString("%1").arg(lacod));
            }

            QString altii=""+altitude;
            ui->label_Altitude->setText(altitude.append(" m"));
            if(islogging==true)
            {
            out<<("")+(ui->cell_Id->text())+","+(ui->MCC->text())+","+(ui->MNC->text())+","+(ui->LAC->text())+","+(ui->callStatus->text())+","+(DT.toString("yyyy-MM-dd hh:mm:ss"))+","+(ui->techno->text())+","+st1+","+latitude+","+longitude+","+altii+","+gAcc+","+gSpeed+","+(ui->label_Angle->text())+"\r\n";
            count++;
            }
            batteryLevel=dev.batteryLevel();
            ui->batteryInd->setText(QString("%1 %").arg(batteryLevel));
            netStrength=netInfo.networkSignalStrength(netInfo.currentMode());
            ui->networkInd->setText(QString("%1 %").arg(netStrength));








        //label->setText( QString("Latitude: %1 \n Longitude: %2").arg(latitude).arg(longitude) );
       //ui->label->setText(Coord);
       // ui->label_Logitude->setText(QString("%1").arg(longitude));
        //ui->label_Altitude->setText(QString("%1").arg(altitude));
      //  ui->label_Latitude->setText(abc);
    }
}


void MainWindow::getcell_Id()
{
    int cell_Id = netInfo.cellId();
    cll_Id=cell_Id;
    QString srt;
    srt.append(QString("%1").arg(cell_Id));
    ui->cell_Id->setText(srt);
    int La=netInfo.locationAreaCode();
    lacod=La;
    QString LAC;
    LAC.append(QString("%1").arg(La));
    ui->LAC->setText(LAC);
    QString mcc,mnc;
    mcc=netInfo.homeMobileCountryCode();
    mnc=netInfo.homeMobileNetworkCode();

    ui->MCC->setText(mcc);
    ui->MNC->setText(mnc);

    batteryLevel=dev.batteryLevel();
    ui->batteryInd->setText(QString("%1 %").arg(batteryLevel));
    netStrength=netInfo.networkSignalStrength(netInfo.currentMode());
    ui->networkInd->setText(QString("%1 %").arg(netStrength));













}

void MainWindow::on_pushButton_clicked(bool checked)
{
    ui->groupBox->setVisible(checked);
    ui->scrollArea->setVisible(!checked);
    file.close();
}

/*void MainWindow::onlineStatusCheck(bool Status)
{
    QList<QNetworkConfiguration> activeConfigs = mgr.allConfigurations(QNetworkConfiguration::Active);
        if (activeConfigs.count() > 0)
        {
            Q_ASSERT(mgr.isOnline());
            isOnline=true;
            Status=isOnline;
            ui->label_DataStatus->setText("Connected");
        }
        else
        {
            isOnline=false;
            ui->label_DataStatus->setText("Disconnected");
        }
}

void MainWindow::onlinceCheck()
{
    QObject::connect(mgr,SIGNAL(onlineStatus(bool)),
                     this,SLOT(onlineStatusCheck(bool)));
}

*/



void MainWindow::on_pushButton_3_clicked()
{
    int time=ui->horizontalSlider->value();
    time=time*1000;
    locationDataSource->setUpdateInterval(time);

}

void MainWindow::createLog()
{
    QString da=QDate::currentDate().toString("yyyyMMdd");
    QString ti=QTime::currentTime().toString("hhmmss");
    QString fil=da.append("_").append(ti).append(".log");
    QString f="e://Log//";
    QString fileName=f.append(fil);
    sizz=fileName;



    file.setFileName(fileName);
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out <<"Cell Id,MCC, MNC, LAC, Call Status, Time Stamp, Technology, Data Status, Latitude, Longitude, Altitude, Accuracy, Speed, Angle\r\n";



}

void MainWindow::on_pushButton_5_clicked()
{
    QString tech=ui->tech->text();
    ui->techno->setText(tech);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString stat=ui->call_stat->text();
    ui->callStatus->setText(stat);
}

void MainWindow::on_pushButton_2_toggled(bool checked)
{
    islogging=checked;
    if(islogging==true)
    {
    ui->pushButton_2->setText("Stop Log");
    createLog();
    QMessageBox::information(0, "Information", "Log Started");
    }
    if(islogging==false)
    {
        stopLog();
        ui->file_Size->setText(QString("0"));
        sizz="";
        count=0;
        QMessageBox::information(0, "Information", "Log Stopped");

        ui->pushButton_2->setText("Start Log");
    }

}

void MainWindow::stopLog()
{
    file.close();
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->spT->setNum(value);
    interval=value*1000;
}
