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

public slots:
    void cent2fahr(int valor);
    void fahr2cent(int valor);

    void cent2kel(int valor);
    void kel2cent(int valor);

    void fahr2kel(int valor);
    void kel2fahr(int valor);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
