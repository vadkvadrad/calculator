#include "widget.h"
#include "ui_widget.h"

using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}
QString first_chis;
QString second_chis;
QString chosses_operator;
QString Button_bool_clear="0"; // Создаю переменную, которая будет принимать значение 1, когда программа вывела результат (для очиски кода)


// Описываю нажатия кнопок 0-9
void Widget::on_btn1_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"1"); // прибавляю к нему значение
}


void Widget::on_btn2_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"2"); // прибавляю к нему значение
}


void Widget::on_btn3_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"3"); // прибавляю к нему значение
}


void Widget::on_btn4_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"4"); // прибавляю к нему значение
}


void Widget::on_btn5_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"5"); // прибавляю к нему значение
}


void Widget::on_btn6_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"6"); // прибавляю к нему значение
}


void Widget::on_btn7_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"7"); // прибавляю к нему значение
}


void Widget::on_btn8_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"8"); // прибавляю к нему значение
}


void Widget::on_btn9_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"9"); // прибавляю к нему значение
}


void Widget::on_btn0_clicked()
{
    QString chislo;
    if (Button_bool_clear == "1") {
        ui->VvodLine->setText("");
        Button_bool_clear = "0";
    }
    chislo = ui->VvodLine->text(); // Получаю текст из строки ввода
    ui->VvodLine->setText(chislo+"0"); // прибавляю к нему значение
}


void Widget::on_btnClear_clicked() //Стираю значения из строки ввода
{
    ui->VvodLine->setText("");
}



void Widget::on_btnResult_clicked() // Логика для кнопки результат
{
    second_chis = ui->VvodLine->text(); // Получаю первое число
    int first_chis_int, second_chis_int, Result_int; //Создаю два числа и резульат для перевода в int
    first_chis_int = first_chis.toInt();
    second_chis_int = second_chis.toInt();
    Button_bool_clear = "1";
    //проверяю, какое арифметическое действие выбрано
    QString Result_str;
    if (chosses_operator == "+") {
        Result_int = first_chis_int + second_chis_int;
        Result_str = QString::number(Result_int); //Переводим результат из int в srt
        ui->VvodLine->setText(Result_str);// Выводим результат
    } else if (chosses_operator == "-") {
        Result_int = first_chis_int - second_chis_int;
        Result_str = QString::number(Result_int); //Переводим результат из int в srt
        ui->VvodLine->setText(Result_str);// Выводим результат
    } else if (chosses_operator == "*") {
        Result_int = first_chis_int * second_chis_int;
        Result_str = QString::number(Result_int); //Переводим результат из int в srt
        ui->VvodLine->setText(Result_str);// Выводим результат
    } else if (chosses_operator == "/") {
        if (second_chis_int != 0) { // Проверка на делимость на 0
            Result_int = first_chis_int / second_chis_int;
            Result_str = QString::number(Result_int); //Переводим результат из int в srt
            ui->VvodLine->setText(Result_str);// Выводим результат
        } else {
            ui->VvodLine->setText("ERROR");
        }
    }

}



// Описываю логику кнопок + - * /
void Widget::on_btnPlus_clicked()
{
    first_chis = ui->VvodLine->text(); // Запоминаю первое число
    chosses_operator = "+"; // Запоминаю выбранный оператор из + - * /
    ui->VvodLine->setText("");
}


void Widget::on_btnMinus_clicked()
{
    first_chis = ui->VvodLine->text(); // Запоминаю первое число
    chosses_operator = "-"; // Запоминаю выбранный оператор из + - * /
    ui->VvodLine->setText("");
}


void Widget::on_btnMultiply_clicked()
{
    first_chis = ui->VvodLine->text(); // Запоминаю первое число
    chosses_operator = "*"; // Запоминаю выбранный оператор из + - * /
    ui->VvodLine->setText("");
}


void Widget::on_btnDivide_clicked()
{
    first_chis = ui->VvodLine->text(); // Запоминаю первое число
    chosses_operator = "/"; // Запоминаю выбранный оператор из + - * /
    ui->VvodLine->setText("");
}

