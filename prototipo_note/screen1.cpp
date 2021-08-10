#include "screen1.h"
#include "ui_screen1.h"
#include <QFile>
#include "proto_note.h"
#include "proto_note.cpp"
#include "main.cpp"


screen1::screen1(Data_base *db , QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::screen1)
{
    this->DB = db;
    ui->setupUi(this);
}

screen1::~screen1()
{


    this->DB->set_counter(this->counter);
    this->DB->set_colors(this->colors);
    this->DB->set_txt_name(this->NAME_TXT);
    this->DB->create_data_base_save();
    delete ui;
}

void screen1::on_pushButton_clicked()
{
    plus_counter();
    push_colors(name);
    srand(time(NULL));
    int c;
    while((c = getopt(argc, argv, "h::")) != -1) {
        switch(c) {
        case 'h':
            std::cout <<
        R"(Usage: sticky [-h] [FILE ...]

        Simple configurable desktop sticky note program.

        Propositional Arguments:
            FILE        text file to be displayed

        Optional Arguments:
            -h          show this help message and exit
        )";
                //return 0;
                default:
                    abort();
                }
            }

    std::vector<Sticky*> files;
    for(int i = optind; i < argc; ++i) {
        QFile file(argv[i]);
        file.open(QFile::ReadOnly | QFile::Text);
        QTextStream fstream(&file);
        files.push_back(new Sticky(name , fstream.readAll()));
    }
    if(files.empty()) {
        files.push_back(new Sticky(name));

    }

    for(Sticky* sticky : files) {
        this->DB->set_sticky(sticky);
        sticky->show();
    }
}



void screen1::on_radioButton_clicked(){name = 0;}
void screen1::on_radioButton_2_clicked(){name = 1;}
void screen1::on_radioButton_3_clicked(){name = 2;}
void screen1::on_radioButton_4_clicked(){name = 3;}



void screen1::on_lineEdit_textChanged(const QString &arg1)
{
     this->NAME_TXT = arg1 ;
}

