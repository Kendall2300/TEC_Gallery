#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QWidget *nw = new QWidget();

private slots:
    void on_label_3_linkActivated(const QString &link);

    void on_label_3_customContextMenuRequested(const QPoint &pos);

    void on_SignIn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
