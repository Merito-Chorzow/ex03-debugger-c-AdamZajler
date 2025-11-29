#pragma once
#include <stdint.h>
#include <stddef.h>

extern volatile uint8_t BUF[16];

int  sum_u8(const uint8_t* p, size_t n);
void write_tail(size_t idx, uint8_t v);
