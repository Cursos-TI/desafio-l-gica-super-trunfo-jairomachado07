#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    //Todos os atributos foram feitos duplicados, com nomes parecidos apenas com o dois no final para diferenciar.
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nomecidade[20], nomecidade2[20];
    int populacao, populacao2, npontosturisticos, npontosturisticos2;
    float area, area2, pbi, pbi2;
    
    // Cadastro das Cartas:
    //Entrada dos dados da primeira cidade (Carta 1)
    printf("Digite o estado 1(letra): ");
    scanf(" %c", &estado);
    printf("Digite o codigo 1(3 digitos): ");
    scanf("%3s", codigo);
    printf("Digite o nome da cidade 1(ate 50 letras): ");
    scanf("%19s", nomecidade);
    printf("Digite a populacao da cidade 1: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade 1: ");
    scanf("%f", &area);
    printf("Digite o PBI: ");
    scanf("%f", &pbi);
    printf("Digite o numero de pontos turisticos (inteiro): ");
    scanf("%d", &npontosturisticos);

    //Criando os dados estatisticos adicionais(PIB per capita e Densidade populacional)
    float densidade_populacional = populacao / area;
    float pbi_per_capita = pbi / populacao;

    //Caulculando o SuperPower da carta 1
    float superpower1 = (float)populacao + area + pbi + (float)npontosturisticos + (float)pbi_per_capita + (1-(float)densidade_populacional);

    //Entrada dos dados da segunda cidade
    printf("Digite o estado 2(letra): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo 2(3 digitos): ");
    scanf("%3s", codigo2);
    printf("Digite o nome da cidade 2(ate 50 letras): ");
    scanf("%19s", nomecidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PBI: ");
    scanf("%f", &pbi2);
    printf("Digite o numero de pontos turisticos (inteiro): ");
    scanf("%d", &npontosturisticos2);

    //Criando os dados estatisticos adicionais da cidade 2(PIB per capita e Densidade populacional)
    float densidade_populacional2 = populacao2 / area2;
    float pbi_per_capita2 = pbi2 / populacao2;

    //Caulculando o SuperPower da carta 2
    float superpower2 = (float)populacao2 + area2 + pbi2 + (float)npontosturisticos2 + (float)pbi_per_capita2 +(1- (float)densidade_populacional2);
    
    //mostrando os dados d primeira carta    
    printf("Super Trunfo!\n");
    printf("\n");
    printf("Estado: %c", estado);
    printf(", codigo: %s", codigo);
    printf(", nome da Cidade: %s\n", nomecidade);

    //mostrando os dados da segunda carta
    printf("Estado: %c", estado2);
    printf(", codigo: %s", codigo2);
    printf(", nome da Cidade: %s\n", nomecidade2);
    printf("\n");

    // Comparação de Cartas:

    //Mostrando a cidade com maior população
    if(populacao > populacao2){
        printf("Com a população de %d, a população de %s é maior que a de %s\n", populacao, nomecidade, nomecidade2);
    }else{
        printf("Com a população de %d, a população de %s é maior que a de %s\n", populacao2, nomecidade2, nomecidade);
    }

    //mostrando a cidade com maior area
    if(area > area2){
        printf("Com a area de %.2f, a area de %s é maior que a de %s\n", area, nomecidade, nomecidade2);
    }else{
        printf("Com a area de %.2f, a area de %s é maior que a de %s\n", area2, nomecidade2, nomecidade);
    }

    //Mostrando a cidade com maior PBI
    if(pbi > pbi2){
        printf("Com o PBI de %.2f, o PBI de %s é maior que o de %s\n", pbi, nomecidade, nomecidade2);
    }else{
        printf("Com o PBI de %.2f, o pbi de %s é maior que a de %s\n", pbi2, nomecidade2, nomecidade);
    }

    //Mostrando a cidade com numero maior de pontos turisticos
    if(npontosturisticos > npontosturisticos2){
        printf("Com a quantidade de %d, o numero de pontos turisticos de %s é maior que a de %s\n", npontosturisticos, nomecidade, nomecidade2);
    }else{
        printf("Com a quantidade de %d, o numero de pontos turisticos de %s é maior que a de %s\n",npontosturisticos2, nomecidade2, nomecidade);
    }

    //Mostrando a cidade com maior densidade populacional
    if(densidade_populacional > densidade_populacional2){
        printf("Com a densidade populacional de %.2f, a densidade populacional de %s é maior que a de %s\n", densidade_populacional, nomecidade, nomecidade2);
    }else{
        printf("Com a densidade populacional de %.2f, a densidade populacional de %s é maior que a de %s\n", densidade_populacional2, nomecidade2, nomecidade);
    }

    //Mostrando a cidade com maior PBI per capita
    if(pbi_per_capita > pbi_per_capita2){
        printf("Com o pbi per capita de %.2f, o PBI per capita de %s é maior que o de %s\n", pbi_per_capita, nomecidade, nomecidade2);
    }else{
        printf("Com o pbi per capita de %.2f, o PBI per capita de %s é maior que o de %s\n", pbi_per_capita2, nomecidade2, nomecidade);
    }

    printf("\n");

    //O superpower define quem tem os maiores atributos, então quem tem o maior superpower é a cidade vencedora
    if(superpower1 > superpower2){
        printf("A cidade vencedora é: %s\n", nomecidade);
    }else{
        printf("A cidade vencedora é: %s\n", nomecidade2);
    }
    return 0;
}
