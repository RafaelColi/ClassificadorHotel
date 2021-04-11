#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct{
    char nome[20], cidade[20], pais[20];
    int avaliacoes, vagas, area_lazer, piscina, estacionamento;
    float media, preco;
} Hotel;

void cadastrarHotel(Hotel h_f[]){

    for(int i = 0; i < TAM; i++){
        if(strcmp(h_f[i].nome, "x") == 0){
            fflush(stdin);
            printf("Digite o nome do hotel: ");
            gets(h_f[i].nome);
            fflush(stdin);
            printf("Digite a cidade do hotel: ");
            gets(h_f[i].cidade);
            fflush(stdin);
            printf("Digite o pais do hotel: ");
            gets(h_f[i].pais);
            fflush(stdin);
            printf("Digite a media de avaliacoes do hotel: ");
            scanf("%f", &h_f[i].media);
            printf("Digite o numero de avaliacoes do hotel: ");
            scanf("%d", &h_f[i].avaliacoes);
            printf("Digite o preco do hotel: ");
            scanf("%f", &h_f[i].preco);
            printf("Digite o numero de vagas: ");
            scanf("%d", &h_f[i].vagas);
            printf("Digite 0 se nao tem area de lazer e 1 se tiver: ");
            scanf("%d", &h_f[i].area_lazer);
            printf("Digite 0 se nao tem piscina e 1 se tiver: ");
            scanf("%d", &h_f[i].piscina);
            printf("Digite 0 se nao tem estacionamento e 1 se tiver: ");
            scanf("%d", &h_f[i].estacionamento);
            fflush(stdin);
            system("cls");
            break;
        }
    }
}

void classificarPreco(Hotel h_f[]){
    char auxchar[20];
    int auxint, i, j;
    float auxfloat;

    printf("\nHoteis: (preco)\n");
    //Classificacao por preco
    for(i = 0; i < TAM; i++){
        if(strcmp(h_f[i].nome, "x") != 0){
            for(j = i + 1; j < TAM; j++){
                if(strcmp(h_f[j].nome, "x") != 0){
                    if(h_f[i].preco > h_f[j].preco){
                        //nome
                        strcpy(auxchar, h_f[j].nome);
                        strcpy(h_f[j].nome, h_f[i].nome);
                        strcpy(h_f[i].nome, auxchar);

                        //cidade
                        strcpy(auxchar, h_f[j].cidade);
                        strcpy(h_f[j].cidade, h_f[i].cidade);
                        strcpy(h_f[i].cidade, auxchar);

                        //pais
                        strcpy(auxchar, h_f[j].pais);
                        strcpy(h_f[j].pais, h_f[i].pais);
                        strcpy(h_f[i].pais, auxchar);

                        //avaliacoes
                        auxint = h_f[j].avaliacoes;
                        h_f[j].avaliacoes = h_f[i].avaliacoes;
                        h_f[i].avaliacoes = auxint;

                        //vagas
                        auxint = h_f[j].vagas;
                        h_f[j].vagas = h_f[i].vagas;
                        h_f[i].vagas = auxint;

                        //area_lazer
                        auxint = h_f[j].area_lazer;
                        h_f[j].area_lazer = h_f[i].area_lazer;
                        h_f[i].area_lazer = auxint;

                        //piscina
                        auxint = h_f[j].piscina;
                        h_f[j].piscina = h_f[i].piscina;
                        h_f[i].piscina = auxint;

                        //estacionamento
                        auxint = h_f[j].estacionamento;
                        h_f[j].estacionamento = h_f[i].estacionamento;
                        h_f[i].estacionamento = auxint;

                        //media
                        auxfloat = h_f[j].media;
                        h_f[j].media = h_f[i].media;
                        h_f[i].media = auxfloat;

                        //preco
                        auxfloat = h_f[j].preco;
                        h_f[j].preco = h_f[i].preco;
                        h_f[i].preco = auxfloat;
                    }
                }
            }
        }
    }

    printf("\tRANKING\n");
    for(i = 0; i < TAM; i++){
        if(strcmp(h_f[i].nome, "x") != 0){
            printf("HOTEL N-%d\n", i + 1);
            printf("=================================");
            printf("\nHotel: %s\n", h_f[i].nome);
            printf("Cidade: %s\n", h_f[i].cidade);
            printf("Pais: %s\n", h_f[i].pais);
            printf("Media de avaliacoes: %.2f\n", h_f[i].media);
            printf("Numero de avaliacoes do hotel: %d\n", h_f[i].avaliacoes);
            printf("Preco: R$ %.2f\n", h_f[i].preco);
            printf("Vagas disponiveis: %d\n", h_f[i].vagas);
            if(h_f[i].area_lazer == 1){
                printf("Com area de lazer\n");
            } else{
                printf("Sem area de lazer\n");
            }

            if(h_f[i].piscina == 1){
                printf("Com piscina\n");
            } else{
                printf("Sem piscina\n");
            }

            if(h_f[i].estacionamento == 1){
                printf("Com estacionamento\n\n");
            } else{
                printf("Sem estacionamento\n");
            }
        }
    }
    printf("=================================\n");
    system("pause");
    system("cls");
}

