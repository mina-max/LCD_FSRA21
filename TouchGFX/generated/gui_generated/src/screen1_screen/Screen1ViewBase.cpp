/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

Screen1ViewBase::Screen1ViewBase()
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(7, 17, 35));

    container1.setPosition(239, -2, 318, 480);

    textArea2.setXY(129, 388);
    textArea2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));
    container1.add(textArea2);

    textArea1.setPosition(69, 278, 185, 114);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID2).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));
    container1.add(textArea1);

    gauge1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_GAUGES_ORIGINAL_GAUGE_BACKGROUND_STYLE_00_ID));
    gauge1.setPosition(36, 24, 251, 251);
    gauge1.setCenter(125, 125);
    gauge1.setStartEndAngle(-90, 90);
    gauge1.setRange(0, 105);
    gauge1.setValue(0);
    gauge1.setEasingEquation(touchgfx::EasingEquations::linearEaseIn);
    gauge1.setNeedle(BITMAP_BLUE_NEEDLES_ORIGINAL_GAUGE_NEEDLE_STYLE_00_ID, 11, 55);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    container1.add(gauge1);

    container2.setPosition(550, -7, 250, 480);

    textArea3.setXY(97, 18);
    textArea3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));
    container2.add(textArea3);

    line1.setPosition(-6, -13, 113, 63);
    line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(13, 45);
    line1.setEnd(95, 45);
    line1.setLineWidth(4);
    line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line1);

    line1_1.setPosition(124, -13, 121, 63);
    line1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(16, 45);
    line1_1.setEnd(94, 45);
    line1_1.setLineWidth(4);
    line1_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line1_1);

    textArea3_1.setXY(99, 245);
    textArea3_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3_1.setLinespacing(0);
    textArea3_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID6));
    container2.add(textArea3_1);

    line1_2.setPosition(-6, 214, 113, 63);
    line1_2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_2.setPainter(line1_2Painter);
    line1_2.setStart(13, 45);
    line1_2.setEnd(95, 45);
    line1_2.setLineWidth(4);
    line1_2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line1_2);

    line1_1_1.setPosition(124, 214, 121, 63);
    line1_1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_1_1.setPainter(line1_1_1Painter);
    line1_1_1.setStart(16, 45);
    line1_1_1.setEnd(94, 45);
    line1_1_1.setLineWidth(4);
    line1_1_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line1_1_1);

    line2.setPosition(2, 24, 105, 209);
    line2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line2.setPainter(line2Painter);
    line2.setStart(5, 8);
    line2.setEnd(5, 198);
    line2.setLineWidth(4);
    line2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line2);

    line2_1.setPosition(213, 27, 105, 218);
    line2_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line2_1.setPainter(line2_1Painter);
    line2_1.setStart(5, 5);
    line2_1.setEnd(5, 196);
    line2_1.setLineWidth(4);
    line2_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line2_1);

    line2_2.setPosition(2, 258, 105, 216);
    line2_2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line2_2.setPainter(line2_2Painter);
    line2_2.setStart(5, 0);
    line2_2.setEnd(5, 199);
    line2_2.setLineWidth(4);
    line2_2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line2_2);

    line2_3.setPosition(213, 258, 105, 216);
    line2_3Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line2_3.setPainter(line2_3Painter);
    line2_3.setStart(5, 0);
    line2_3.setEnd(5, 199);
    line2_3.setLineWidth(4);
    line2_3.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line2_3);

    line3.setPosition(2, 203, 226, 50);
    line3Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line3.setPainter(line3Painter);
    line3.setStart(5, 20);
    line3.setEnd(215, 20);
    line3.setLineWidth(4);
    line3.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line3);

    line3_1.setPosition(2, 437, 226, 48);
    line3_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line3_1.setPainter(line3_1Painter);
    line3_1.setStart(5, 20);
    line3_1.setEnd(215, 20);
    line3_1.setLineWidth(4);
    line3_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container2.add(line3_1);

    circle1.setPosition(136, 314, 86, 104);
    circle1.setCenter(40, 40);
    circle1.setRadius(2);
    circle1.setLineWidth(-1);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    circle1.setPainter(circle1Painter);
    container2.add(circle1);

    voltage_LV.setXY(17, 286);
    voltage_LV.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    voltage_LV.setLinespacing(0);
    Unicode::snprintf(voltage_LVBuffer, VOLTAGE_LV_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID10).getText());
    voltage_LV.setWildcard(voltage_LVBuffer);
    voltage_LV.resizeToCurrentText();
    voltage_LV.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));
    container2.add(voltage_LV);

    temp_LV.setXY(18, 345);
    temp_LV.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    temp_LV.setLinespacing(0);
    Unicode::snprintf(temp_LVBuffer, TEMP_LV_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID20).getText());
    temp_LV.setWildcard(temp_LVBuffer);
    temp_LV.resizeToCurrentText();
    temp_LV.setTypedText(touchgfx::TypedText(T_SINGLEUSEID19));
    container2.add(temp_LV);

    voltage_HV.setXY(17, 59);
    voltage_HV.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    voltage_HV.setLinespacing(0);
    Unicode::snprintf(voltage_HVBuffer, VOLTAGE_HV_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID22).getText());
    voltage_HV.setWildcard(voltage_HVBuffer);
    voltage_HV.resizeToCurrentText();
    voltage_HV.setTypedText(touchgfx::TypedText(T_SINGLEUSEID21));
    container2.add(voltage_HV);

    temp_HV.setXY(18, 113);
    temp_HV.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    temp_HV.setLinespacing(0);
    Unicode::snprintf(temp_HVBuffer, TEMP_HV_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID24).getText());
    temp_HV.setWildcard(temp_HVBuffer);
    temp_HV.resizeToCurrentText();
    temp_HV.setTypedText(touchgfx::TypedText(T_SINGLEUSEID23));
    container2.add(temp_HV);

    circle1_1.setPosition(138, 81, 92, 61);
    circle1_1.setCenter(40, 40);
    circle1_1.setRadius(2);
    circle1_1.setLineWidth(-1);
    circle1_1.setArc(0, 360);
    circle1_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    circle1_1.setPainter(circle1_1Painter);
    container2.add(circle1_1);

    voltage_HV_1.setXY(18, 172);
    voltage_HV_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    voltage_HV_1.setLinespacing(0);
    Unicode::snprintf(voltage_HV_1Buffer, VOLTAGE_HV_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID26).getText());
    voltage_HV_1.setWildcard(voltage_HV_1Buffer);
    voltage_HV_1.resizeToCurrentText();
    voltage_HV_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID25));
    container2.add(voltage_HV_1);

    voltage_HV_1_1.setXY(18, 405);
    voltage_HV_1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    voltage_HV_1_1.setLinespacing(0);
    Unicode::snprintf(voltage_HV_1_1Buffer, VOLTAGE_HV_1_1_SIZE, "%s", touchgfx::TypedText(T_SINGLEUSEID28).getText());
    voltage_HV_1_1.setWildcard(voltage_HV_1_1Buffer);
    voltage_HV_1_1.resizeToCurrentText();
    voltage_HV_1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID27));
    container2.add(voltage_HV_1_1);

    soc_lv.setXY(157, 393);
    soc_lv.setProgressIndicatorPosition(0, 0, 54, 54);
    soc_lv.setRange(0, 100);
    soc_lv.setCenter(27, 27);
    soc_lv.setRadius(20);
    soc_lv.setLineWidth(10);
    soc_lv.setStartEndAngle(0, 360);
    soc_lv.setCapPrecision(180);
    soc_lv.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_LINE_FULL_ID));
    soc_lvPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(17, 80, 29));
    soc_lv.setPainter(soc_lvPainter);
    soc_lv.setValue(60);
    container2.add(soc_lv);

    soc_hv.setXY(157, 160);
    soc_hv.setProgressIndicatorPosition(0, 0, 54, 54);
    soc_hv.setRange(0, 100);
    soc_hv.setCenter(27, 27);
    soc_hv.setRadius(20);
    soc_hv.setLineWidth(10);
    soc_hv.setStartEndAngle(0, 360);
    soc_hv.setCapPrecision(180);
    soc_hv.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_LINE_FULL_ID));
    soc_hvPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(17, 80, 29));
    soc_hv.setPainter(soc_hvPainter);
    soc_hv.setValue(60);
    container2.add(soc_hv);

    container3.setPosition(20, 105, 241, 271);

    textArea3_2.setXY(46, 30);
    textArea3_2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea3_2.setLinespacing(0);
    textArea3_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID29));
    container3.add(textArea3_2);

    line1_3.setPosition(0, -4, 113, 63);
    line1_3Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_3.setPainter(line1_3Painter);
    line1_3.setStart(13, 45);
    line1_3.setEnd(43, 45);
    line1_3.setLineWidth(4);
    line1_3.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container3.add(line1_3);

    line1_1_2.setPosition(130, -4, 121, 63);
    line1_1_2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line1_1_2.setPainter(line1_1_2Painter);
    line1_1_2.setStart(75, 45);
    line1_1_2.setEnd(94, 45);
    line1_1_2.setLineWidth(4);
    line1_1_2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container3.add(line1_1_2);

    line2_4.setPosition(8, 40, 19, 290);
    line2_4Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line2_4.setPainter(line2_4Painter);
    line2_4.setStart(5, 0);
    line2_4.setEnd(5, 220);
    line2_4.setLineWidth(4);
    line2_4.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container3.add(line2_4);

    line2_4_1.setPosition(219, 39, 22, 232);
    line2_4_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line2_4_1.setPainter(line2_4_1Painter);
    line2_4_1.setStart(5, 4);
    line2_4_1.setEnd(5, 220);
    line2_4_1.setLineWidth(4);
    line2_4_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container3.add(line2_4_1);

    line3_2.setPosition(8, 239, 221, 32);
    line3_2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    line3_2.setPainter(line3_2Painter);
    line3_2.setStart(5, 20);
    line3_2.setEnd(215, 20);
    line3_2.setLineWidth(4);
    line3_2.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    container3.add(line3_2);

    system1.setXY(98, 82);
    system1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    system1.setLinespacing(0);
    system1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID30));
    container3.add(system1);

    system1_1.setXY(100, 113);
    system1_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    system1_1.setLinespacing(0);
    system1_1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID31));
    container3.add(system1_1);

    system1_2.setXY(100, 146);
    system1_2.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    system1_2.setLinespacing(0);
    system1_2.setTypedText(touchgfx::TypedText(T_SINGLEUSEID32));
    container3.add(system1_2);

    system1_3.setXY(100, 178);
    system1_3.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    system1_3.setLinespacing(0);
    system1_3.setTypedText(touchgfx::TypedText(T_SINGLEUSEID33));
    container3.add(system1_3);

    circle5.setPosition(34, 58, 57, 55);
    circle5.setCenter(40, 40);
    circle5.setRadius(11);
    circle5.setLineWidth(0);
    circle5.setArc(0, 360);
    circle5Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(220, 0, 0));
    circle5.setPainter(circle5Painter);
    container3.add(circle5);

    circle5_1.setPosition(34, 89, 57, 55);
    circle5_1.setCenter(40, 40);
    circle5_1.setRadius(11);
    circle5_1.setLineWidth(0);
    circle5_1.setArc(0, 360);
    circle5_1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(220, 0, 0));
    circle5_1.setPainter(circle5_1Painter);
    container3.add(circle5_1);

    circle5_2.setPosition(34, 122, 57, 55);
    circle5_2.setCenter(40, 40);
    circle5_2.setRadius(11);
    circle5_2.setLineWidth(0);
    circle5_2.setArc(0, 360);
    circle5_2Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(220, 0, 0));
    circle5_2.setPainter(circle5_2Painter);
    container3.add(circle5_2);

    circle5_3.setPosition(34, 154, 57, 55);
    circle5_3.setCenter(40, 40);
    circle5_3.setRadius(11);
    circle5_3.setLineWidth(0);
    circle5_3.setArc(0, 360);
    circle5_3Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(220, 0, 0));
    circle5_3.setPainter(circle5_3Painter);
    container3.add(circle5_3);

    digitalClock1.setPosition(12, 7, 50, 21);
    digitalClock1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    digitalClock1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID34));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClock1.setTime24Hour(13, 51, 6);

    add(__background);
    add(box1);
    add(container1);
    add(container2);
    add(container3);
    add(digitalClock1);
}

void Screen1ViewBase::setupScreen()
{

}

//Handles when a key is pressed
void Screen1ViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //Interaction1
        //When hardware button 0 clicked change screen to Screen2
        //Go to Screen2 with no screen transition
        application().gotoScreen2ScreenNoTransition();
    }
}