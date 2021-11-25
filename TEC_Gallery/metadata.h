/**
 * @file mainwindow.h
 * @authors Kendall Martinez && Gabriel Cerdas
 * @brief Este codigo contiene las declaraciones de las llamadas necesarias para la metadata de las imagenes
 *
 * @version 1.0
 */
#ifndef METADATA_H
#define METADATA_H

#include <QMainWindow>

namespace Ui {
class metadata;
}

class metadata : public QMainWindow
{
    Q_OBJECT

public:
    explicit metadata(QWidget *parent = nullptr);
    ~metadata();

private:
    Ui::metadata *ui;
};

#endif // METADATA_H
