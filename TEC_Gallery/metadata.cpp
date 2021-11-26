/**
 * @file metadata.cpp
 * @authors Kendall Martinez Carvajal (kendallmc@estudiantec.cr) && Gabriel Cerdas Chinchilla (gabocerdas@estudiantec.cr)
 * @brief Este codigo posee toda la logica y metodos para que la metadata se muestre en la interfaz del proyecto
 *
 * @version 1.0
 *
 * @copyright Copyright (c) 2021
 */
#include "metadata.h"
#include "ui_metadata.h"

/**
 * @brief metadata::metadata
 * @param parent
 */
metadata::metadata(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::metadata)
{
    ui->setupUi(this);
}
/**
 * @brief metadata::~metadata
 */
metadata::~metadata()
{
    delete ui;
}
