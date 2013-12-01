#include "HistoryWindow.h"

HistoryWindow::HistoryWindow(QStackedWidget *parent) : QWidget(){

  QCustomPlot *customPlot = new QCustomPlot();

  // generate some data:
  QVector<double> x(24), y(24); // initialize with entries 0..100
  for (int i=0; i<24; i++)
  {
    x[i] = i-24; // x goes from -1 to 1
    y[i] = 2*i; // let's plot a quadratic function
  }
  // create graph and assign data to it:
  customPlot->addGraph();
  customPlot->graph(0)->setData(x, y);
  // give the axes some labels:
  customPlot->xAxis->setLabel("Tid (timer)");
  customPlot->yAxis->setLabel("Temperatur (celcius)");
  // set axes ranges, so we see all data:
  customPlot->xAxis->setRange(-24, 0);
  customPlot->xAxis->setAutoTickCount(10);
  //customPlot->xAxis->setTickStep(24);
  customPlot->yAxis->setRange(0, 50);
  customPlot->replot();

  QPushButton *backBtn = new QPushButton("Tilbage");

  // Create temperature labels
  QLabel *dayAvgTempDescLbl = new QLabel("Gennemsnits temperatur (dag):");
  QLabel *dayAvgTempLbl = new QLabel("30° C");
  QLabel *nightAvgTempDescLbl = new QLabel("Gennemsnits temperatur (nat):");
  QLabel *nightAvgTempLbl = new QLabel("28° C");

  // Set styling for temperature labels
  dayAvgTempDescLbl->setAlignment(Qt::AlignCenter);
  dayAvgTempLbl->setAlignment(Qt::AlignCenter);
  dayAvgTempLbl->setStyleSheet("QLabel {font-size: 30pt;}");

  nightAvgTempDescLbl->setAlignment(Qt::AlignCenter);
  nightAvgTempLbl->setAlignment(Qt::AlignCenter);
  nightAvgTempLbl->setStyleSheet("QLabel {font-size: 30pt;}");

  // Create layout for inside and outside average temperature
  QVBoxLayout *insideTempLayout = new QVBoxLayout;
  insideTempLayout->addWidget(dayAvgTempDescLbl);
  insideTempLayout->addWidget(dayAvgTempLbl);

  QVBoxLayout *outsideTempLayout = new QVBoxLayout;
  outsideTempLayout->addWidget(nightAvgTempDescLbl);
  outsideTempLayout->addWidget(nightAvgTempLbl);

  // Create temperature layout and add buttons
  QHBoxLayout *tempLayout = new QHBoxLayout;
  tempLayout->addLayout(insideTempLayout);
  tempLayout->addLayout(outsideTempLayout);

  QVBoxLayout *mainLayout = new QVBoxLayout;

  mainLayout->addWidget(backBtn);
  mainLayout->addWidget(customPlot, 1);
  mainLayout->addLayout(tempLayout);

  this->setLayout(mainLayout);

  connect(backBtn, SIGNAL(clicked()), parent, SLOT(setControlWindow()));

}