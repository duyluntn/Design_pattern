#include "DarkTheme.h"
#include "DarkButton.h"
#include "DarkScrollBar.h"


IScrollBar * DarkTheme::createScrollBar() {
    return new DarkScrollBar();
}
IButton * DarkTheme::createButton() {
    return new DarkButton();
}
