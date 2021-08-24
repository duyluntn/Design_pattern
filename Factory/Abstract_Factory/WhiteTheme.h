#ifndef WHITE_THEME_H
#define WHITE_THEME_H

#include "IScrollBar.h"
#include "IButton.h"
#include "ITheme.h"

class WhiteTheme: public ITheme
{
public:
    IScrollBar * createScrollBar() override;
    IButton * createButton() override;
};

#endif