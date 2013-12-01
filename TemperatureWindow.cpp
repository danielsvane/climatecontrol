#include "TemperatureWindow.h"

TemperatureWindow::TemperatureWindow(QStackedWidget *parent) : QWidget(){
  
  // Create buttons
  QPushButton *setTempBtn = new QPushButton("Hullo");

  // Create left layout and add buttons
  QVBoxLayout *leftLayout = new QVBoxLayout;
  leftLayout->addWidget(setTempBtn);

  // Create temperature labels
  QLabel targetTempLbl("30 C");
  QLabel currentTempLbl("28 C");

  // Create right layout and add temperature labels
  QVBoxLayout *rightLayout = new QVBoxLayout;
  rightLayout->addWidget(&targetTempLbl);
  rightLayout->addWidget(&currentTempLbl);

  // Create main layout for holding buttons to the left, and temperatures to the right
  QHBoxLayout *mainLayout = new QHBoxLayout;
  mainLayout->addLayout(leftLayout);
  mainLayout->addLayout(rightLayout);

  // Add the layout to window, and show window
  this->setLayout(mainLayout);

  // Connect "set temperature" button to change window function
  connect(setTempBtn, SIGNAL(clicked()), parent, SLOT(setControlWindow()));

}