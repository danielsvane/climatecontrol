#include "HistoryWindow.h"

HistoryWindow::HistoryWindow(QStackedWidget *parent) : QWidget(){

  QCustomPlot *customPlot = new QCustomPlot();

  // generate some data:
  QVector<double> x(101), y(101); // initialize with entries 0..100
  for (int i=0; i<101; ++i)
  {
    x[i] = i/50.0 - 1; // x goes from -1 to 1
    y[i] = x[i]*x[i]; // let's plot a quadratic function
  }
  // create graph and assign data to it:
  customPlot->addGraph();
  customPlot->graph(0)->setData(x, y);
  // give the axes some labels:
  customPlot->xAxis->setLabel("Tid (timer)");
  customPlot->yAxis->setLabel("Temperatur (celcius)");
  // set axes ranges, so we see all data:
  customPlot->xAxis->setRange(-1, 1);
  customPlot->yAxis->setRange(0, 1);
  customPlot->replot();

  QPushButton *backBtn = new QPushButton("Tilbage");

  // Create left layout and add buttons
  QVBoxLayout *leftLayout = new QVBoxLayout;
  leftLayout->addWidget(backBtn);
  leftLayout->addWidget(customPlot);

  // Add the layout to window, and show window
  this->setLayout(leftLayout);

  connect(backBtn, SIGNAL(clicked()), parent, SLOT(setControlWindow()));

}