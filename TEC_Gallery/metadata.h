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
