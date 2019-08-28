//--------------------------------------------------------------------
//
// QXlsx
// MIT License
// https://github.com/j2doll/QXlsx
//
// QtXlsx
// https://github.com/dbzhang800/QtXlsxWriter
// http://qtxlsx.debao.me/
// MIT License
//
#ifndef CELL_LOCATION_H
#define CELL_LOCATION_H

#include <QtGlobal>
#include <QObject>
#include <QString>
#include <QVector>
#include <QList>
#include <QMetaType>
#include <QSharedPointer>

#include "xlsxglobal.h"
QT_BEGIN_NAMESPACE_XLSX

class Cell;

class CellLocation
{
public:
    CellLocation();

    int col;
    int row;

    QSharedPointer<Cell> cell;
};

QT_END_NAMESPACE_XLSX
#endif
