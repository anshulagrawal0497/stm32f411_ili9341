/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENVIEWBASE_HPP
#define SCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class screenViewBase : public touchgfx::View<screenPresenter>
{
public:
    screenViewBase();
    virtual ~screenViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void nameClicked()
    {
        // Override and implement this function in screen
    }
    virtual void ageClicked()
    {
        // Override and implement this function in screen
    }
    virtual void okClicked()
    {
        // Override and implement this function in screen
    }
    virtual void exitClicked()
    {
        // Override and implement this function in screen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::BoxWithBorder boxWithName;
    touchgfx::BoxWithBorder boxWithAge;
    touchgfx::TextAreaWithOneWildcard textAreaName;
    touchgfx::TextAreaWithOneWildcard textAreaAge;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonName;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonAge;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  flexButtonExit;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  flexButtonOK;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREANAME_SIZE = 20;
    touchgfx::Unicode::UnicodeChar textAreaNameBuffer[TEXTAREANAME_SIZE];
    static const uint16_t TEXTAREAAGE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar textAreaAgeBuffer[TEXTAREAAGE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<screenViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREENVIEWBASE_HPP
