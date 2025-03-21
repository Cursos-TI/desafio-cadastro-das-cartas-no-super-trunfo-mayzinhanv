#include <stdio.h>

// Neste projeto, o intúito é gerar duas cartas de trunfo para cidades distintas. Cada cidade terá seus atributos.
// Os questionamentos ao usuário devem ser claros, e as características finais devem ser apresentadas de acordo.


int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, codigo1[3], cidade1[30]; // o código conta 3 caracteres pois o enter conta como caractere.
    int populacao1, pturisticos1;
    float pib1, area1;
    // as variáveis acima são referentes aos atributos da nossa carta. solicitaremos ao usuário que introduza as características
    // levando à criação de cada uma de suas cartas.

    printf("Bem-vindo ao desenvolvimento de cartas de Super Trunfo\n");
    printf("Escolha uma letra entre A e H para representar o estado da sua carta 1 (a letra deve ser MAIÚSCULA): ");
    scanf(" %c", &estado1);
    // no código acima o usuário define o ESTADO da carta, que deve ser uma letra entre A e H.
    // a letra se enquadra como caractere, então devemos utilizar %c para categorizar a variável

    printf ("Agora, selecione um número entre 01 e 04 para compor o código da sua carta 1 (lembre-se de digitar o 0): ");
    scanf ("%s", codigo1);
    // agora o usuário foi instruido a escolher um número entre 01 e 04 para compor o código da carta.
    // utiliza-se o %s visto que 2 caracteres formam uma string.


    printf ("Defina o nome da cidade da carta 1 (o nome não deve ser composto, nem ultrapassar 30 caracteres): ");
    scanf ("%s", cidade1);
    // no código acima introduzimos o nome da cidade, informando ao usuário que não deve ser um nome composto.
    // utiliza-se %s pois o nome é também uma string.

    printf("Defina a população da cidade da carta 1: "); // solicitamos ao usuario a população da carta 1
    scanf ("%d", &populacao1); // %d é usado para parametrizar numeros inteiros, como no caso da var. população

    printf("DADOS DA CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c%s \n", estado1 , codigo1);
    printf ("Nome da Cidade: %s \n", cidade1);
    printf ("População: %d \n", populacao1);
    


    return 0;
}

    // estado = char - codigo da carta = char[] - nome da cidade = char[] - populaçao = int - area em km = float
    // PIB = float - numero de pontos turisticos = int