void classificarAvaliacao(Hotel h_f[]){
    char auxchar[20];
    int auxint, i, j;
    float auxfloat;

    printf("\nHoteis: (avaliacao)\n");
    //Classificao por media de avaliacoes
    for(i = 0; i < TAM; i++){
        if(strcmp(h_f[i].nome, "x") != 0){
            for(j = i + 1; j < TAM; j++){
                if(strcmp(h_f[j].nome, "x") != 0){
                    if(h_f[i].media < h_f[j].media){
                        //nome
                        strcpy(auxchar, h_f[j].nome);
                        strcpy(h_f[j].nome, h_f[i].nome);
                        strcpy(h_f[i].nome, auxchar);

                        //cidade
                        strcpy(auxchar, h_f[j].cidade);
                        strcpy(h_f[j].cidade, h_f[i].cidade);
                        strcpy(h_f[i].cidade, auxchar);

                        //pais
                        strcpy(auxchar, h_f[j].pais);
                        strcpy(h_f[j].pais, h_f[i].pais);
                        strcpy(h_f[i].pais, auxchar);

                        //avaliacoes
                        auxint = h_f[j].avaliacoes;
                        h_f[j].avaliacoes = h_f[i].avaliacoes;
                        h_f[i].avaliacoes = auxint;

                        //vagas
                        auxint = h_f[j].vagas;
                        h_f[j].vagas = h_f[i].vagas;
                        h_f[i].vagas = auxint;

                        //area_lazer
                        auxint = h_f[j].area_lazer;
                        h_f[j].area_lazer = h_f[i].area_lazer;
                        h_f[i].area_lazer = auxint;

                        //piscina
                        auxint = h_f[j].piscina;
                        h_f[j].piscina = h_f[i].piscina;
                        h_f[i].piscina = auxint;

                        //estacionamento
                        auxint = h_f[j].estacionamento;
                        h_f[j].estacionamento = h_f[i].estacionamento;
                        h_f[i].estacionamento = auxint;

                        //media
                        auxfloat = h_f[j].media;
                        h_f[j].media = h_f[i].media;
                        h_f[i].media = auxfloat;

                        //preco
                        auxfloat = h_f[j].preco;
                        h_f[j].preco = h_f[i].preco;
                        h_f[i].preco = auxfloat;
                    }
                }
            }
        }
    }

    printf("\tRANKING\n");
    for(i = 0; i < TAM; i++){
        if(strcmp(h_f[i].nome, "x") != 0){
            printf("HOTEL N-%d\n", i + 1);
            printf("=================================");
            printf("\nHotel: %s\n", h_f[i].nome);
            printf("Cidade: %s\n", h_f[i].cidade);
            printf("Pais: %s\n", h_f[i].pais);
            printf("Media de avaliacoes: %.2f\n", h_f[i].media);
            printf("Numero de avaliacoes do hotel: %d\n", h_f[i].avaliacoes);
            printf("Preco: R$ %.2f\n", h_f[i].preco);
            printf("Vagas disponiveis: %d\n", h_f[i].vagas);
            if(h_f[i].area_lazer == 1){
                printf("Com area de lazer\n");
            } else{
                printf("Sem area de lazer\n");
            }

            if(h_f[i].piscina == 1){
                printf("Com piscina\n");
            } else{
                printf("Sem piscina\n");
            }

            if(h_f[i].estacionamento == 1){
                printf("Com estacionamento\n\n");
            } else{
                printf("Sem estacionamento\n");
            }
        }
    }
    printf("=================================\n");
    system("pause");
    system("cls");
}

