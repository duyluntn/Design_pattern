#include "WhiteTheme.h"
#include "DarkTheme.h"

int main() {
    WhiteTheme whiteTheme;
    DarkTheme darkTheme;
    ITheme * theme;
    theme = &whiteTheme;
    IButton * button = theme->createButton();
    button->print();
    IScrollBar * scrollBar = theme->createScrollBar();
    scrollBar->print();

    theme = &darkTheme;
    button = theme->createButton();
    button->print();
    scrollBar = theme->createScrollBar();
    scrollBar->print();
}