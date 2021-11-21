#include "metadata.h"
#include "ui_metadata.h"

metadata::metadata(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::metadata)
{
    ui->setupUi(this);
}

metadata::~metadata()
{
    delete ui;
}
