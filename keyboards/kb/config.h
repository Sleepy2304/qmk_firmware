#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0006
#define MANUFACTURER    qmk
#define PRODUCT         sl33py
#define DESCRIPTION     65%

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B4 }
#define MATRIX_COL_PINS { B5, B6, B7, A2, A1, B8, B15, B10, B11, A14, A4, A5, A6, A7, A8 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW



#define DEBOUNCE 6

