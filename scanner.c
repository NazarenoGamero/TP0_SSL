#include "scanner.h"
extern int token;
extern char palabra[100];
extern int indice;
extern char caracter;

int get_token(char caracter){
   
    if(caracter == EOF){ 
            return FDT;
    }else if (caracter == ','){
            return SEP;
    }else if(isspace(caracter) != 0){
            return 4; 
    }else{
        palabra[indice] = caracter;  
        indice++;
        return CAD;
        
}
}

void imprimir_cadena(char* palabra, int* indice){
    if(strncmp(palabra, "\0", 1) != 0){ //hay algun caracter en la palabra
        palabra[*indice] = '\0';
        printf("Cadena: %s\n", palabra);
    }
    *indice = 0;
    palabra[0] = '\0';
}
void recibirToken(){
        caracter = getchar();
        token = get_token(caracter);
}