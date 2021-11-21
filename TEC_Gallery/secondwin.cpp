#include "secondwin.h"
#include "ui_secondwin.h"

SecondWin::SecondWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWin)
{
    ui->setupUi(this);
}

SecondWin::~SecondWin()
{
    delete ui;
}
