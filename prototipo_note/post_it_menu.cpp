#include "post_it_menu.h"
#include "ui_post_it_menu.h"
#include "post_it_enter_text_name.h"
#include "data_base.h"
#include "screen1.h"
post_it_menu::post_it_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::post_it_menu)
{
    ui->setupUi(this);
}

post_it_menu::~post_it_menu()
{
    delete ui;
}

void post_it_menu::on_pushButton_clicked()
{

    Data_base d_b;
    screen1 screen(&d_b);
    screen.argc = argc;
    screen.argv = argv;
    screen.show();
}




