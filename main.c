// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>
#include "scanner.h"

int main() {
    printf("Hello, Worlddddddddddddd!\n");

    // char* texto_entrada_txt = malloc(100);
    // char texto_entrada_txt[100];
    // strcpy(texto_entrada_txt,"   uno,dos,     ,785");
    // strcat(texto_entrada_txt,"\n");
    // strcat(texto_entrada_txt,"+*@#$a3  ultimo");
    // printf("%s\n",texto_entrada_txt);


    //get_token();

    // FILE *archivo;
    // archivo = fopen("entrada.txt", "r");
    // if(archivo == NULL) {
    //   printf("Error opening file");
    //   return(-1);
    // }

    // char linea[100];
    // char otra_linea[100];
    // fgets(linea, 100, archivo);
    // // printf("%s\n", linea);

    // while(fgets(otra_linea, 100, archivo) !=NULL){
    //     // printf("%s\n", otra_linea);
    //     strcat(linea, otra_linea);
    // }
    // printf("%s\n", linea);
   
    // fclose(archivo);

    char c;
    
    //printf("Enter character: ");
    c = getchar();
    printf("%c\n");
    int token = esCadena(c);
    char palabra[100];
    int indice = 0;
    
    while(token != FDT){
        if(isspace(c) == 0){
            palabra[indice] = c;  
            indice++;
        }
 
        if(token == SEP){
            palabra[indice - 1] = '\0';
            if(strncmp(palabra, "\0", 1)){
                printf("Cadena: %s\n", palabra);
            }
            printf("Separador: ,\n");
            indice = 0;
        }else if(token == 4){
            // printf("en if 4");
            if(strncmp(palabra, "\0", 1)){
                printf("Cadena 4: %s\n", palabra);
            }
            indice = 0;
            palabra[0] = '\0';
        }
        

        c = getchar();
        // putchar(c);
        // printf("\n");
        token = esCadena(c);
         
    }
   
    printf("Fin De Texto: \n");
    return 0;
}

int esCadena(char caracter){
    if((caracter != ',') && (caracter != '\0') && (caracter != '\n') && (caracter != ' ')){
        // printf("Entro en CAD: \n");
        return CAD;
    }else if (caracter == ','){
        // printf("Entro en SEP: \n");
        return SEP;
    }else if (caracter == ' ' || caracter == '\n'){
        return 4;
    }else{ 
        printf("Entro en FDT: \n");
        return FDT;
    }
    printf("ninguno: \n");
}

