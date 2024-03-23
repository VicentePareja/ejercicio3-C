#include <stdio.h>
#include <string.h>

int main () {

    char frase[1000];

    printf("Enter a frase:");

    fgets(frase, sizeof(frase), stdin);

    char palabra_mas_larga[1000] = "";
    char palabra_actual[1000] = "";

    for (int i = 0; frase[i] != '\0'; i++){
        //printf("%c", frase[i]);
        if (frase[i] != ' '){
            int tamaño_palabra_actual = strlen(palabra_actual);
            palabra_actual[tamaño_palabra_actual] = frase[i];
            palabra_actual[tamaño_palabra_actual + 1] = '\0';
            //printf("%s\n", palabra_actual);
        } else {
            int tamaño_palabra_actual = strlen(palabra_actual);

            if (strlen(palabra_mas_larga) < tamaño_palabra_actual){
                palabra_mas_larga[0] = '\0';
                strcpy(palabra_mas_larga, palabra_actual);
                palabra_mas_larga[strlen(palabra_mas_larga)] = '\0';
            }

            // printf("%s\n", palabra_actual);
            // printf("%s\n", palabra_mas_larga);

            palabra_actual[0] = '\0';
        }
    }
    if (strlen(palabra_mas_larga) < strlen(palabra_actual)){
            palabra_mas_larga[0] = '\0';
            strcpy(palabra_mas_larga, palabra_actual);
            palabra_mas_larga[strlen(palabra_mas_larga) - 1] = '\0';
            // printf("%s\n", palabra_mas_larga);
        }

    printf("%s %zu\n", palabra_mas_larga, strlen(palabra_mas_larga));

}