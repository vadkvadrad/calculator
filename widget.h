#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btn_Sum_clicked();

    void on_btn_Vich_clicked();

    void on_btn_Umn_clicked();

    void on_btn_Del_clicked();

    void on_btnResult_clicked();

    void on_btnPush_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
