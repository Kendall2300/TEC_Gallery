/**
 * @file main.cpp
 * @authors Kendall Martinez Carvajal (kendallmc@estudiantec.cr) && Gabriel Cerdas Chinchilla (gabocerdas@estudiantec.cr)
 * @brief Este codigo posee la instanciacion de la ventana de interfaz grafica
 *
 * @version 1.0
 *
 * @copyright Copyright (c) 2021
 */
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
