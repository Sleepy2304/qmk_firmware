#include "kb.h"

void matrix_init_kb(void) {
	matrix_init_user();
}

void matrix_scan_kb(void) {
	matrix_scan_user();
}

#ifdef DIP_SWITCH_ENABLE
__attribute__((weak))
void dip_update(uint8_t index, bool active) {}

__attribute__((weak))
void dip_switch_update_user(uint8_t index, bool active) {
    dip_update(index, active);
}
#endif
