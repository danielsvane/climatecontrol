#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>
#include <QSizePolicy>

class ManualWindow : public QWidget {
  Q_OBJECT

public:
  ManualWindow(QStackedWidget *parent);

};