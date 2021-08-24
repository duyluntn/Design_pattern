#ifndef INTERFACE_THEME_H
#define INTERFACE_THEME_H

#include "IScrollBar.h"
#include "IButton.h"


class ITheme
{
    public:
        virtual IScrollBar * createScrollBar() = 0;
        virtual IButton * createButton() = 0;
};


#endif