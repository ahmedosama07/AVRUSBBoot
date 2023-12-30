/*
 * AVRUSBBOOT.c
 *
 * Created: 12/18/2023 10:27:54 AM
 *  Author: LEGION
 */ 

#include "AVRUSBBOOT.h"

void (*jump_to_boot)(void) = 0x1800;

void wait() {
	if (BOOTLOADER_CONDITION) {
		jump_to_boot();
	}
}