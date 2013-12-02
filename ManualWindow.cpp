#include "ManualWindow.h"

ManualWindow::ManualWindow(QStackedWidget *parent) : QWidget(){
  
  // Create fan control buttons
  QPushButton *fanOnBtn = new QPushButton("On");
  QPushButton *fanOffBtn = new QPushButton("Off");

  // Make togglable
  fanOnBtn->setCheckable(true);
  fanOnBtn->setAutoExclusive(true);
  fanOffBtn->setCheckable(true);
  fanOffBtn->setAutoExclusive(true);

  // Create layout for fan buttons
  QHBoxLayout *fanBtnLayout = new QHBoxLayout;
  fanBtnLayout->addWidget(fanOnBtn);
  fanBtnLayout->addWidget(fanOffBtn);

  // Create fan control label
  QLabel *fanLbl = new QLabel("Blæser:");

  // Create layout for fan control
  QHBoxLayout *fanLayout = new QHBoxLayout;
  fanLayout->addWidget(fanLbl);
  fanLayout->addLayout(fanBtnLayout);


  // Add the layout to window, and show window
  this->setLayout(fanLayout);

}