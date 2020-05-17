#include "m2_look.h"

m2_look::m2_look()
{

}

m2_look::m2_look(QWidget *parent)
{

    mw=parent;

}

void m2_look::setWidget(QWidget *parent)
{

    mw=parent;

}

QPushButton *m2_look::findPushButtonByObjectName(QString name)
{

    return mw->findChild<QPushButton*>(name);

}

QLineEdit *m2_look::findLineEditByObjectName(QString name)
{

    return mw->findChild<QLineEdit*>(name);

}
