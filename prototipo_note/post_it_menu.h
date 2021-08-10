#ifndef POST_IT_MENU_H
#define POST_IT_MENU_H

#include <QMainWindow>

namespace Ui {
class post_it_menu;
}

class post_it_menu : public QMainWindow
{
    Q_OBJECT

public:
    int argc;
    char **argv;
    explicit post_it_menu(QWidget *parent = nullptr);
    ~post_it_menu();

private slots:
    void on_pushButton_clicked();



private:
    Ui::post_it_menu *ui;
};

#endif // POST_IT_MENU_H
