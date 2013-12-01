#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>
#include "qcustomplot.h"

class HistoryWindow : public QWidget {
  Q_OBJECT

public:
  HistoryWindow(QStackedWidget *parent);

};