#include "exit_message.h"
#include "ui_exit_message.h"

exit_message::exit_message(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::exit_message)
{
    ui->setupUi(this);
}


exit_message::~exit_message()
{
    delete ui;
}
