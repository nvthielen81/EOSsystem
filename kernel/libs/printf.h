#pragma once

#include <stdarg.h>
#include <stddef.h>

static char* const VGA_MEMORY = (char*)0xb8000;

void printf(char *string){

    const char *str = string;

    unsigned int i = 0;
    unsigned int j = 0;

    while(str[i] !='\0' )
    {
        VGA_MEMORY[j] = str[i];
        VGA_MEMORY[j + 1] = 0x07;
        i++;
        j = j +2;

    }


}

void inputf(char *string)
{


}

