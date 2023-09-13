#include "widget.h"
#include "ui_widget.h"

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


void Widget::on_btn_Sum_clicked()
{
    ui->Operand1->setText("Слагаемое1");
    ui->Operand2->setText("Слагаемое2");
    ui->Result->setText("Сумма");
}



void Widget::on_btn_Vich_clicked()
{
    ui->Operand1->setText("Уменьшаемое");
    ui->Operand2->setText("Вычитаемое");
    ui->Result->setText("Разность");
}


void Widget::on_btn_Umn_clicked()
{
    ui->Operand1->setText("1 Множитель");
    ui->Operand2->setText("2 Множитель");
    ui->Result->setText("Произведение");
}



void Widget::on_btn_Del_clicked()
{
    ui->Operand1->setText("Делимое");
    ui->Operand2->setText("Делитель");
    ui->Result->setText("Частное");
}

//Обработка нажатия кнопки "Посчитать"
void Widget::on_btnResult_clicked()
{
    QString op1_str; // строка первого операнда (вводится пользователем)
    QString op2_str; // строка второго операнда (вводится пользователем)
    QString res_str; // строка длдя хранениея результата (выводится порграммой)

    int op1, op2, res; // переменны для хранения чисел

    // Получаем значение из поля ввода (первый операнд)
    op1_str = ui->lineOp1->text();
    // Получаем значение из поля ввода (второй операнд)
    op2_str = ui->lineOp2->text();

    // приводим строку к целому числу и сохраняем чмсло в переменную(пока без проверки)
    op1 = op1_str.toInt();
    op2 = op2_str.toInt();


    // Проверяем, выбрал ли элемент с именем btn_sum
    // Функция is.Cheched возвращает:
    //      true - если элемент выбран
    //      false - если элемент не выбран
    if  (ui->btn_Sum->isChecked()) {
        res = op1 + op2;
    }
    else if (ui->btn_Vich->isChecked()) { // если сумма не выбрана, проверяем вычитание
        res = op1 - op2;
    }
    else if (ui->btn_Umn->isChecked()) { // Подсчет Умножения
        res = op1 * op2;
    }
    else if (ui->btn_Del->isChecked()) { // Подсчет Деления
        if (op2 == 0) {
            res = 0;
        }
        else if (op2 != 0) {
            res = op1 / op2;
        }

    }



    // преобразуем число в строку
    res_str = QString::number(res);
    // Выводим результат расчета в поле ввода "Результат"
    ui->lineRes->setText(res_str);

}


void Widget::on_btnPush_clicked() // Делаем кнопку очистки
{
    ui->lineOp1->setText("");
    ui->lineOp2->setText("");
    ui->lineRes->setText("");
}

