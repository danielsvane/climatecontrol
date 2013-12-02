#include "ControlWindow.h"

ControlWindow::ControlWindow(QStackedWidget *parent) : QWidget(){
  
  // Create buttons
  QPushButton *setTempBtn = new QPushButton("Sæt temperatur");
  QPushButton *manualCtrlBtn = new QPushButton("Manuel styring");
  QPushButton *showLogBtn = new QPushButton("Vis log");

  setTempBtn->setSizePolicy(QSizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding));
  manualCtrlBtn->setSizePolicy(QSizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding));
  showLogBtn->setSizePolicy(QSizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding));

  // Create left layout and add buttons
  QVBoxLayout *leftLayout = new QVBoxLayout;
  leftLayout->addWidget(setTempBtn);
  leftLayout->addWidget(manualCtrlBtn);
  leftLayout->addWidget(showLogBtn);

  // Create temperature labels
  QLabel *targetTempDescLbl = new QLabel("Indvendig temperatur:");
  QLabel *targetTempLbl = new QLabel("30° C");
  QLabel *currentTempDescLbl = new QLabel("Udvendig temperatur:");
  QLabel *currentTempLbl = new QLabel("28° C");

  // Set styling for temperature labels
  targetTempDescLbl->setAlignment(Qt::AlignCenter);
  currentTempDescLbl->setAlignment(Qt::AlignCenter);
  targetTempLbl->setAlignment(Qt::AlignCenter);
  targetTempLbl->setStyleSheet("QLabel {font-size: 30pt;}");
  currentTempLbl->setAlignment(Qt::AlignCenter);
  currentTempLbl->setStyleSheet("QLabel {font-size: 30pt;}");

  // Create right layout and add temperature labels
  QVBoxLayout *rightLayout = new QVBoxLayout;
  rightLayout->addWidget(targetTempDescLbl);
  rightLayout->addWidget(targetTempLbl);
  rightLayout->addWidget(currentTempDescLbl);
  rightLayout->addWidget(currentTempLbl);
  rightLayout->setMargin(50);

  // Create main layout for holding buttons to the left, and temperatures to the right
  QHBoxLayout *mainLayout = new QHBoxLayout;
  mainLayout->addLayout(leftLayout);
  mainLayout->addLayout(rightLayout);

  // Add the layout to window, and show window
  this->setLayout(mainLayout);

  // Connect "set temperature" button to change window function
  connect(setTempBtn, SIGNAL(clicked()), parent, SLOT(setTemperatureWindow()));
  connect(showLogBtn, SIGNAL(clicked()), parent, SLOT(setHistoryWindow()));
  connect(manualCtrlBtn, SIGNAL(clicked()), parent, SLOT(setManualWindow()));

}