/**
 * @file mainwindow.h
 * @authors Kendall Martinez && Gabriel Cerdas
 * @brief Este codigo contiene las declaraciones de las llamadas necesarias para mostrar la interfaz grafica del crear usuario
 *
 * @version 1.0
 */
#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

namespace Ui {
class SignUp;
}

class SignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr);
    ~SignUp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignUp *ui;
};

#endif // SIGNUP_H
