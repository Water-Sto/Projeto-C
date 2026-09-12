#include <stdio.h>
#include <windows.h>

#define INTERVALO_TECLA 20

typedef struct {
    char caractere[200];
    char reserva[200];
} Texto;

typedef struct {
    char tipo_caractere;
    int quantidade;
} Linha;


void teclar(Texto* texto) {

    for (int x = 0; x < strlen(texto -> caractere); x++){
        printf("%c", texto -> caractere[x]);
        Sleep(INTERVALO_TECLA);
    }

    printf("\n");

    for (int x = 0; x < strlen(texto -> caractere); x++) {
        texto->caractere[x] = texto->reserva[x];
    }
}

void criar_linha(Linha const linha) {
    for (int x = 0; x < linha.quantidade; x++) {
        printf("%c", linha.tipo_caractere);
        Sleep(INTERVALO_TECLA);
    }

    printf("\n");
}

int main() {

    Texto texto1 = {"Teste demonstrando a quantidade de caracteres."};
    Linha linha1 = {'=', 50};
    teclar(&texto1);
    criar_linha(linha1);

    return 0;
}