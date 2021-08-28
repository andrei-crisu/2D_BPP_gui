#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsItem>
#include<QCloseEvent>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_exit_button_clicked();

    void on_help_button_clicked();

    void on_settings_button_clicked();

    void on_bpp_view_button_clicked();

    void on_home_clicked();

    void on_back_clicked();

    void on_help_clicked();

    void on_settings_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
};
#endif // MAINWINDOW_H
