#include <gui/screen1_screen/Screen1View.hpp>

extern uint8_t rxData[8];
extern int screen;

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::handleTickEvent()
{
    tickCounter++;

   if(screen == 2) {
	   application().gotoScreen2ScreenNoTransition();
   }




    // Change value every 20 tick.
    if (tickCounter % 20 == 0)
    {
    	uint32_t speed = (rxData[3] << 24) + (rxData[2] << 16) + (rxData[1] << 8) + rxData[0];
      // Insert data point
      gauge1.updateValue(speed, 20); // animates needle and arc to new value with a duration of 30 ticks
      Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", speed);
      textArea1.invalidate();
    }
}

void Screen1View::buttonPressed() {

}



