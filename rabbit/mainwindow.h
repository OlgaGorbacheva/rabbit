#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "rabbit.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
//    void on_MainWindow_objectNameChanged(const QString &objectName);

    void on_down_clicked();

    void on_left_clicked();

    void on_up_clicked();

    void on_right_clicked();

private:
    zoo::rabbit Bunny;
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
