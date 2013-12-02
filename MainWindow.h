#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>
#include "ControlWindow.h"
#include "TemperatureWindow.h"
#include "HistoryWindow.h"
#include "ManualWindow.h"

class MainWindow : public QStackedWidget {
  Q_OBJECT

public:
  MainWindow(QApplication *app);

private slots:
  void setTemperatureWindow();
  void setControlWindow();
  void setHistoryWindow();
  void setManualWindow();

};