void removerHotel(Hotel h_f[]){
    char inic[20] = {'x'};
    int i, j, posicao;

    printf("=================================\n");

    for(i = 0; i < TAM; i++){
        if(strcmp(h_f[i].nome, "x") != 0){
            printf("\nN-%d: %s\n", i + 1, h_f[i].nome);
        }
    }
    printf("=================================\n");

    printf("Digite o numero do hotel que deseja remover: ");
    scanf("%d", &posicao);

    for(i = posicao - 1; i < TAM - 1; i++){
        strcpy(h_f[i].nome, h_f[i + 1].nome);
        strcpy(h_f[i].cidade, h_f[i + 1].cidade);
        strcpy(h_f[i].pais, h_f[i + 1].pais);
        h_f[i].avaliacoes = h_f[i + 1].avaliacoes;
        h_f[i].media = h_f[i + 1].media;
        h_f[i].preco = h_f[i + 1].preco;
        h_f[i].area_lazer = h_f[i + 1].area_lazer;
        h_f[i].piscina = h_f[i + 1].piscina;
        h_f[i].estacionamento = h_f[i + 1].estacionamento;
        h_f[i].vagas = h_f[i + 1].vagas;
    }

    if(strcmp(h_f[TAM - 1].nome, "x") != 0){
        strcpy(h_f[TAM - 1].nome, inic);
        strcpy(h_f[TAM - 1].cidade, inic);
        strcpy(h_f[TAM - 1].pais, inic);
        h_f[TAM - 1].avaliacoes = -1;
        h_f[TAM - 1].media = -1.0;
        h_f[TAM - 1].preco = -1.0;
        h_f[TAM - 1].area_lazer = -1;
        h_f[TAM - 1].piscina = -1;
        h_f[TAM - 1].estacionamento = -1;
        h_f[TAM - 1].vagas = -1;
    }
}

int main() {
    Hotel h[TAM];
    int escolha = 0;
    char inic[20] = {'x'};

    for(int i = 0; i < TAM; i++){
        strcpy(h[i].nome, inic);
        strcpy(h[i].cidade, inic);
        strcpy(h[i].pais, inic);
        h[i].avaliacoes = -1;
        h[i].vagas = -1;
        h[i].area_lazer = -1;
        h[i].piscina = -1;
        h[i].estacionamento = -1;
        h[i].media = -1.0;
        h[i].preco = -1.0;
    }

    while(0 == 0){

        printf("\n\tMENU\n\n");
        printf("1 - Cadastrar hotel\n");
        printf("2 - Classificar por preco\n");
        printf("3 - Classificar por media de avaliacoes\n");
        printf("4 - Remover hotel  \n");
        printf("5 - Fechar\n");
        scanf("%d", &escolha);
        system("cls");

        switch(escolha){
            case 1:
                cadastrarHotel(h);
                break;
            case 2:
            	classificarPreco(h);
                break;
            case 3:
            	classificarAvaliacao(h);
                break;
            case 4:
                removerHotel(h);
                break;
            case 5:
                return 0;
                break;
            default:
                printf("Opcao invalida");
                break;
        }
    }
  return 0;
}
