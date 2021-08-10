#ifndef __DECORATION_H__
#define __DECORATION_H__

#include <QEvent>
#include <QPoint>
#include <QPushButton>
#include <QWidget>

class Decoration : public QWidget {
    Q_OBJECT
public:
    Decoration(int color , QWidget* parent = 0);
    ~Decoration();
    void enterEvent(QEvent* event);
    void leaveEvent(QEvent* event);
    void setcolor(int color){color_ = color;};
private slots:
    void on_add_clicked();
private:
    QPushButton* add;
    QPushButton* quit;
    int color_ ;
};

#endif
