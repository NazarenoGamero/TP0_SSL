#include "scanner.h"

char palabra[100];
int indice = 0;
char caracter;
int token;

int main(){    
    palabra[0]='\0';

    for((caracter = getchar(),token = get_token(caracter));token != FDT;(caracter = getchar(),token = get_token(caracter))){
    if(token == SEP){
        imprimir_cadena(palabra, &indice);
        printf("Separador: ,\n");
    }else if(token == 4){   
        imprimir_cadena(palabra, &indice);
    }
    caracter = getchar();
    token = get_token(caracter);
    }
    
    imprimir_cadena(palabra, &indice);
    printf("Fin De Texto: \n");
    return 0;
}
