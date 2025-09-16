#include <QApplication>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setStyleSheet(
        //Color for the calculator
        "QWidget { background-color:rgb(0, 36, 107); color: white; }"
        "QLineEdit { "
        "   background-color: #3e3e3e;"
        "   border: 1px solid #5c5c5c;"
        "   color: #e0e0e0;"
        "   font-size: 24px;"
        "   padding: 10px;"
        "}"
        "QPushButton { "
        "   background-color: #5c5c5c;"
        "   border: none;"
        "   color: #ffffff;"
        "   font-size: 18px;"
        "   padding: 15px;"
        "}"
        "QPushButton:hover { background-color: #6a6a6a; }"
        "QPushButton:pressed { background-color: #444; }"
        
        // Styling for delete buttons
        "#clearButton, #backspaceButton { background-color: #d63d3d; }"
        "#clearButton:hover, #backspaceButton:hover { background-color: #e55555; }"
        "#clearButton:pressed, #backspaceButton:pressed { background-color: #b82c2c; }"
        
        // Styling for operators
        "QPushButton[text=\"+\"], QPushButton[text=\"-\"], QPushButton[text=\"*\"], QPushButton[text=\"/\"] { background-color: #548cd6; }"
        "QPushButton[text=\"+\"], QPushButton[text=\"-\"], QPushButton[text=\"*\"], QPushButton[text=\"/\"]:hover { background-color: #639ce5; }"
        "QPushButton[text=\"+\"], QPushButton[text=\"-\"], QPushButton[text=\"*\"], QPushButton[text=\"/\"]:pressed { background-color: #4272b3; }"
    );

    Calculator w;
    w.show();
    return a.exec();
}