#include "battery.h"
#include <stdio.h>

LV_IMG_DECLARE(bolt);
LV_FONT_DECLARE(lv_font_montserrat_16);

static void draw_level(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_label_dsc_t label_right_dsc;
    init_label_dsc(&label_right_dsc, LVGL_FOREGROUND, &lv_font_montserrat_16, LV_TEXT_ALIGN_LEFT);

    char text[10] = {};
    sprintf(text, "%i%%", state->battery);
    
    // For peripheral status screen, let's place it at x=0, y=0 on our 68px wide canvas
    lv_canvas_draw_text(canvas, 0, 0, 42, &label_right_dsc, text);
}

static void draw_charging_level(lv_obj_t *canvas, const struct status_state *state) {
    lv_draw_img_dsc_t img_dsc;
    lv_draw_img_dsc_init(&img_dsc);
    lv_draw_label_dsc_t label_right_dsc;
    init_label_dsc(&label_right_dsc, LVGL_FOREGROUND, &lv_font_montserrat_16, LV_TEXT_ALIGN_LEFT);

    char text[10] = {};
    sprintf(text, "%i%%", state->battery);
    
    lv_canvas_draw_text(canvas, 0, 0, 42, &label_right_dsc, text);
    
    // Draw bolt charging icon next to percentage
    lv_canvas_draw_img(canvas, 42, 2, &bolt, &img_dsc);
}

void draw_battery_status(lv_obj_t *canvas, const struct status_state *state) {
    if (state->charging) {
        draw_charging_level(canvas, state);
    } else {
        draw_level(canvas, state);
    }
}
