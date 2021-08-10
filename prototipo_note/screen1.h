#ifndef SCREEN1_H
#define SCREEN1_H

#include <QMainWindow>
#include "data_base.h"

namespace Ui {
class screen1;
}

class screen1 : public QMainWindow
{
    Q_OBJECT

public:
    int argc;
    char **argv;
    explicit screen1(Data_base *db , QWidget *parent = nullptr);
    void plus_counter(){this->counter++;}
    void push_colors(int color){colors.push_back(color);}

    ~screen1();
private slots :

    void on_pushButton_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_4_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::screen1 *ui;
    int color_value_s;
    std::vector <int> colors;
    int counter = 0;
    Data_base *DB;
    QString NAME_TXT ;

};

#endif // SCREEN1_H
