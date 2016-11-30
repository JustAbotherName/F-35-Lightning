#undef scroll
#include "../../inc/ui/menuu.h"
#include <QMenu>
#include <QMenuBar>

SimpleMenu::SimpleMenu(QWidget *parent)
    : QMainWindow(parent) {
    
  QAction *quit = new QAction("&Quit", this);
  QAction *help = new QAction("&Help", this);


  QMenu *file;
  file = menuBar()->addMenu("&File");
  file->addAction(quit);

  file = menuBar()->addMenu("&Help");
  file->addAction(help);

  connect(quit, &QAction::triggered, qApp, QApplication::quit);
  connect(help, &QAction::triggered, qApp, QApplication::quit);
}
