/**
 * @file mainwindow.h
 * @authors Kendall Martinez && Gabriel Cerdas
 * @brief Este codigo contiene las declaraciones de las llamadas necesarias para mostrar la interfaz grafica del proyecto
 *
 * @version 1.0
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QWidget *nw = new QWidget();

private slots:
    void on_label_3_linkActivated(const QString &link);

    void on_label_3_customContextMenuRequested(const QPoint &pos);

    void on_SignIn_clicked();

    void on_SignUp_clicked();

    void on_label_6_linkActivated(const QString &link);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    SignUp *signup;
};
#endif // MAINWINDOW_H
