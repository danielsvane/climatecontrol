#include "MainWindow.h"

MainWindow::MainWindow(QApplication *app) : QStackedWidget(){

    ControlWindow *controlWindow = new ControlWindow(app);

    this->addWidget(controlWindow);

    this->setWindowTitle("Climate control");

}