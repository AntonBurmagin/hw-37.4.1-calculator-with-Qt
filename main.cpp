#include <QApplication>
#include <QPushButton>
#include "calculatormainwindow.h"
#include <./ui_calculator.h>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalculatorMainWindow window( nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.lineEdit=calculator.lineEdit;
    window.resize(200, 400);
    window.move(100, 100);
    window.move(100, 350);
    window.show();
    return QApplication::exec();


}
