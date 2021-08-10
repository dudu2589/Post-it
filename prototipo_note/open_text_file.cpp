#include "open_text_file.h"
#include "ui_open_text_file.h"

open_text_file::open_text_file(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::open_text_file)
{
    ui->setupUi(this);
}

open_text_file::~open_text_file()
{
    delete ui;
}
