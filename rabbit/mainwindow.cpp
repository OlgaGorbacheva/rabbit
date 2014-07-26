#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_down_clicked()
{
    Bunny.launcher(zoo::DOWN);
}

void MainWindow::on_left_clicked()
{
    Bunny.launcher(zoo::LEFT);
}

void MainWindow::on_up_clicked()
{
    Bunny.launcher(zoo::UP);
}

void MainWindow::on_right_clicked()
{
    Bunny.launcher(zoo::RIGHT);
}
