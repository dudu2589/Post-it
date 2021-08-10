#include "proto_note.h"
#include "screen1.h"
#include "exit_message.h"
#include "data_base.h"
#include <QApplication>
#include<iostream>
#include <ctime>
#include <QFile>
#include <QTextStream>
#include <random>
#include <unistd.h>
#include <vector>


using namespace std;

int main(int argc, char **argv) {
    QApplication app(argc, argv);

    if(argc == 2){
        QFile file(argv[1]);
        file.open(QFile::ReadOnly | QFile::Text);


        std::vector<int> colors;
        std::vector<QString> textos;


        string confirmacion = file.readLine().toStdString();
        int counter = file.readLine().toInt();

        for(int i = 0 ; i < counter ; i++){
            colors.push_back(file.readLine().toInt());
            //string font = file.readLine().toStdString();
            QTextStream fstream(file.readLine());
            textos.push_back(fstream.readAll());

        }






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
        if(confirmacion == "CONFIRMED\n"){
            for(int i = 0; i < counter; ++i) {
                files.push_back(new Sticky(colors[i] , textos[i]));
            }
            if(files.empty()) {
                files.push_back(new Sticky(colors[0]));

            }
            Data_base d_b;
            for(Sticky* sticky : files) {
                d_b.set_sticky(sticky);
                sticky->show();
            }
        }else{
            file.close();
            QApplication app2(argc, argv);
            exit_message exit;
            exit.show();
            return app2.exec();
        }

    }else if(argc == 1){
        QApplication app2(argc, argv);
        Data_base d_b;
        screen1 screen(&d_b);
        screen.argc = argc;
        screen.argv = argv;
        screen.show();

        return app2.exec();
    }

    return app.exec();

}
