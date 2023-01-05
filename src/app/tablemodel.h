#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#include <QList>

struct Contact {
    QString firstName;
    QString lastName;
    QString streetAddress1;
    QString streetAddress2;
    QString city;
    QString state;
    QString zipcode;

};

#endif
