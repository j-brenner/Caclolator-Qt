#include "caclolator.h"

Caclolator::Caclolator(QWidget *parent) : QWidget(parent)
{
    disp = new QLineEdit;
    disp->setMinimumSize(150, 50);
    QChar buttonlabels[4][4] = {
        { '7', '8', '9', '/' },
        { '4', '5', '6', '*' },
        { '1', '2', '3', '-' },
        { '0', '.', '=', '+' }
    };
}


Caclolator::~Caclolator()
{
}


//Calculator::Calculator(QWidget* pwgt/*= О*/) : QWidget(pwgt)
//{
//rn_plcd = new QLCDNumЬer(l2);
//rn_plcd->setSegmentStyle(QLCDNumЬer::Flat);
//rn_plcd->setMinirnumSize(l50, 50);
//QChar aButtons[4] [4] = { { '7', '8', 1 91, 1/1},
//{ 1 4 1, '5', t 6' 1 1*1},
//{ 'l', '21' 1 3', ,_,},
//{'О', '=' 1 +'}
//};
////Layout setup
//()GridLayout* ptopLayout = new ()GridLayout;
//ptopLayout->addWidget(rn_plcd, О, О, 1, 4);
//ptopLayout->addWidget(createButton("CE"), 1, 3);
//for (int i = О; i < 4; ++i) {
//for (int j =О; j < 4; ++j)
//ptopLayout->addWidget(createButton(aButtons[i] [j]), i + 2, j);
//setLayout(ptopLayout);
