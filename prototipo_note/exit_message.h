#ifndef EXIT_MESSAGE_H
#define EXIT_MESSAGE_H

#include <QMainWindow>

namespace Ui {
class exit_message;
}

class exit_message : public QMainWindow
{
    Q_OBJECT

public:
    explicit exit_message(QWidget *parent = nullptr);
    ~exit_message();

private:
    Ui::exit_message *ui;
};

#endif // EXIT_MESSAGE_H
