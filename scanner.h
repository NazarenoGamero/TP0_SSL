#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

enum tokens{
    FDT,
    SEP,
    CAD
};

void get_token();
int esCadena(char caracter);

#endif // SCANNER_H_INCLUDED