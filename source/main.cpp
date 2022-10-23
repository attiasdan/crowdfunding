#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int id;
    char nome[50];
    int idade;
    int possue_fundo; // 0[não] or 1[sim]
} Usuario;

typedef struct {
    char titulo[50];
    char objetivo[50];
    double meta;
    double montante;
} Fundo;

void setup();
void menu();
void verProgressoDosFundos();
int cadastrar();
int autenticar();

int main(void)
{
    setup();
    Usuario usuarios[100];
    return 0;
}

void menu()
{
    int opcao = 0;

    printf("Escolha uma opção do menu abaixo digitando o dígito correspondente da opção:");

    switch(opcao)
    {
        case 1: verProgressoDosFundos();
            break;
        case 2: cadastrar();
            break;
        case 3: autenticar();
            break;
    }
}
void verProgressoDosFundos() {
}
int cadastrar() {
    return 0;
}
int autenticar(){
    return 0;
}

void setup() {
    setlocale(LC_ALL, "Portuguese");
    system("title Simulação de Sistema de Financiamento Coletivo");
    system("color f0");
}
