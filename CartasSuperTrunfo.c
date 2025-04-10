#include <stdio.h>

 int main (){
          
    char estado [1];
    char código [20];
    char cidade [50];
    int população;
    float área;
    float PIB;
    int p_turistico;

    printf("Carta 01: \n"); //carta numero 1 
    printf("Digite a letra inicial do estado: \n");
    scanf("%c" , &estado);

    printf("Código da carta: \n");
    scanf("%s" , &código);
    
    printf("Nome da cidade: \n");
    scanf("%s" , &cidade);

    printf("Digite o número de habitantes: \n");
    scanf("%d" , &população);

    printf("Área total: \n");
    scanf("%f" , &área);

    printf("Digite o PIB: \n");
    scanf("%f" , &PIB);

    printf("Pontos turísticos: \n");
    scanf("%d" , &p_turistico);

    printf("Carta 01: \n"); // cadastro pronto da carta numero 1 
    printf("Estado: %c \n" , estado);
    printf("Código: %s \n" , código);
    printf("Nome da cidade: %s \n" , cidade);
    printf("População: %d \n" , população);
    printf("Área: %f \n" , área);
    printf("PIB: %f \n" , PIB);
    printf("Número de pontos turísticos: %d \n" , p_turistico);

    char estado2 [10];
    char código2 [20];
    char cidade2 [50];
    int população2;
    float área2;
    float PIB2;
    int p_turistico2;

     printf("Carta 02: \n"); // Carta numero 2

     printf("Digite a letra inicial do estado: \n");
     scanf("%c \n" , &estado2);
 
     printf("Código da carta: \n");
     scanf("%s" , &código2);
     
     printf("Nome da cidade: \n");
     scanf("%s" , &cidade2);
 
     printf("Digite o número de habitantes: \n");
     scanf("%d" , &população2);
 
     printf("Área total: \n");
     scanf("%f" , &área2);
 
     printf("Digite o PIB: \n");
     scanf("%f" , &PIB2);
 
     printf("Pontos turísticos: \n");
     scanf("%d" , &p_turistico2);
 
     printf("Carta 02: \n"); // cadastro pronto da carta numero 2
     printf("Estado: %c \n" , estado2);
     printf("Código: %s \n" , código2);
     printf("Nome da cidade: %s \n" , cidade2);
     printf("População: %d \n" , população2);
     printf("Área: %f \n" , área2);
     printf("PIB: %f \n" , PIB2);
     printf("Número de pontos turísticos: %d \n" , p_turistico2);

     return 0;
   }
 



// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
