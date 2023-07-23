#include <gui/screen_screen/screenView.hpp>

screenView::screenView()
{
    keyboard.setPosition(1, -20, 320, 240);
 // startx, starty, width, height
    add(keyboard);
    keyboard.setVisible(false);
}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}
void screenView::nameClicked()
{
	keyboard.setVisible(true);  // show keyboard
	keyboard.invalidate();
	flexButtonExit.setVisible(true);  // show exit button
	flexButtonExit.invalidate();
	flexButtonOK.setVisible(true);  // show ok button
	flexButtonOK.invalidate();

	nameMod = 1;
	ageMod = 0;
}

void screenView::ageClicked()
{
	keyboard.setVisible(true);  // show keyboard
	keyboard.invalidate();
	flexButtonExit.setVisible(true);  // show exit button
	flexButtonExit.invalidate();
	flexButtonOK.setVisible(true);  // show ok button
	flexButtonOK.invalidate();
	nameMod = 0;
	ageMod = 1;
}

void screenView::exitClicked()
{
	keyboard.setVisible(false);  // hide keyboard
	keyboard.invalidate();
	flexButtonExit.setVisible(false);  // hide exit button
	flexButtonExit.invalidate();
	flexButtonOK.setVisible(false);  // hide ok button
	flexButtonOK.invalidate();


        nameMod = ageMod = 0;
}

void screenView::okClicked()
{
	keyboard.setVisible(false);  // hide keyboard
	keyboard.invalidate();
	flexButtonExit.setVisible(false);  // hide exit button
	flexButtonExit.invalidate();
	flexButtonOK.setVisible(false);  // hide ok button
	flexButtonOK.invalidate();
	if (nameMod)
	{
		Unicode::strncpy(textAreaNameBuffer, keyboard.getBuffer(), TEXTAREANAME_SIZE);
		textAreaName.invalidate();
	}

	if (ageMod)
	{
		Unicode::strncpy(textAreaAgeBuffer, keyboard.getBuffer(), TEXTAREAAGE_SIZE);
		textAreaAge.invalidate();
	}
	// once the data is copied, clear the keyboard buffer
	keyboard.clearBuffer();
}
