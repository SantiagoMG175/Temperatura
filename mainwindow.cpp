#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


//de centigrados a fahrenheit
connect(ui->cmdCent, SIGNAL (valueChanged(int)),
       this,SLOT(cent2fahr(int)));

// de fahrenheit a centigrados
connect(ui->cmdFahr, SIGNAL (valueChanged(int)),
       this,SLOT(fahr2cent(int)));


// de centigrados a kelvin
connect(ui->cmdCent, SIGNAL (valueChanged(int)),
      this,SLOT(cent2kel(int)));

// de kelvin a centigrados
connect(ui->cmdKel, SIGNAL (valueChanged(int)),
     this,SLOT(kel2cent(int)));

// de fahrenheit a kelvin
connect(ui->cmdFahr, SIGNAL (valueChanged(int)),
     this,SLOT(fahr2kel(int)));

// de kelvin a fahrenheit
connect(ui->cmdKel, SIGNAL (valueChanged(int)),
     this,SLOT(kel2fahr(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cent2fahr(int valor)
{
    if(ui->cmdCent->hasFocus()){
    float f = valor * 9.0/5+32;
    ui->cmdFahr->setValue(f);
    }
}

void MainWindow::fahr2cent(int valor)
{
    if(ui->cmdFahr->hasFocus()){
   float c = (valor - 32) * 5.0/9;
   ui->cmdCent->setValue(c);
    }
}

void MainWindow::cent2kel(int valor)
{
    if(ui->cmdCent->hasFocus()){
    float k = (valor+273.15);
    ui->cmdKel->setValue(k);
    }
}

void MainWindow::kel2cent(int valor)
{
    if(ui->cmdKel->hasFocus()){
    float c2= (valor-273.15);
    ui->cmdCent->setValue(c2);
    }
}

void MainWindow::fahr2kel(int valor)
{
    if(ui->cmdFahr->hasFocus()){
    float k2 = (valor-32) * 5.0/9 + 273.15;
    ui->cmdKel->setValue(k2);
    }
}

void MainWindow::kel2fahr(int valor)
{
    if(ui->cmdKel->hasFocus()){
    float f2 = (valor- 273.15) * 9.0/5 + 32;
    ui->cmdFahr->setValue(f2);
    }
}

