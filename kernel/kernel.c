#include "system.h"

#define asm __asm__

void kernel_early()
{


}

void main ()
{
        printf("Booting OS");
    // set display to 265 color mode.
  


__asm__("mov ax, 13h \n\t"
        "int 10h\n\t");


}