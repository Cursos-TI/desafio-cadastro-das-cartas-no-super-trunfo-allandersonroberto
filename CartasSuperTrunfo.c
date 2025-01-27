#include <stdio.h>

int main() {
    int codCidade;
    char nomeCidade[1000];
    int populacao;
    float area;
    double pib;
    int numPontosTuristicos;

    printf("Digite o código da cidade:\n ");
    scanf("%d", &codCidade);

    printf("Digite o nome da cidade:\n ");
    scanf("%999s", nomeCidade);

    printf("Digite a população da cidade:\n ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²):\n ");
    scanf("%f", &area); 

    printf("Digite o PIB da cidade:\n ");
    scanf("%lf", &pib); 

    printf("Digite o número de pontos turísticos da cidade: \n ");
    scanf("%d", &numPontosTuristicos);

    printf("\n- Dados da Cidade -\n");
    printf("Código Cidade: %d\n", codCidade); 
    printf("Nome da cidade: %s\n", nomeCidade); 
    printf("População da cidade: %d\n", populacao); 
    printf("Área: %.2f km²\n", area); 
    printf("PIB: %.2f bilhões\n", pib); 
    printf("Número de pontos turísticos: %d\n", numPontosTuristicos); 

    return 0;
}