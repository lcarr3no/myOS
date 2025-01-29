#ifndef MYOS_INCLUDE_PORTMAP_H
#define MYOS_PORTMAP_H

#include <stdint.h>

//function headers
uint8_t inb(uint16_t port);
void outb(uint16_t port, uint8_t val);

#endif

