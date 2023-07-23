// Generated by imageconverter. Please, do not edit!

#ifndef TOUCHGFX_BITMAPDATABASE_HPP
#define TOUCHGFX_BITMAPDATABASE_HPP

#include <touchgfx/hal/Types.hpp>
#include <touchgfx/Bitmap.hpp>

const uint16_t BITMAP_ICON_KEYBOARD_EVEN_ROW_ID = 0;
const uint16_t BITMAP_ICON_KEYBOARD_HIGHLIGHTED_ID = 1;
const uint16_t BITMAP_ICON_KEYBOARD_ODD_ROW_ID = 2;
const uint16_t BITMAP_KEYBOARD_BACKGROUND_ID = 3;
const uint16_t BITMAP_KEYBOARD_KEY_DELETE_HIGHLIGHTED_ID = 4;
const uint16_t BITMAP_KEYBOARD_KEY_HIGHLIGHTED_ID = 5;
const uint16_t BITMAP_KEYBOARD_KEY_NUM_HIGHLIGHTED_ID = 6;
const uint16_t BITMAP_KEYBOARD_KEY_SHIFT_HIGHLIGHTED_ID = 7;
const uint16_t BITMAP_KEYBOARD_SPACE_HIGHLIGHTED_ID = 8;

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance();
uint16_t getInstanceSize();
} // namespace BitmapDatabase

#endif // TOUCHGFX_BITMAPDATABASE_HPP
