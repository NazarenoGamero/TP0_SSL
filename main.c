#include "scanner.h"

char palabra[100];
int indice = 0;
char caracter;
int token;

int main(){    
    palabra[0]='\0';

    caracter = getchar();
    token = get_token(caracter);

    while(token != FDT){
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
