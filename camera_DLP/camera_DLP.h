#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_camera_DLP.h"

class camera_DLP : public QMainWindow
{
    Q_OBJECT

public:
    camera_DLP(QWidget *parent = Q_NULLPTR);

private:
    Ui::camera_DLPClass ui;
};
