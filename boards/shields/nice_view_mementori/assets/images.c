#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BOLT
#define LV_ATTRIBUTE_IMG_BOLT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BOLT uint8_t bolt_map[] = {
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

    0x08, 0x10, 0x20, 0x40, 0xf8, 0x10, 0x20, 0x40, 0x80,
};

const lv_img_dsc_t bolt = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 5,
    .header.h = 9,
    .data_size = 17,
    .data = bolt_map,
};

#ifndef LV_ATTRIBUTE_IMG_BT
#define LV_ATTRIBUTE_IMG_BT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BT uint8_t bt_map[] = {
    0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
    0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

    0xfb, 0xf0, 0xf9, 0xf0, 0xf8, 0xf0, 0xda, 0x70, 0xcb, 0x30, 0xe2, 0x70, 0xf0, 0xf0, 0xf9,
    0xf0, 0xf0, 0xf0, 0xe2, 0x70, 0xcb, 0x30, 0xda, 0x70, 0xf8, 0xf0, 0xf9, 0xf0, 0xfb, 0xf0,
};

const lv_img_dsc_t bt = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 12,
    .header.h = 15,
    .data_size = 38,
    .data = bt_map,
};

#ifndef LV_ATTRIBUTE_IMG_BT_NO_SIGNAL
#define LV_ATTRIBUTE_IMG_BT_NO_SIGNAL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BT_NO_SIGNAL uint8_t
    bt_no_signal_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

        0xfb, 0xf0, 0x79, 0xf0, 0x38, 0xf0, 0x9a, 0x70, 0xcf, 0x30, 0xe6, 0x70, 0xf3, 0xf0, 0xf9,
        0xf0, 0xfc, 0xf0, 0xe6, 0x70, 0xcb, 0x30, 0xdb, 0x90, 0xf8, 0xc0, 0xf9, 0xe0, 0xfb, 0xf0,
};

const lv_img_dsc_t bt_no_signal = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 12,
    .header.h = 15,
    .data_size = 38,
    .data = bt_no_signal_map,
};
