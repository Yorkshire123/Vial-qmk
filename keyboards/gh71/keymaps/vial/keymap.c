#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT (
        KC_EQL,  KC_MINS,  KC_PAST,  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_P7,   KC_P8,    KC_P9,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_P4,   KC_P5,    KC_P6,    KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,        KC_ENT,
        KC_P1,   KC_P2,    KC_P3,    KC_UP,   KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, 
        KC_PMNS, KC_PPLS,  KC_LEFT,  KC_DOWN, KC_DOWN, KC_LALT,        KC_SPC,           KC_SPC,             KC_RGUI, MO(1),   MO(1),   RM_NEXT
    )
    ,
    [1] = LAYOUT(
        KC_EQL,  KC_MINS,  KC_PAST,  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_P7,   KC_P8,    KC_P9,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_P4,   KC_P5,    KC_P6,    KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,        KC_ENT,
        KC_P1,   KC_P2,    KC_P3,    KC_UP,   KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, 
        KC_PMNS, KC_PPLS,  KC_LEFT,  KC_DOWN, KC_DOWN, KC_LALT,        KC_SPC,           KC_SPC,             KC_RGUI, MO(0),   MO(0),   MO(0)
    )
};
	//这里的分号一定不要忘记

    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
        // Layer 0
        [0] = {  
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU)   // 单编码器配置
        },
        // Layer 1（按需添加）
        [1] = { 
            ENCODER_CCW_CW(KC_MPRV, KC_MNXT) 
        }
    };   

    // };
    // #endif
    // #ifdef ENCODER_ENABLE
    // void encoder_update_user(uint8_t index, bool clockwise) {
    //     if (index == 0) { /* First encoder */
    //         if (clockwise) {
    //          if (layer_state_is(1)) {
    //                  tap_code(KC_VOLD);
    //             } else if(layer_state_is(2)){
    //                 tap_code(KC_VOLU);
    //           } else {
    //                  tap_code(KC_VOLU);
    //          }
    //     } else {
    //         if (layer_state_is(1)) {
    //                  tap_code(KC_VOLU);
    //          } else if(layer_state_is(2)){
    //             tap_code(KC_VOLU);
    //          } else {
    //             tap_code(KC_VOLU);
    //             }
    //      }
    //      }
    // }
    // #endif
    // bool encoder_update_user(uint8_t index, bool clockwise) {
    //     if (index == 0) { /* First encoder */
    //         if (clockwise) {
    //             if (layer_state_is(0)) {
    //             tap_code(KC_VOLD);
    //         } else if(layer_state_is(1)){
    //             tap_code(KC_PGDN);  
    //         } else {
    //             if (layer_state_is(0)) {
    //                 tap_code(KC_VOLU);
    //             } else if(layer_state_is(1)){
    //                 tap_code(KC_PGUP);  
    //         }
    //     } 
    //     return false;
    // }


/*RGB Matrix*/
led_config_t g_led_config = {

    {
      // 按键LED对应的连接顺序
      { 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14  },
      { 15,     16,     17,     18,     19,     20,     21,     22,     23,     24,     25,     26,     27,     28,     29  },
      { 30,     31,     32,     33, NO_LED,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43  },
      { 44,     45,     46,     47,     48,     49,     50,     51,     52,     53,     54,     55,     56,     57,     58  },
      { 59,     60,     61,     62,     63,     64, NO_LED,     65, NO_LED,     66, NO_LED,     67,     68,     69,     70  },
    }
    
    , {
      // 所有LED的空间坐标
      { 0,   0  },{ 16,  0  },{ 32,  0  },{ 48,  0  },{ 64,  0  },{ 80,  0  },{ 96,  0  },{ 112,  0  },{ 128,  0  },{ 144, 0  },{ 160, 0  },{ 176, 0  },{ 192, 0  },{ 208, 0  },{ 224, 0  },
      { 0,  16  },{ 16, 16  },{ 32, 16  },{ 48, 16  },{ 64, 16  },{ 80, 16  },{ 96, 16  },{ 112, 16  },{ 128, 16  },{ 144,16  },{ 160,16  },{ 176,16  },{ 192,16  },{ 208,16  },{ 224,16  },
      { 0,   32 },{ 16,  32 },{ 32,  32 },{ 52,  32 },            { 72,  32 },{ 88,  32 },{ 104,  32 },{ 120,  32 },{ 136, 32 },{ 152, 32 },{ 168, 32 },{ 184, 32 },{ 200, 32 },{ 220, 32 },
      { 0,  48  },{ 16, 48  },{ 32, 48  },{ 48, 48  },{ 64, 48  },{ 80, 48  },{ 96, 48  },{ 112, 48  },{ 128, 48  },{ 144,48  },{ 160,48  },{ 176,48  },{ 192,48  },{ 208,48  },{ 224,48  },
      { 0,  64  },{ 16, 64  },{ 32, 64  },{ 48, 64  },{ 64, 64  },{ 80, 64  },            { 110, 64  },             { 150, 64 },            { 176, 64 },{ 192,64  },{ 208,64  },{ 224,64  },
    }
    
    , {
        /*
        LED的分组定义，分为几种：
            0(0x00)   = 没有标志
            256(0xFF) = 全标志
            1(0x01)   = 修饰键的灯(一般包括：Shift Ctrl Alt Windows MacCommand Fn)
            2(0x02)   = 键盘背光灯
            4(0x04)   = 轴的灯
            8(0x08)   = 状态指示灯
        目前按键（3528）为4，背光（4020）为2  */
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, //15
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, //15
        4, 4, 4, 4,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, //14
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, //15
        4, 4, 4, 4, 4, 4,    4,    4,    4, 4, 4, 4, //12
    }
    };
