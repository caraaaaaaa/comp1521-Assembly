#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#include "add.h"

// return the MIPS opcode for add $d, $s, $t
uint32_t add(uint32_t d, uint32_t s, uint32_t t) {
	uint32_t re = 0x0;
	re  = (re << 31) + (s << 21) + (t << 16) + (d << 11) + 0b100000;

    return re; // REPLACE WITH YOUR CODE

}
