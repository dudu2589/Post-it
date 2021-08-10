#ifndef POST_IT_ENTER_TEXT_NAME_H
#define POST_IT_ENTER_TEXT_NAME_H

#include <QMainWindow>

namespace Ui {
class post_it_enter_text_name;
}

class post_it_enter_text_name : public QMainWindow
{
    Q_OBJECT

public:
    int argc;
    char **argv;
    explicit post_it_enter_text_name(QWidget *parent = nullptr);
    ~post_it_enter_text_name();

private slots:

    void on_keySequenceEdit_editingFinished();

private:
    Ui::post_it_enter_text_name *ui;
};

#endif // POST_IT_ENTER_TEXT_NAME_H
