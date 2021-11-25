/**
 * @file mainwindow.h
 * @authors Kendall Martinez && Gabriel Cerdas
 * @brief Este codigo contiene las declaraciones de las llamadas necesarias para mostrar la interfaz grafica de la metadata
 *
 * @version 1.0
 */
#ifndef SECONDWIN_H
#define SECONDWIN_H

#include <QDialog>
#include "metadata.h"
#include <QMainWindow>

namespace Ui {
class SecondWin;
}

class SecondWin : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWin(QWidget *parent = nullptr);
    ~SecondWin();

private slots:
    void on_InsertBu_clicked();

    void on_ChangeBu_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SecondWin *ui;
    metadata *MetaData;
};

#endif // SECONDWIN_H
