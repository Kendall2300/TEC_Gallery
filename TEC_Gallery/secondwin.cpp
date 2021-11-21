#include "secondwin.h"
#include "ui_secondwin.h"
#include "metadata.h"
#include <QFileDialog>
#include <QtWidgets>

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

void SecondWin::on_InsertBu_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this, tr("Chose"), "", tr("Images(*.png *.jpg *.jpeg *.gif)"));
        if (QString::compare(filename, QString()) !=0)
        {
            QImage image;
            bool vallid = image.load(filename);
            if (vallid)        {
                image = image.scaledToWidth(ui->labelimage->width(), Qt::SmoothTransformation);
                ui->labelimage->setPixmap(QPixmap::fromImage(image));
            }
            else
            {
                // Error
            }
        }
}


void SecondWin::on_ChangeBu_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this, tr("Chose"), "", tr("Images(*.png *.jpg *.jpeg *.gif)"));
        if (QString::compare(filename, QString()) !=0)
        {
            QImage image;
            bool vallid = image.load(filename);
            if (vallid)        {
                image = image.scaledToWidth(ui->labelimage->width(), Qt::SmoothTransformation);
                ui->labelimage->setPixmap(QPixmap::fromImage(image));
            }
            else
            {
                // Error
            }
        }
}


void SecondWin::on_pushButton_2_clicked()
{
   MetaData = new metadata(this);
   MetaData->show();
}

