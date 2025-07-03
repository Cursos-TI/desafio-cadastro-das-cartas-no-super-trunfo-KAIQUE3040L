#include <stdio.h>
    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa

    int main() {
        printf("Desafio Super Trunfo\n");
        printf("Novo Commit\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Programa Super Trunfo de Cidades - Cadastro de 2 carta()
{
    // Variáveis da Carta 1
    char Estado1[10];
    char Carta1[10];
    char cidade1[100];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;
    // Variáveis da Carta 2
    char Estado2[10];
    char Carta2[10];
    char cidade2[100];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    // Dados da Carta 1
    printf("Digite o Estado:\n");
    scanf("%s", Estado1);

    printf("Digite o Código da Carta:\n");
    scanf("%s", Carta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB(Em bilhões):\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos1);

    // Exibição da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Nome do Estado: %s - Código da carta: %s - Nome da cidade: %s\n", Estado1, Carta1, cidade1);
    printf("Área em km²: %.2f - População: %d - Pontos turísticos: %d - PIB: %.2f\n", area1, populacao1, pontos_turisticos1, PIB1);

    // Dados da Carta 2
    printf("\nDigite o Estado:\n");
    scanf("%s", Estado2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", Carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB(Em bilhões):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Exibição da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Nome do Estado: %s - Código da carta: %s - Nome da cidade: %s\n", Estado2, Carta2, cidade2);
    printf("Área em km²: %.2f - População: %d - Pontos turísticos: %d - PIB: %.2f\n", area2, populacao2, pontos_turisticos2, PIB2);

    return 0;
}
// Não utilize espaços, por favor, eles geram um erro no programa, caso necessário utilize "_"(EX:São_Paulo/Rio_De_Janeiro);
// O PIB1(PIB: %f\n) acabava sendo completo com 029(699.280029) por isso alterei para %2.f\n para ficar reduzido a 699.28, e para manter padronizado alterei também o PIB2
// A area (Área em km²: %f\n, area1) acabava sendo completo com 099985(1521.109985) por isso alterei para %2.f\n para ficar reduzido a 1521.11, e para manter padronizado alterei também a área2
}
