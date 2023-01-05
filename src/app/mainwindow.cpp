#include <QMenuBar>
#include <QAction>
#include <QFileDialog>
#include "mainwindow.h"

MainWindow::MainWindow() : QMainWindow(), addressWidget(new AddressWidget) {
    setCentralWidget(addressWidget);
    createMenus();
    setWindowTitle(tr("Address Book"));
}

void MainWindow::createMenus() {
    QMenu *fileMenu = menuBar()->addMenu(tr("&File"));
    QAction *openAct = new QAction(tr("&Open..."), this);
    fileMenu->addAction(openAct);
    connect(openAct, &QAction::triggered, this, &MainWindow::openFile);
}

void MainWindow::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    if (!fileName.isEmpty())
        addressWidget->readFromFile(fileName);
}