#ifndef PROTO_NOTE_H
#define PROTO_NOTE_H

#include <QEvent>
#include <QMainWindow>
#include <QMouseEvent>
#include <QObject>
#include <QSizeGrip>
#include <QPlainTextEdit>
#include <QWidget>
#include <string>
#include "decoration.h"
#include<iostream>


namespace Ui {
class Sticky;
}
class Sticky : public QMainWindow {
    Q_OBJECT

public:

    Sticky(int color , const QString file = 0 );
    Sticky(const Sticky& sticky);
    ~Sticky();
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void setvalue(int color){ this->color_value = color;}

    QString get_text(){return  this->text->toPlainText() ; }

private:

    Ui::Sticky *ui;

    std::string getStylesheet(QString a );
    Decoration* decoration;
    QSizeGrip* grip;
    QPlainTextEdit* text;
    QWidget* window;

    QPoint _mpos;
    bool dragging;
    int color_value;
};

#endif
