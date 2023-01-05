#include "addresswidget.h"

#include <QtWidgets>

AddressWidget::AddressWidget(QWidget *parent) {
    
}

void AddressWidget::readFromFile(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(this, tr("Unable to open file"),
                                 file.errorString());
        return;
    }

    QDataStream in(&file);
}