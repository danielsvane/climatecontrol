#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

class ControlWindow : public QWidget {
  Q_OBJECT

public:
  ControlWindow(QApplication *app);

private slots:
  void changeWindow();

};