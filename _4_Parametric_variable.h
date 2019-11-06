//
// Created by admin on 2019/9/27.
//

#ifndef INC_698SP_CL__4_PARAMETRIC_VARIABLE_H
#define INC_698SP_CL__4_PARAMETRIC_VARIABLE_H


#include "QDebug"
#include "ui__4_Parametric_variable.h"
#include <QDialog>
#include "QStandardItemModel"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui
{
    class _4_Parametric_variableForm;
}

class _4_Parametric_variable : public QDialog
{
Q_OBJECT
public:
    explicit _4_Parametric_variable(QWidget *parent = nullptr);
    void att();
    void act();

    QStandardItemModel *model;
private:
    Ui::_4_Parametric_variableForm *ui;
    QSqlDatabase database;

public slots:
    void add_item(QTreeWidgetItem *,int);
    void add_item(QTreeWidgetItem *,QTreeWidgetItem*);
};


#endif //INC_698SP_CL__4_PARAMETRIC_VARIABLE_H