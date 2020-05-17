#ifndef M2_LOOK_H
#define M2_LOOK_H

#include <QLineEdit>
#include <QObject>
#include <QPushButton>

class m2_look
{
public:
    m2_look();
    m2_look(QWidget* parent);
    void setWidget(QWidget* parent);
    QPushButton* findPushButtonByObjectName(QString name);
    QLineEdit* findLineEditByObjectName(QString name);

private:
    QWidget* mw;
};

#endif // M2_LOOK_H
