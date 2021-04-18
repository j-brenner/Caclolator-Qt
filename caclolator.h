#pragma once

#include <QtWidgets>
#include <QStack>

class QPushButton;
class QLineEdit;

class Caclolator : public QWidget
{
    Q_OBJECT

public:
    Caclolator(QWidget *parent = nullptr);
    ~Caclolator();

public:
    QPushButton *createButton(const QString& str);
    void calculate();

public slots:
    void slotButtonClicked();

private:
    QLineEdit *disp;
    QStack<QString> stack;
    QString strForDisp;
};
