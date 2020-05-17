#include "m2_screen.h"


m2_screen::m2_screen()
{

}

int m2_screen::getScreenWidth()
{
    return screen_width;

}

int m2_screen::getScreenHeight()
{
    return screen_height;
}

void m2_screen::setDesktopWidgetAndInit(QDesktopWidget *dw)
{
    screen_width=dw->screenGeometry().width();
    screen_height=dw->screenGeometry().height();
}

void m2_screen::setDesktopWidgetAndInitA(QDesktopWidget *dw)
{
    screen_width=dw->availableGeometry().width();
    screen_height=dw->availableGeometry().height();
}

