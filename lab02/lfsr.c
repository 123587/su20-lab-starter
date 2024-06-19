#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"
#include "bit_ops.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned res = *reg;
    unsigned bit0 = get_bit(res,0);
    unsigned bit2 = get_bit(res,2);
    unsigned bit3 = get_bit(res,3);
    unsigned bit5 = get_bit(res,5);
    unsigned xor = bit0^bit2^bit3^bit5;
    *reg = res>>1;
    set_bit(reg,15,xor);
    
}

