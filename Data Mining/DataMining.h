#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DataMining.h"

class DataMining : public QMainWindow
{
    Q_OBJECT

public:
    DataMining(QWidget *parent = nullptr);
    ~DataMining();

private:
    Ui::DataMiningClass ui;
};

