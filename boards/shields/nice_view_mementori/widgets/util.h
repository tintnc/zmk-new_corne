#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

#define CANVAS_WIDTH 68
#define CANVAS_HEIGHT 160

#define LVGL_BACKGROUND lv_color_black()
#define LVGL_FOREGROUND lv_color_white()

struct status_state {
    uint8_t battery;
    bool charging;
    bool connected;
};

void rotate_canvas(lv_obj_t *canvas, lv_color_t cbuf[]);
void draw_background(lv_obj_t *canvas);
void init_rect_dsc(lv_draw_rect_dsc_t *rect_dsc, lv_color_t bg_color);
void init_line_dsc(lv_draw_line_dsc_t *line_dsc, lv_color_t color, uint8_t width);
void init_label_dsc(lv_draw_label_dsc_t *label_dsc, lv_color_t color, const lv_font_t *font, lv_text_align_t align);
