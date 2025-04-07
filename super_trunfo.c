#include <stdio.h>

int main(){
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // Exemplo: "A01" (3 caracteres + '\0')
    char cidade1[100]; // Espaço para o nome da cidade
    int população1;
    float area1;
    float PIB1;
    int turisticos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4]; // Exemplo: "A01" (3 caracteres + '\0')
    char cidade2[100]; // Espaço para o nome da cidade
    int população2;
    float area2;
    float PIB2;
    int turisticos2;


    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1: \n");  

    printf("Estado (A-H): \n");
    scanf("%c", &estado1); // O espaço antes de %c ignora caracteres de espaço em branco

    printf("Código (ex: A01): \n");
    scanf("%s", codigo1);   

    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade1); // Lê a linha inteira até encontrar um '\n'

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &população1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos1);


    // Entrada de dados para a Carta 2
    printf("Digite os dados da Carta 2: \n");  

    printf("Estado (A-H): \n");
    scanf("%c", &estado2); // O espaço antes de %c ignora caracteres de espaço em branco

    printf("Código (ex: A01): \n");
    scanf("%s", codigo2);   

    printf("Nome da Cidade: ");
    scanf("%[^\n]", cidade2); // Lê a linha inteira até encontrar um '\n'

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &população2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &turisticos2);

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);

    return 0;

}
