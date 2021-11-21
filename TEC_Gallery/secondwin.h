#ifndef SECONDWIN_H
#define SECONDWIN_H

#include <QDialog>

namespace Ui {
class SecondWin;
}

class SecondWin : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWin(QWidget *parent = nullptr);
    ~SecondWin();

private:
    Ui::SecondWin *ui;
};

#endif // SECONDWIN_H
