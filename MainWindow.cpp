#include "MainWindow.h"

MainWindow::MainWindow(QApplication *app) : QStackedWidget(){

  // Create an instance of all the windows in the UI
  ControlWindow *controlWindow = new ControlWindow(this);
  TemperatureWindow *temperatureWindow = new TemperatureWindow(this);
  HistoryWindow *historyWindow = new HistoryWindow(this);

  // Add the windows to a "window manager"
  this->addWidget(controlWindow);
  this->addWidget(temperatureWindow);
  this->addWidget(historyWindow);

  this->setFixedSize(500, 300);

  this->setWindowTitle("Climate control");

}

void MainWindow::setTemperatureWindow(){
  this->setCurrentIndex(1);
}

void MainWindow::setControlWindow(){
  this->setCurrentIndex(0);
}

void MainWindow::setHistoryWindow(){
  this->setCurrentIndex(2);
}