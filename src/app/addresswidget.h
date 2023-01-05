#ifndef ADDRESSWIDGET_H
#define ADDRESSWIDGET_H

#include <QItemSelection>
#include <QTabWidget>

class AddressWidget : public QTabWidget {
public:
    AddressWidget(QWidget *parent = nullptr);
    void readFromFile(const QString &fileName);
};

#endif
