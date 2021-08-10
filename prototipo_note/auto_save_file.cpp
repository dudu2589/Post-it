#include "auto_save_file.h"
#include "ui_auto_save_file.h"
#include <iostream>



auto_save_file::auto_save_file(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::auto_save_file)
{
    ui->setupUi(this);
}

auto_save_file::~auto_save_file()
{
    std::cout << "jeffrey bezos" << std::endl;
    delete ui;
}
