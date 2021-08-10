#ifndef OPEN_TEXT_FILE_H
#define OPEN_TEXT_FILE_H

#include <QMainWindow>

namespace Ui {
class open_text_file;
}

class open_text_file : public QMainWindow
{
    Q_OBJECT

public:
    explicit open_text_file(QWidget *parent = nullptr);
    ~open_text_file();

private:
    Ui::open_text_file *ui;
};

#endif // OPEN_TEXT_FILE_H
