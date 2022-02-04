#include <QApplication>
#include <QPushButton>
#include "calculatormainwindow.h"
#include <./ui_calculator.h>


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalculatorMainWindow window( nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.lineEdit=calculator.lineEdit;
    window.resize(200, 400);
    window.show();
    return QApplication::exec();
    std::cout << "Just practice for git" << std::endl;
}
