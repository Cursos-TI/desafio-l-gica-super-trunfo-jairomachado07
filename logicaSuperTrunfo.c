// #include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Deixei todas as alterações que fiz comentadas para facilitar a visualização do que foi alterado e caso eu precise voltar ao código original.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    //Todos os atributos foram feitos duplicados, com nomes parecidos apenas com o dois no final para diferenciar.
    //Adicionei uma variavel escolha para o switch case que será implementado futuramente.
    
    int populacao, populacao2, npontosturisticos, npontosturisticos2, escolha;
    float area, area2, pbi, pbi2;

    // Cadastro das Cartas:
    // Entrada dos dados da primeira cidade (Carta 1)

    //Entrada dos dados da primeira cidade (Carta 1)
    char estado[] = "Ceará";
    char codigo[] = "A01";
    char nomecidade[] = "Fortaleza";
    populacao = 2428678;
    area = 313.8;
    pbi = 73436728432.00;
    npontosturisticos = 15; 

    //Criando os dados estatisticos adicionais(PIB per capita e Densidade populacional)
    float densidade_populacional = populacao / area;
    float pbi_per_capita = pbi / populacao;

    //Retirando o superpower da carta e adicionando a soma dos atributos para definir o vencedor
    int soma_atributos1 = 0;
    int soma_atributos2 = 0;
    int empate_atributos = 0;
    //Entrada dos dados da segunda cidade
    char estado2[] = "Rio Grande do Norte";
    char codigo2[] = "B02";
    char nomecidade2[] = "Natal";
    populacao2 = 735368;
    area2 = 167.3;
    pbi2 = 24186261543.00;
    npontosturisticos2 = 10;

    //Criando os dados estatisticos adicionais da cidade 2(PIB per capita e Densidade populacional)
    float densidade_populacional2 = populacao2 / area2;
    float pbi_per_capita2 = pbi2 / populacao2;
    
    //mostrando os dados d primeira carta    
    printf("Super Trunfo!\n");
    printf("\n");
    printf("Estado: %s", estado);
    printf(", codigo: %s", codigo);
    printf(", nome da Cidade: %s\n", nomecidade);

    //mostrando os dados da segunda carta
    printf("Estado: %s", estado2);
    printf(", codigo: %s", codigo2);
    printf(", nome da Cidade: %s\n", nomecidade2);
    printf("\n");

    //Caulculando o SuperPower da carta 1 e 2

    float superpower1 = (float)populacao + area + pbi + (float)npontosturisticos + (float)pbi_per_capita + (1-(float)densidade_populacional);

    float superpower2 = (float)populacao2 + area2 + pbi2 + (float)npontosturisticos2 + (float)pbi_per_capita2 + (1-(float)densidade_populacional2);


    // Comparação de Cartas:
    // Implementando um switch case para cada atributo

    printf("Escolha o atributo para comparar entre as cidades:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Número de Pontos Turísticos\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PBI per capita\n");
    printf("6 - Mostrar dados de %s\n", nomecidade);
    printf("7 - Mostrar dados de %s\n", nomecidade2);
    printf("8 - Mostrar o vencedor por atributos\n");
    printf("9 - Mostrar o vencedor pelo Superpower\n");
    printf("Digite sua escolha (1-9): ");
    scanf("%d", &escolha);

    switch (escolha){
    case 1: //Mostrando a cidade com maior população
        if(populacao > populacao2){
            printf("Com a população de %d, a população de %s é maior que a de %s\n", populacao, nomecidade, nomecidade2);
        }else if(populacao == populacao2){
            printf("As duas cidades possuem a mesma população de %d\n", populacao);
        }else{
            printf("Com a população de %d, a população de %s é maior que a de %s\n", populacao2, nomecidade2, nomecidade);
        }
        break;
    case 2: //mostrando a cidade com maior area
        if(area > area2){
            printf("Com a area de %.2f, a area de %s é maior que a de %s\n", area, nomecidade, nomecidade2);
        }else if(area == area2){
            printf("As duas cidades possuem a mesma area de %.2f\n", area);
        }else{
            printf("Com a area de %.2f, a area de %s é maior que a de %s\n", area2, nomecidade2, nomecidade);
        }   
        break;
    case 3: //Mostrando a cidade com maior PBI
        if(npontosturisticos > npontosturisticos2){
            printf("Com a quantidade de %d, o numero de pontos turisticos de %s é maior que a de %s\n", npontosturisticos, nomecidade, nomecidade2);
        }else if(npontosturisticos == npontosturisticos2){
            printf("As duas cidades possuem a mesma quantidade de pontos turisticos de %d\n", npontosturisticos);
        }else{
            printf("Com a quantidade de %d, o numero de pontos turisticos de %s é maior que a de %s\n",npontosturisticos2, nomecidade2, nomecidade);
        }
        break;
    case 4: //Mostrando a cidade com maior densidade populacional
        if(densidade_populacional > densidade_populacional2){
            printf("Com a densidade populacional de %.2f, a densidade populacional de %s é maior que a de %s\n", densidade_populacional, nomecidade, nomecidade2);
        }else if(densidade_populacional == densidade_populacional2){
            printf("As duas cidades possuem a mesma densidade populacional de %.2f\n", densidade_populacional);
        }else{
            printf("Com a densidade populacional de %.2f, a densidade populacional  de %s é maior que a de %s\n", densidade_populacional2, nomecidade2, nomecidade);
        }
        break;
    case 5: //Mostrando a cidade com maior PBI per capita
        if(pbi_per_capita > pbi_per_capita2){
            printf("Com o pbi per capita de %.2f, o PBI per capita de %s é maior que o de %s\n", pbi_per_capita, nomecidade, nomecidade2);
        }else if(pbi_per_capita == pbi_per_capita2){
            printf("As duas cidades possuem o mesmo pbi per capita de %.2f\n", pbi_per_capita);
        }else{                  
            printf("Com o pbi per capita de %.2f, o PBI per capita de %s é maior que o de %s\n", pbi_per_capita2, nomecidade2, nomecidade);
        }
        break;
    case 6: //Mostrando os dados de Fortaleza
        printf("Dados de %s:\n", nomecidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f\n", area);
        printf("PBI: %.2f\n", pbi);
        printf("Número de Pontos Turísticos: %d\n", npontosturisticos);
        printf("Densidade Populacional: %.2f\n", densidade_populacional);
        printf("PBI per capita: %.2f\n", pbi_per_capita);
        break;
    case 7: //Mostrando os dados de Natal
        printf("Dados de %s:\n", nomecidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PBI: %.2f\n", pbi2);
        printf("Número de Pontos Turísticos: %d\n", npontosturisticos2);
        printf("Densidade Populacional: %.2f\n", densidade_populacional2);
        printf("PBI per capita: %.2f\n", pbi_per_capita2);
        break;
    case 8: //Mostrando o vencedor por atributos
        if(populacao > populacao2){
            printf("A cidade de %s é a vencedora com a população de %d\n", nomecidade, populacao);
            soma_atributos1++;
        }else if(populacao == populacao2){
            printf("As duas cidades empataram");
            empate_atributos++;
        }else{
            printf("A cidade de %s é a vencedora com a população de %d\n", nomecidade2, populacao2);
            soma_atributos2++;
        }

        if(area > area2){
            printf("A cidade de %s é a vencedora com a area de %.2f\n", nomecidade, area);
            soma_atributos1++;
        }else if(area == area2){
            printf("As duas cidades empataram");
            empate_atributos++;
        }else{
            printf("A cidade de %s é a vencedora com a area de %.2f\n", nomecidade2, area2);
            soma_atributos2++;
        } 

        if(npontosturisticos > npontosturisticos2){
            printf("A cidade de %s é a vencedora com a quantidade de pontos turisticos de %d\n", nomecidade, npontosturisticos);
            soma_atributos1++;
        }else if(npontosturisticos == npontosturisticos2){
            printf("As duas cidades empataram");
            empate_atributos++;
        }else{
            printf("A cidade de %s é a vencedora com a quantidade de pontos turisticos de %d\n", nomecidade2, npontosturisticos2);
            soma_atributos2++;
        }

        if(densidade_populacional < densidade_populacional2){
            printf("A cidade de %s é a vencedora com a densidade populacional de %.2f\n", nomecidade, densidade_populacional);
            soma_atributos1++;
        }else if(densidade_populacional == densidade_populacional2){
            printf("As duas cidades empatam");
            empate_atributos++;
        }else{
            printf("A cidade de %s é a vencedora com a densidade populacional de %.2f\n", nomecidade2, densidade_populacional2);
            soma_atributos2++;
        }

        if(pbi_per_capita > pbi_per_capita2){
            printf("A cidade de %s é a vencedora com o pbi per capita de %.2f\n", nomecidade, pbi_per_capita);
            soma_atributos1++;
        }else if(pbi_per_capita == pbi_per_capita2){
            printf("As duas cidades empataram");
            empate_atributos++;
        }else{                  
            printf("A cidade de %s é a vencedora com o pbi per capita de %.2f\n", nomecidade2, pbi_per_capita2);
            soma_atributos2++;
        }
        //Mostrando o vencedor por atributos
        if(soma_atributos1 > soma_atributos2){
            printf("A cidade vencedora é %s com %d atributos ganhos!\n", nomecidade, soma_atributos1);
        }else if(soma_atributos1 == soma_atributos2){
            printf("As duas cidades empataram com %d atributos ganhos cada!\n", soma_atributos1);
        }else{
            printf("A cidade vencedora é %s com %d atributos ganhos!\n", nomecidade2, soma_atributos2);
        }
        break;
    case 9: //Criando o superpower utilizando operador ternário
        if(superpower1 != superpower2){
            superpower1 > superpower2 ? printf("A cidade de %s é a vencedora com o superpower de %.2f\n", nomecidade, superpower1) : printf("A cidade de %s é a vencedora com o superpower de %.2f\n", nomecidade2, superpower2);
        }else{
            printf("As duas cidades empataram com o superpower de %.2f\n", superpower1);
        }
        break;
        
    default:
        printf("Escolha invalida!\n");
        break;
    }    

    printf("\n");
    
}