#include "scanner.h"

void get_token(){
    char texto_entrada_txt[100];
    strcpy(texto_entrada_txt,"   uno,dos,     ,785");
    strcat(texto_entrada_txt,"\n");
    strcat(texto_entrada_txt,"+*@#$a3  ultimo");
    printf("%s\n",texto_entrada_txt);
    
    printf("antes getchar\n");

    char c = getchar();
    printf("despues getchar\n");
    
        
    
    
    char c;
    char texto[100];
    strcpy(texto, "");
    while(c != 'X'){
        printf("Enter character: ");
        c = getchar();
        printf("Character entered: ");
        putchar(c);

        strcat(texto, c);
    }

printf("%s",texto);

}