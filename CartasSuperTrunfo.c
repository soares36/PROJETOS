#include <stdio.h>


int main() {

//Declaração de variáveis.

    char estado[3];
    char codigodacidade[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int NumerodePontosTuristicos;
    float DensidadePopulacional;
    float PIBPerCapita;
    float SuperPoder;

    char estado1[3];
    char codigodacidade1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int NumerodePontosTuristicos1;
    float DensidadePopulacional1;
    float PIBPerCapita1;
    float SuperPoder1;

    //Entrada de dados.

    printf("Digite os dados da Carta 1\n");

    printf("Digite seu estado [de A a H]: ");
    scanf("%2s", estado);

    printf("Digite o codigo da carta [de 1 a 4]: ");
    scanf("%4s", codigodacidade);

    printf("Digite sua cidade: ");
    scanf("%49s", cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos sua cidade tem: ");
    scanf("%i", &NumerodePontosTuristicos);

    printf("Digite os dados da Carta 2\n");

    printf("Digite seu estado [de A a H]:");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta [de 1 a 4]: ");
    scanf("%4s", codigodacidade1);

    printf("Digite sua cidade: ");
    scanf("%49s", cidade1);

    printf("Digite a populacao da cidade: ");
    scanf("%i", &populacao1);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos sua cidade tem: ");
    scanf("%i", &NumerodePontosTuristicos1);

    // Cálculos para Carta 1
    DensidadePopulacional = (float)populacao / area;
    PIBPerCapita = (pib * 1000000000) / populacao; // Converte bilhões para reais
    SuperPoder = populacao + area + pib + NumerodePontosTuristicos + PIBPerCapita + (1/DensidadePopulacional);

    // Cálculos para Carta 2
    DensidadePopulacional1 = (float)populacao1 / area1;
    PIBPerCapita1 = (pib1 * 1000000000) / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + NumerodePontosTuristicos1 + PIBPerCapita1 + (1/DensidadePopulacional1);

    // Saída de dados.

    printf("Aqui estao os dados da Carta 1:\n");
    printf("Estado: %s\n", estado);  
    printf("Codigo da cidade: %s\n", codigodacidade);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao); 
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib); 
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("Aqui estao os dados da Carta 2:\n");
    printf("Estado: %s\n", estado1);  
    printf("Codigo da cidade: %s\n", codigodacidade1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);  
    printf("Area: %.2f km²\n", area1);  
    printf("PIB: %.2f bilhoes de reais\n", pib1);  
    printf("Numero de pontos turisticos: %d\n", NumerodePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);
    
// Menu para escolha dos atributos
    int atributo1 = 0, atributo2 = 0;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    
    do {
        printf("\nESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAÇÃO:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("Opção: ");
        scanf("%d", &atributo1);
        
        if(atributo1 < 1 || atributo1 > 6) {
            printf("Opção inválida!\n");
        }
    } while(atributo1 < 1 || atributo1 > 6);

    do {
        printf("\nESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAÇÃO (diferente do primeiro):\n");
        // Mostrar apenas opções não selecionadas
        if(atributo1 != 1) printf("1. População\n");
        if(atributo1 != 2) printf("2. Área\n");
        if(atributo1 != 3) printf("3. PIB\n");
        if(atributo1 != 4) printf("4. Pontos Turísticos\n");
        if(atributo1 != 5) printf("5. Densidade Populacional\n");
        if(atributo1 != 6) printf("6. PIB per Capita\n");
        printf("Opção: ");
        scanf("%d", &atributo2);
        
        if(atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6) {
            printf("Opção inválida! Escolha um atributo diferente.\n");
        }
    } while(atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6);

    // Obter valores dos atributos selecionados para cada carta
    switch(atributo1) {
        case 1:
            valor1_carta1 = populacao;
            valor1_carta2 = populacao1;
            printf("\nPrimeiro atributo: POPULAÇÃO\n");
            break;
        case 2:
            valor1_carta1 = area;
            valor1_carta2 = area1;
            printf("\nPrimeiro atributo: ÁREA\n");
            break;
        case 3:
            valor1_carta1 = pib;
            valor1_carta2 = pib1;
            printf("\nPrimeiro atributo: PIB\n");
            break;
        case 4:
            valor1_carta1 = NumerodePontosTuristicos;
            valor1_carta2 = NumerodePontosTuristicos1;
            printf("\nPrimeiro atributo: PONTOS TURÍSTICOS\n");
            break;
        case 5:
            valor1_carta1 = DensidadePopulacional;
            valor1_carta2 = DensidadePopulacional1;
            printf("\nPrimeiro atributo: DENSIDADE POPULACIONAL\n");
            break;
        case 6:
            valor1_carta1 = PIBPerCapita;
            valor1_carta2 = PIBPerCapita1;
            printf("\nPrimeiro atributo: PIB PER CAPITA\n");
            break;
    }

    switch(atributo2) {
        case 1:
            valor2_carta1 = populacao;
            valor2_carta2 = populacao1;
            printf("Segundo atributo: POPULAÇÃO\n");
            break;
        case 2:
            valor2_carta1 = area;
            valor2_carta2 = area1;
            printf("Segundo atributo: ÁREA\n");
            break;
        case 3:
            valor2_carta1 = pib;
            valor2_carta2 = pib1;
            printf("Segundo atributo: PIB\n");
            break;
        case 4:
            valor2_carta1 = NumerodePontosTuristicos;
            valor2_carta2 = NumerodePontosTuristicos1;
            printf("Segundo atributo: PONTOS TURÍSTICOS\n");
            break;
        case 5:
            valor2_carta1 = DensidadePopulacional;
            valor2_carta2 = DensidadePopulacional1;
            printf("Segundo atributo: DENSIDADE POPULACIONAL\n");
            break;
        case 6:
            valor2_carta1 = PIBPerCapita;
            valor2_carta2 = PIBPerCapita1;
            printf("Segundo atributo: PIB PER CAPITA\n");
            break;
    }

    // Comparação individual dos atributos
    printf("\nRESULTADOS INDIVIDUAIS:\n");
    
    // Comparação do primeiro atributo
    printf("Comparação 1: ");
    if(atributo1 == 5) { // Regra especial para densidade
        if(valor1_carta1 < valor1_carta2) {
            printf("Carta 1 (%s) venceu com %.2f < %.2f\n", cidade, valor1_carta1, valor1_carta2);
        } else if(valor1_carta2 < valor1_carta1) {
            printf("Carta 2 (%s) venceu com %.2f < %.2f\n", cidade1, valor1_carta2, valor1_carta1);
        } else {
            printf("Empate nos valores (%.2f)\n", valor1_carta1);
        }
    } else { // Regra padrão (maior valor vence)
        if(valor1_carta1 > valor1_carta2) {
            printf("Carta 1 (%s) venceu com %.2f > %.2f\n", cidade, valor1_carta1, valor1_carta2);
        } else if(valor1_carta2 > valor1_carta1) {
            printf("Carta 2 (%s) venceu com %.2f > %.2f\n", cidade1, valor1_carta2, valor1_carta1);
        } else {
            printf("Empate nos valores (%.2f)\n", valor1_carta1);
        }
    }
    
    // Comparação do segundo atributo
    printf("Comparação 2: ");
    if(atributo2 == 5) { // Regra especial para densidade
        if(valor2_carta1 < valor2_carta2) {
            printf("Carta 1 (%s) venceu com %.2f < %.2f\n", cidade, valor2_carta1, valor2_carta2);
        } else if(valor2_carta2 < valor2_carta1) {
            printf("Carta 2 (%s) venceu com %.2f < %.2f\n", cidade1, valor2_carta2, valor2_carta1);
        } else {
            printf("Empate nos valores (%.2f)\n", valor2_carta1);
        }
    } else { // Regra padrão (maior valor vence)
        if(valor2_carta1 > valor2_carta2) {
            printf("Carta 1 (%s) venceu com %.2f > %.2f\n", cidade, valor2_carta1, valor2_carta2);
        } else if(valor2_carta2 > valor2_carta1) {
            printf("Carta 2 (%s) venceu com %.2f > %.2f\n", cidade1, valor2_carta2, valor2_carta1);
        } else {
            printf("Empate nos valores (%.2f)\n", valor2_carta1);
        }
    }

    // Soma dos atributos e resultado final
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;
    
    printf("\nSOMA DOS ATRIBUTOS:\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade, valor1_carta1, valor2_carta1, soma_carta1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade1, valor1_carta2, valor2_carta2, soma_carta2);
    
    printf("\nRESULTADO FINAL: ");
    if(soma_carta1 > soma_carta2) {
        printf("Carta 1 (%s) venceu!\n", cidade);
    } else if(soma_carta2 > soma_carta1) {
        printf("Carta 2 (%s) venceu!\n", cidade1);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
