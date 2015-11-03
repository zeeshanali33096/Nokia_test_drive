#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QWidget>
#include <QtCore/QPointer>
#include <QGeoPositionInfoSource>
#include <QNetworkConfigurationManager>
#include <QSystemNetworkInfo>
#include <QSystemInfo>
#include <QSystemDisplayInfo>
#include <QFile>
#include <QSystemScreenSaver>
#include <QSystemDeviceInfo>

// QtMobility namespace
QTM_USE_NAMESPACE

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    int interval;
    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };

    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

    // Note that this will only have an effect on Symbian and Fremantle.
    void setOrientation(ScreenOrientation orientation);

    void showExpanded();
private:
    QPointer<QGeoPositionInfoSource> locationDataSource;
    QSystemInfo sysInfo;
    QNetworkConfigurationManager mgr;
    QtMobility::QSystemNetworkInfo netInfo;
    QSystemDisplayInfo* displayInfo;

    void startGPS();
    void getcell_Id();
    void createLog();
    void stopLog();
    QString getNetwork(QSystemNetworkInfo::NetworkMode);

public slots:
    void positionUpdated(QGeoPositionInfo geoPositionInfo);
    //void cellUpdated(int info);




private slots:
    void on_pushButton_clicked(bool checked);
   // void onlineStatusCheck(bool Status);




    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_toggled(bool checked);

    void on_horizontalSlider_valueChanged(int value);

signals:
   // void onlineStatus(bool Status);



private:
    Ui::MainWindow *ui;
    bool isOnline;
    QString sizz;
    //QTimer *timer;
   QFile file;
   bool islogging;
   QSystemScreenSaver scrSvr;
   int count;
   int lacod;
   int cll_Id;
   int batteryLevel;
   int netStrength;
   QSystemDeviceInfo dev;

};

#endif // MAINWINDOW_H
