/*
 * AVRUSBBOOT.h
 *
 * Created: 12/18/2023 10:25:39 AM
 *  Author: LEGION
 */ 

#ifndef AVRUSBBOOT_H

#define AVRUSBBOOT_H

#ifndef F_CPU
#define F_CPU 12000000UL
#endif

#define BOOTLOADER_CONDITION ((PINC & (1 << PC2)) == 0)

#include <avr/io.h>
#include <util/delay.h>

void wait();


#endif