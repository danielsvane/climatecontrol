#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>

class TemperatureWindow : public QWidget {
  Q_OBJECT

public:
  TemperatureWindow(QStackedWidget *parent);

};