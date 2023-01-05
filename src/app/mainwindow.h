#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addresswidget.h"

class MainWindow : public QMainWindow {
public:
    MainWindow();

private slots:
    void updateActions(const QItemSelection &selection);
    void openFile();
    void saveFile();

private:
    void createMenus();
    AddressWidget *addressWidget;
};

#endif
