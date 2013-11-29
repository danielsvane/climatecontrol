#include <QApplication>
#include <QTextCodec>
#include <QStackedWidget>
#include "MainWindow.h"

int main(int argc, char *argv[ ])
{
  QApplication app(argc, argv);

  // Set the character encoding to UTF8 (for using western characters)
  QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

  // Create the main window and set the title
  MainWindow *window = new MainWindow(&app);
  //ControlWindow *window = new ControlWindow(&app);

  window->show();

  return app.exec();
}