#ifndef SCREENVIEW_HPP
#define SCREENVIEW_HPP

#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp>

class screenView : public screenViewBase
{
public:
    screenView();
    virtual ~screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void nameClicked();
    virtual void ageClicked();
    virtual void okClicked();
    virtual void exitClicked();
protected:

    CustomKeyboard keyboard;
    int nameMod;
    int ageMod;
};

#endif // SCREENVIEW_HPP
