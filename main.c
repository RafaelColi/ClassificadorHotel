#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

int main() {

    char nome[TAM][20], cidade[TAM][20], pais[TAM][20], auxchar[20], inic[20] = {'x'};
    int avaliacoes[TAM], vagas[TAM], area_lazer[TAM], piscina[TAM], estacionamento[TAM], auxint, escolha = 0, i, j, posicao;
    float media[TAM], preco[TAM], auxfloat;

    for(i = 0; i < TAM; i++){
        strcpy(nome[i], inic);
        strcpy(cidade[i], inic);
        strcpy(pais[i], inic);
        avaliacoes[i] = -1;
        vagas[i] = -1;
        area_lazer[i] = -1;
        piscina[i] = -1;
        estacionamento[i] = -1;
        media[i] = -1.0;
        preco[i] = -1.0;
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
                for(i = 0; i < TAM; i++){
                    if(strcmp(nome[i], "x") == 0){
                        fflush(stdin);
                        printf("Digite o nome do hotel: ");
                        gets(nome[i]);
                        fflush(stdin);
                        printf("Digite a cidade do hotel: ");
                        gets(cidade[i]);
                        fflush(stdin);
                        printf("Digite o pais do hotel: ");
                        gets(pais[i]);
                        fflush(stdin);
                        printf("Digite a media de avaliacoes do hotel: ");
                        scanf("%f", &media[i]);
                        printf("Digite o numero de avaliacoes do hotel: ");
                        scanf("%d", &avaliacoes[i]);
                        printf("Digite o preco do hotel: ");
                        scanf("%f", &preco[i]);
                        printf("Digite o numero de vagas: ");
                        scanf("%d", &vagas[i]);
                        printf("Digite 0 se nao tem area de lazer e 1 se tiver: ");
                        scanf("%d", &area_lazer[i]);
                        printf("Digite 0 se nao tem piscina e 1 se tiver: ");
                        scanf("%d", &piscina[i]);
                        printf("Digite 0 se nao tem estacionamento e 1 se tiver: ");
                        scanf("%d", &estacionamento[i]);
                        fflush(stdin);
                        system("cls");
                        break;
                    }
                }
                break;
            case 2:
            	printf("\nHoteis: (preco)");
                //Classificacao por preco
                for(i = 0; i < TAM; i++){
                    if(strcmp(nome[i], "x") != 0){
                        for(j = i + 1; j < TAM; j++){
                            if(strcmp(nome[j], "x") != 0){
                                if(preco[i] > preco[j]){
                                    //nome
                                    strcpy(auxchar, nome[j]);
                                    strcpy(nome[j], nome[i]);
                                    strcpy(nome[i], auxchar);

                                    //cidade
                                    strcpy(auxchar, cidade[j]);
                                    strcpy(cidade[j], cidade[i]);
                                    strcpy(cidade[i], auxchar);

                                    //pais
                                    strcpy(auxchar, pais[j]);
                                    strcpy(pais[j], pais[i]);
                                    strcpy(pais[i], auxchar);

                                    //avaliacoes
                                    auxint = avaliacoes[j];
                                    avaliacoes[j] = avaliacoes[i];
                                    avaliacoes[i] = auxint;

                                    //vagas
                                    auxint = vagas[j];
                                    vagas[j] = vagas[i];
                                    vagas[i] = auxint;

                                    //area_lazer
                                    auxint = area_lazer[j];
                                    area_lazer[j] = area_lazer[i];
                                    area_lazer[i] = auxint;

                                    //piscina
                                    auxint = piscina[j];
                                    piscina[j] = piscina[i];
                                    piscina[i] = auxint;

                                    //estacionamento
                                    auxint = estacionamento[j];
                                    estacionamento[j] = estacionamento[i];
                                    estacionamento[i] = auxint;

                                    //media
                                    auxfloat = media[j];
                                    media[j] = media[i];
                                    media[i] = auxfloat;

                                    //preco
                                    auxfloat = preco[j];
                                    preco[j] = preco[i];
                                    preco[i] = auxfloat;
                                }
                            }
                        }
                    }
                }

                printf("\tRANKING\n");
                for(i = 0; i < TAM; i++){
                        if(strcmp(nome[i], "x") != 0){
                            printf("HOTEL N-%d\n", i);
                            printf("=================================");
                            printf("\nHotel: %s\n", nome[i]);
                            printf("Cidade: %s\n", cidade[i]);
                            printf("Pais: %s\n", pais[i]);
                            printf("Media de avaliacoes: %.2f\n", media[i]);
                            printf("Numero de avaliacoes do hotel: %d\n", avaliacoes[i]);
                            printf("Preco: R$ %.2f\n", preco[i]);
                            printf("Vagas disponiveis: %d\n", vagas[i]);
                            if(area_lazer[i] == 1){
                                printf("Com area de lazer\n");
                            } else{
                                printf("Sem area de lazer\n");
                            }

                            if(piscina[i] == 1){
                                printf("Com piscina\n");
                            } else{
                                printf("Sem piscina\n");
                            }

                            if(estacionamento[i] == 1){
                                printf("Com estacionamento\n\n");
                            } else{
                                printf("Sem estacionamento\n");
                            }
                        }
                  }
                  printf("=================================\n");
                  system("pause");
                break;
            case 3:
            	printf("\nHoteis: (avaliacao)\n");
                //Classificao por media de avaliacoes
                for(i = 0; i < TAM; i++){
                    if(strcmp(nome[i], "x") != 0){
                        for(j = i + 1; j < TAM; j++){
                            if(strcmp(nome[j], "x") != 0){
                                if(media[i] > media[j]){
                                    //nome
                                    strcpy(auxchar, nome[j]);
                                    strcpy(nome[j], nome[i]);
                                    strcpy(nome[i], auxchar);

                                    //cidade
                                    strcpy(auxchar, cidade[j]);
                                    strcpy(cidade[j], cidade[i]);
                                    strcpy(cidade[i], auxchar);

                                    //pais
                                    strcpy(auxchar, pais[j]);
                                    strcpy(pais[j], pais[i]);
                                    strcpy(pais[i], auxchar);

                                    //avaliacoes
                                    auxint = avaliacoes[j];
                                    avaliacoes[j] = avaliacoes[i];
                                    avaliacoes[i] = auxint;

                                    //vagas
                                    auxint = vagas[j];
                                    vagas[j] = vagas[i];
                                    vagas[i] = auxint;

                                    //area_lazer
                                    auxint = area_lazer[j];
                                    area_lazer[j] = area_lazer[i];
                                    area_lazer[i] = auxint;

                                    //piscina
                                    auxint = piscina[j];
                                    piscina[j] = piscina[i];
                                    piscina[i] = auxint;

                                    //estacionamento
                                    auxint = estacionamento[j];
                                    estacionamento[j] = estacionamento[i];
                                    estacionamento[i] = auxint;

                                    //media
                                    auxfloat = media[j];
                                    media[j] = media[i];
                                    media[i] = auxfloat;

                                    //preco
                                    auxfloat = preco[j];
                                    preco[j] = preco[i];
                                    preco[i] = auxfloat;
                                }
                            }
                        }
                    }
                }

                printf("\tRANKING\n");
                for(i = 0; i < TAM; i++){
                        if(strcmp(nome[i], "x") != 0){
                            printf("HOTEL N-%d\n", i);
                            printf("=================================");
                            printf("\nHotel: %s\n", nome[i]);
                            printf("Cidade: %s\n", cidade[i]);
                            printf("Pais: %s\n", pais[i]);
                            printf("Media de avaliacoes: %.2f\n", media[i]);
                            printf("Numero de avaliacoes do hotel: %d\n", avaliacoes[i]);
                            printf("Preco: R$ %.2f\n", preco[i]);
                            printf("Vagas disponiveis: %d\n", vagas[i]);
                            if(area_lazer[i] == 1){
                                printf("Com area de lazer\n");
                            } else{
                                printf("Sem area de lazer\n");
                            }

                            if(piscina[i] == 1){
                                printf("Com piscina\n");
                            } else{
                                printf("Sem piscina\n");
                            }

                            if(estacionamento[i] == 1){
                                printf("Com estacionamento\n\n");
                            } else{
                                printf("Sem estacionamento\n");
                            }
                        }
                  }
                  printf("=================================\n");
                  system("pause");
                break;
            case 4:
                //remover hotel
                printf("Digite a posicao do hotel que deseja remover: ");
                scanf("%d", &posicao);
                for(i = posicao; i < TAM - 1; i++){
                    strcpy(nome[i], nome[i + 1]);
                    strcpy(cidade[i], cidade[i + 1]);
                    strcpy(pais[i], pais[i + 1]);
                    avaliacoes[i] = avaliacoes[i + 1];
                    media[i] = media[i + 1];
                    preco[i] = preco[i + 1];
                    area_lazer[i] = area_lazer[i + 1];
                    piscina[i] = piscina[i + 1];
                    estacionamento[i] = estacionamento[i + 1];
                    vagas[i] = vagas[i + 1];
                }

                if(strcmp(nome[TAM - 1], "x") != 0){
                    strcpy(nome[TAM - 1], inic);
                    strcpy(cidade[TAM - 1], inic);
                    strcpy(pais[TAM - 1], inic);
                    avaliacoes[TAM - 1] = 0;
                    media[TAM - 1] = 0.0;
                    preco[TAM - 1] = 0.0;
                    area_lazer[TAM - 1] = -1;
                    piscina[TAM - 1] = -1;
                    estacionamento[TAM - 1] = -1;
                    vagas[TAM - 1] = 0;
                }
                break;
            case 5:
                //sair();
                return 0;
                break;
            default:
                printf("Opcao invalida");
                break;
        }
    }
  return 0;
}
