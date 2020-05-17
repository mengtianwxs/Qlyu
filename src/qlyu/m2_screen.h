#ifndef M2_SCREEN_H
#define M2_SCREEN_H

#include <QObject>
#include <QDesktopWidget>
#include<QApplication>

class m2_screen
{
public:
    m2_screen();
    int getScreenWidth();
    int getScreenHeight();

    void setDesktopWidgetAndInit(QDesktopWidget* dw);
    void setDesktopWidgetAndInitA(QDesktopWidget* dw);

private:
    int screen_width;
    int screen_height;

};

#endif // M2_SCREEN_H
