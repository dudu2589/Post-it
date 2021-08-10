#ifndef AUTO_SAVE_FILE_H
#define AUTO_SAVE_FILE_H

#include <QWidget>

namespace Ui {
class auto_save_file;
}

class auto_save_file : public QWidget
{
    Q_OBJECT

public:
    explicit auto_save_file(QWidget *parent = nullptr);
    ~auto_save_file();

private:
    Ui::auto_save_file *ui;
};

#endif // AUTO_SAVE_FILE_H
