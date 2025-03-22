//Desafio aventureiro - Tema 2

#include <stdio.h>

    int main(){

            int escolhaAtributo;

            // Carta 1 (França)
            char pais[20] = "França";
            int populacao1 = 68290000;
            int area1 = 551695;
            float pib1 = 3052000000000;
            int pontost1 = 100;
            float dp1 = 118.16;

            // Carta 2 (Espanha)
            char pais2[20] = "Espanha";
            int populacao2 = 48100000;
            int area2 = 505969;
            float pib2 = 1450000000000;
            int pontost2 = 60;
            float dp2 = 92.00;

            //Menu 
            printf("Menu Super Trunfo\n");
            printf("Escolha o atributo a ser comparado\n");
            printf("1 - População\n") ;
            printf("2 - Area\n");
            printf("3 - PIB\n"); 
            printf("4- Pontos Turisticos\n");
            printf("5 - Densidade Populacional\n");
            printf("Escolha: "); 
            scanf("%d", &escolhaAtributo);

            switch (escolhaAtributo){

            case 1:
                printf("\nPopulação\n");
                if (populacao1 > populacao2){
                    printf ("População francesa: %d\n", populacao1);
                    printf ("População espanhola: %d\n", populacao2);
                    printf ("França venceu!");
                }
                else if(populacao1 < populacao2){
                    printf ("População francesa: %d\n", populacao1);
                    printf ("População esponhola: %d\n", populacao2);
                    printf ("Espanha venceu!");
                } else {
                printf ("França - População: %d\n", populacao1);
                printf ("Espanha - População: %d\n", populacao2);
                printf ("Espanha venceu!");
                }
                
                break;

                case 2:
                    printf("\nArea\n");
                    if (area1 > area2){
                        printf("França - Area: %d\n", area1);
                        printf("Espanha - Area: %d\n", area2);
                        printf("França venceu!");

                    } else if (area1 < area2){
                        printf("França - Area: %d\n", area1);
                        printf("Espanha - Area: %d\n", area2);
                        printf("Espanha venceu!");
                    } else {
                        printf("França - Area: %d\n", area1);
                        printf("Espanha - Area: %d\n", area2);
                        printf("Empate");
                    }
                    break;

                case 3:
                    printf("\nPib\n");
                    if (pib1 > pib2){
                        printf("França - Pib: %.2f\n", pib1);
                        printf("Espanha - Pib: %.2f\n", pib2);
                        printf("França venceu!");
                    } else if (pib1 < pib2){
                        printf("França - Pib: %.2f\n", pib1);
                        printf("Espanha - Pib: %.2f\n", pib2);
                        printf("Espanha venceu!");
                    } else {
                        printf("França - Pib: %.2f\n", pib1);
                        printf("Espanha - Pib: %.2f\n", pib2);
                        printf("Empate");
                    }
                    break;

                case 4:
                    printf("\nPontos Turisticos\n");
                    if (pontost1 > pontost2){
                        printf("França - Pontos Turisticos: %d\n", pontost1);
                        printf("Espanha - Pontos Turisticos: %d\n", pontost2);
                        printf("França venceu!");

                    } else if (pontost1 < pontost2){
                        printf("França - Pontos Turisticos: %d\n", pontost1);
                        printf("Espanha - Pontos Turisticos: %d\n", pontost2);
                        printf("Espanha venceu!");

                    } else {
                        printf("França - Pontos Turisticos: %d\n", pontost1);
                        printf("Espanha - Pontos Turisticos: %d\n", pontost2);
                        printf("Empate");
                    }
                    break;

                case 5:
                    printf("\nDensidade Populacional\n");
                    if (dp1 < dp2){
                        printf("França - Densidade Populacional: %.2f\n", dp1);
                        printf("Espanha - Densidade Populacional: %.2f\n", dp2);
                        printf("França venceu!");

                    } else if (dp1 > dp2){
                        printf("França - Densidade Populacional: %.2f\n", dp1);
                        printf("Espanha - Densidade Populacional: %.2f\n", dp2);
                        printf("Espanha venceu!");
                    } else {
                        printf("França - Densidade Populacional: %.2f\n", dp1);
                        printf("Espanha - Densidade Populacional: %.2f\n", dp2);
                        printf("Empate");
                    }
                    break;    
                default:
                printf("Opção inválida!");
                    break;
                }


        return 0;
    }
