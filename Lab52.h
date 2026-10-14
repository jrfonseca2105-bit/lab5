#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Lab52.h"

class Lab52 : public QMainWindow
{
    Q_OBJECT

public:
    Lab52(QWidget *parent = nullptr);
    ~Lab52();

private:
    Ui::Lab52Class ui;
};

