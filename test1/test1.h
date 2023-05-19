#pragma once

#include <QtWidgets/QDialog>
#include "ui_test1.h"

class test1 : public QDialog
{
    Q_OBJECT

public:
    test1(QWidget *parent = nullptr);
    ~test1();

private:
    Ui::test1Class ui;

private slots:
    void on_lineEdit_textChanged();     // Ìí¼Ó²Ûº¯Êý
};
