#include "post_it_enter_text_name.h"
#include "ui_post_it_enter_text_name.h"
#include "data_base.h"
#include "screen1.h"
post_it_enter_text_name::post_it_enter_text_name(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::post_it_enter_text_name)
{
    ui->setupUi(this);
}

post_it_enter_text_name::~post_it_enter_text_name()
{
    delete ui;
}



void post_it_enter_text_name::on_keySequenceEdit_editingFinished()
{
    Data_base d_b;
    screen1 screen(&d_b);
    screen.argc = argc;
    screen.argv = argv;
    screen.show();
}

