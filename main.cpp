#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextCodec>

int main(int argc, char *argv[ ])
{
  QApplication app(argc, argv);

  // Set then character encoding to UTF8 (for using western characters)
  QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

  // Create the main window and set the title
  QWidget *window = new QWidget;
  window->setWindowTitle("Climate control");
  
  // Create buttons
  QPushButton *setTempBtn = new QPushButton("Sæt temperatur");
  QPushButton *manualCtrlBtn = new QPushButton("Manuel styring");
  QPushButton *showLogBtn = new QPushButton("Vis log");

  // Create layout and add buttons
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(setTempBtn);
  layout->addWidget(manualCtrlBtn);
  layout->addWidget(showLogBtn);

  // Add the layout to window, and show window
  window->setLayout(layout);
  window->show();

  return app.exec();
}