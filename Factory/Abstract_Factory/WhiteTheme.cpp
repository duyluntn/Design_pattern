#include "WhiteButton.h"
#include "WhiteScrollBar.h"
#include "WhiteTheme.h"


IScrollBar * WhiteTheme::createScrollBar() {
    return new WhiteScrollBar();
}

IButton * WhiteTheme::createButton() {
    return new WhiteButton();
}
