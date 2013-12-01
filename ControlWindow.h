#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QSizePolicy>

class ControlWindow : public QWidget {
  Q_OBJECT

public:
  ControlWindow(QStackedWidget *parent);

};