//
// Created by burma on 16.01.2022.
//

#ifndef HW_37_4_1_CALCULATOR_CALCULATORMAINWINDOW_H
#define HW_37_4_1_CALCULATOR_CALCULATORMAINWINDOW_H


#include <QMainWindow>
#include <QtWidgets/QlineEdit>
#include <string>
#include <cmath>
#include <iostream>

enum OPTIONS {
    NOT_NULL=1,
    PLUS=2,
    MINUS=4,
    MULTIPLY=8,
    DIVIDE=16,
    EQUAL=32,
    COMMA=64,
    DIV_BY_ZERO=128
};

class CalculatorMainWindow : public QMainWindow {
Q_OBJECT

public:
    QLineEdit *lineEdit=nullptr;
    double firstNumber=0;
    int options = 0;
    CalculatorMainWindow (QWidget *parent=nullptr) : QMainWindow(parent) {}

public slots:

    void pressButtonAfterEqual () {
        options &=~ EQUAL;
        lineEdit->setText("");
        options &=~ COMMA;
    }

    void afterResult () {
        pressButtonAfterEqual();
        firstNumber = 0;
    }

    void sameButtonProcess (int numeral) {
        if (options & DIV_BY_ZERO) {
            clear();
            options &=~ PLUS; options &=~ MINUS; options &=~ DIVIDE; options &=~ MULTIPLY; // излишнее удаление масок???
        }
        if(options & EQUAL) {
            if (options & (PLUS | MINUS | DIVIDE | MULTIPLY)) {
                pressButtonAfterEqual();
            } else {
                afterResult();
            }
        }
        options |= NOT_NULL;
        lineEdit->setText(lineEdit->text()+QString::number(numeral));
    }
    void press0() {
        sameButtonProcess(0);
    }
    void press1() {
        sameButtonProcess(1);
    }
    void press2() {
        sameButtonProcess(2);
    }
    void press3() {
        sameButtonProcess(3);
    }
    void press4() {
        sameButtonProcess(4);
    }
    void press5() {
        sameButtonProcess(5);
    }
    void press6() {
        sameButtonProcess(6);
    }
    void press7() {
        sameButtonProcess(7);
    }
    void press8() {
        sameButtonProcess(8);
    }
    void press9() {
        sameButtonProcess(9);
    }

    void plus() {
        if (!(options & DIV_BY_ZERO)) {
            if (options & NOT_NULL)
                equal();
            if (options & (PLUS | MINUS | DIVIDE | MULTIPLY)) {
                options &= ~PLUS;
                options &= ~MINUS;
                options &= ~DIVIDE;
                options &= ~MULTIPLY;
            }
            options |= PLUS;
        }
    }

    void minus() {
        if (!(options & DIV_BY_ZERO)) {
            plus();
            options &= ~PLUS;
            options |= MINUS;
            if (!(options & EQUAL))
                lineEdit->setText("-");
        }
    }

    void equal() {
        if(!(options & EQUAL)) {
            if (options & NOT_NULL) {
                if (options & PLUS) {
                    firstNumber += QString(lineEdit->text()).toDouble();
                    lineEdit->setText(QString::number(firstNumber));
                } else if (options & MINUS) {
                    firstNumber -= QString(lineEdit->text()).toDouble();
                } else if (options & MULTIPLY) {
                    firstNumber *= QString(lineEdit->text()).toDouble();
                } else if (options & DIVIDE) {
                    if (QString(lineEdit->text()).toDouble() == 0) {
                        lineEdit->setText("ER: zero divider");
                        options |= DIV_BY_ZERO;
                    } else {
                        firstNumber /= QString(lineEdit->text()).toDouble();
                    }
                } else {
                    firstNumber = QString(lineEdit->text()).toDouble();
                }
                if (!(options & DIV_BY_ZERO))
                    lineEdit->setText(QString::number(firstNumber));
            }
            options &=~ PLUS; options &=~ MINUS; options &=~ DIVIDE; options &=~ MULTIPLY;
            options |= EQUAL;
        }
    }

    void multiply() {
        if (!(options & DIV_BY_ZERO)) {
            plus();
            options &= ~PLUS;
            options |= MULTIPLY;
        }
    }

    void divide() {
        if (!(options & DIV_BY_ZERO)) {
            plus();
            options &= ~PLUS;
            options |= DIVIDE;
        }
    }

    void comma(){
        if (!(options & DIV_BY_ZERO)) {
            if (!(options & COMMA)) {
                lineEdit->setText(lineEdit->text() + ".");
                options |= COMMA;
            }
        }
    }

    void clear () {
        if (options & EQUAL) {
            afterResult();
            options &=~ DIV_BY_ZERO;
        }
        lineEdit->setText("");
    }


};


#endif //HW_37_4_1_CALCULATOR_CALCULATORMAINWINDOW_H
