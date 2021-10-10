#ifndef STATE_H_INCLUDED
#define STATE_H_INCLUDED

#include "btstack/bluetooth.h"
#include "system/includes.h"
#include "bt_common.h"

struct light_state {
    u8_t current;
    u8_t previous;

    u16 lightness_actual;
    u16 lightness_linear;
    u16 lightness_default;
    u16 lightness_last;
    u16 lightness_range_min;
    u16 lightness_range_max;
    u8_t led_gpio_pin;
};

#endif // STATE_H_INCLUDED
