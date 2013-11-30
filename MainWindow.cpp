#include "MainWindow.h"

MainWindow::MainWindow(QApplication *app) : QStackedWidget(){

  ControlWindow *controlWindow = new ControlWindow(this);
  TemperatureWindow *temperatureWindow = new TemperatureWindow(this);

  this->addWidget(controlWindow);
  this->addWidget(temperatureWindow);

  //this->

  this->setWindowTitle("Climate control");

}

void MainWindow::setTemperatureWindow(){
  this->setCurrentIndex(1);
}

void MainWindow::setControlWindow(){
  this->setCurrentIndex(0);
}