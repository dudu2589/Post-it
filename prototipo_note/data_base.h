#ifndef DATA_BASE_H
#define DATA_BASE_H
#include <vector>
#include <iostream>
#include <string>
#include "proto_note.h"

using namespace std;
class Data_base
{
public:
    Data_base();
    void set_counter(int counter){this->counter = counter;}
    void set_colors(vector <int> colors_){this->colors = colors_;}
    void get_counter(){std::cout << this->counter<< std::endl;}
    void set_sticky(Sticky * post_it){textos.push_back(post_it);}
    void set_txt_name(QString name){this->name_txt = name;}

    void create_data_base_save();
private:
    int counter;
    std::vector <int> colors;
    std::vector <Sticky*> textos;
    QString name_txt;
};

#endif // DATA_BASE_H
