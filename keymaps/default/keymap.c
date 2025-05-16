#include QMK_KEYBOARD_H

enum custom_keycodes
{
    CALC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_sdf_3x2(
        KC_INS,   KC_HOME,   KC_PGUP,
        CALC,   KC_END,   KC_PGDN

    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    case CALC:
        if (record->event.pressed)
        break;
    
    default:
        break;
    }
}
