#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QLineEdit;
class QGridLayout;
class QPushButton;
QT_END_NAMESPACE

class Calculator : public QWidget
{
    Q_OBJECT
public:
    Calculator(QWidget *parent = nullptr);

private slots:
    void onButtonClicked();

private:
    QLineEdit *display;
    QGridLayout *grid;

    void addButton(const QString &text, int row, int col, int rowSpan = 1, int colSpan = 1);
    double evaluateExpression(const QString &expr, bool &ok);
};

#endif