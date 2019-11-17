#include "application.h"
#include "ui_formmain.h"

application::application(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::application)
{
    ui->setupUi(this);
}

application::~application()
{
    delete ui;
}

