#include "data_base.h"
#include <fstream>

Data_base::Data_base()
{

}

void Data_base::create_data_base_save(){

    string  txt ;
    txt = this->name_txt.toStdString() + ".txt" ;
    ofstream file_;
    file_.open(txt);
    file_ << "CONFIRMED" << endl;
    file_ << this->counter << endl;
    for(int i= 0; i<this->counter;i++){
        file_ << this->colors[i] << endl;
        file_ << this->textos[i]->get_text().toStdString() << endl;
    }
    file_.close();
}
