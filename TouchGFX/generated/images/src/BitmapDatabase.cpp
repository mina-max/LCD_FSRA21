// 4.16.1 0xd4d39c52
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_gauges_original_gauge_background_style_00[]; // BITMAP_BLUE_GAUGES_ORIGINAL_GAUGE_BACKGROUND_STYLE_00_ID = 0, Size: 251x251 pixels
extern const unsigned char image_blue_needles_original_gauge_needle_style_00[]; // BITMAP_BLUE_NEEDLES_ORIGINAL_GAUGE_NEEDLE_STYLE_00_ID = 1, Size: 23x66 pixels
extern const unsigned char image_blue_progressindicators_bg_small_circle_indicator_bg_line_full[]; // BITMAP_BLUE_PROGRESSINDICATORS_BG_SMALL_CIRCLE_INDICATOR_BG_LINE_FULL_ID = 2, Size: 54x54 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_blue_gauges_original_gauge_background_style_00, 0, 251, 251, 37, 37, 177, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 177, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_needles_original_gauge_needle_style_00, 0, 23, 66, 5, 34, 13, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 28, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_progressindicators_bg_small_circle_indicator_bg_line_full, 0, 54, 54, 40, 13, 10, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 28, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
