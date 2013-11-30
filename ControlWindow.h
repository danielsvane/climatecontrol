#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>

class ControlWindow : public QWidget {
  Q_OBJECT

public:
  ControlWindow(QStackedWidget *parent);

};