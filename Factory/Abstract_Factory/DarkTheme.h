#ifndef DARK_THEME_H
#define DARK_THEME_H

#include "IScrollBar.h"
#include "IButton.h"
#include "ITheme.h"

class DarkTheme: public ITheme
{
public:
    IScrollBar * createScrollBar() override;
    IButton * createButton() override;
};

#endif