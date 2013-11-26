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

  // Set the character encoding to UTF8 (for using western characters)
  QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

  // Create the main window and set the title
  QWidget *window = new QWidget;
  window->setWindowTitle("Climate control");
  
  // Create buttons
  QPushButton *setTempBtn = new QPushButton("Sæt temperatur");
  QPushButton *manualCtrlBtn = new QPushButton("Manuel styring");
  QPushButton *showLogBtn = new QPushButton("Vis log");

  // Create left layout and add buttons
  QVBoxLayout *leftLayout = new QVBoxLayout;
  leftLayout->addWidget(setTempBtn);
  leftLayout->addWidget(manualCtrlBtn);
  leftLayout->addWidget(showLogBtn);

  // Create temperature labels
  QLabel targetTempLbl("30 C");
  QLabel currentTempLbl("28 C");

  // Create right layout and add temperature labels
  QVBoxLayout *rightLayout = new QVBoxLayout;
  rightLayout->addWidget(&targetTempLbl);
  rightLayout->addWidget(&currentTempLbl);

  // Create main layout for holding buttons to the left, and temperatures to the right
  QHBoxLayout *mainLayout = new QHBoxLayout;
  mainLayout->addLayout(leftLayout);
  mainLayout->addLayout(rightLayout);

  // Add the layout to window, and show window
  window->setLayout(mainLayout);
  window->show();

  return app.exec();
}