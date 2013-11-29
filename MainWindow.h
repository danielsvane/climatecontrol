#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>
#include "ControlWindow.h"

class MainWindow : public QStackedWidget {
  Q_OBJECT

public:
  MainWindow(QApplication *app);

};