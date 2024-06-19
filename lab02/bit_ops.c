#include <stdio.h>
#include <stdlib.h> 
#include "bit_ops.h"
void convertToBinary(unsigned a);

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns
    // 0 or 1)
    unsigned mask = 0b1;
    mask = mask<<n;
    unsigned res = x&mask;
    res = res>>n;
    return res;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    unsigned mask = 0b1;
    mask = mask<<n;
    mask = ~mask;
    *x = *x&mask;
    v = v<<n;
    *x = *x|v;
    
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
    unsigned a = get_bit(*x,n);
    a = (a^1)&(0x1);
    set_bit(x,n,a);
    
}

void convertToBinary(unsigned a) {
  /* step 1 */
  if (a > 1) convertToBinary(a / 2);

  /* step 2 */
  printf("%d", a % 2);
}

