#include <stdio.h>

// Neste projeto, o intúito é gerar duas cartas de trunfo para cidades distintas. Cada cidade terá seus atributos.
// Os questionamentos ao usuário devem ser claros, e as características finais devem ser apresentadas de acordo.


int main() {
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1, codigo1[3], cidade1[30]; // o código conta 3 caracteres pois o enter conta como caractere.
    int populacao1, pturisticos1;
    float pib1, area1, pibpercapita1, densidadepop1;
    // as variáveis acima são referentes aos atributos da nossa carta 1.
    
    char estado2, codigo2[3], cidade2[30]; // o código conta 3 caracteres pois o enter conta como caractere.
    int populacao2, pturisticos2;
    float pib2, area2, pibpercapita2, densidadepop2;
    // as variáveis acima são referentes aos atributos da nossa carta 2.

        printf("Bem-vindo ao desenvolvimento de cartas de Super Trunfo\n");
        printf("Escolha uma letra entre A e H para representar o estado da sua carta 1 (a letra deve ser MAIÚSCULA): ");
        scanf(" %c", &estado1);
        // no código acima o usuário define o ESTADO da carta, que deve ser uma letra entre A e H.
        // a letra se enquadra como caractere, então devemos utilizar %c para categorizar a variável

        printf ("Agora, selecione um número entre 01 e 04 para compor o código da sua carta 1 (lembre-se de digitar o 0): ");
        scanf ("%s", codigo1);
        // agora o usuário foi instruido a escolher um número entre 01 e 04 para compor o código da carta.
        // utiliza-se o %s visto que 2 caracteres formam uma string. Strings não precisam do & para serem puxadas.

        printf ("Defina o nome da cidade da carta 1 (o nome não deve ser composto, nem ultrapassar 30 caracteres): ");
        scanf ("%s", cidade1);
        // no código acima introduzimos o nome da cidade, informando ao usuário que não deve ser um nome composto.
        // utiliza-se %s pois o nome é também uma string. 

        printf("Defina a população da cidade da carta 1 (lembre-se que a população é um número inteiro!): "); // solicitamos ao usuario a população da carta 1
        scanf ("%d", &populacao1); // %d é usado para parametrizar numeros inteiros, como no caso da var. população

        printf("Defina a quantidade de pontos turísticos da cidade da carta 1: "); // solicitamos ao usuario a quantidade de pontos turísticos da carta 1
        scanf ("%d", &pturisticos1); // %d por se tratar de uma variável int;

        printf("Defina a área em km² da cidade da carta 1 (separe as casas decimais com '.'): "); // solicitamos ao usuario a área da carta 1
        scanf ("%f", &area1); // %f por se tratar de uma variável float;

        printf("Defina o PIB (em bilhões) da cidade da carta 1 (separe a casas decimais com '.'): "); // solicitamos ao usuario o PIB da carta 1
        scanf ("%f", &pib1); // %f por se tratar de uma variável float;

        //calculo da densidade populacional
        densidadepop1 = (float) populacao1/area1;
        
        //calculo do PIB per capita
        //o valor está sendo multiplicado por 1 bilhão, uma vez que o valor que pedimos para o usuário preencher anteriormente é em BILHÕES.
        pibpercapita1 = (float) (pib1*1000000000)/populacao1;

    // A partir de agora, faremos os mesmos processos para coletar os dados da carta 2

        printf("Agora, faremos o mesmo processo para a segunda carta. Escolha uma letra entre A e H para representar o estado da sua carta 2 (a letra deve ser MAIÚSCULA): ");
        scanf(" %c", &estado2);

        printf ("Agora, selecione um número entre 01 e 04 para compor o código da sua carta 2 (lembre-se de digitar o 0): ");
        scanf ("%s", codigo2);

        printf ("Defina o nome da cidade da carta 2 (o nome não deve ser composto, nem ultrapassar 30 caracteres): ");
        scanf ("%s", cidade2);

        printf("Defina a população da cidade da carta 2 (lembre-se que a população é um número inteiro!): "); 
        scanf ("%d", &populacao2); 

        printf("Defina a quantidade de pontos turísticos da cidade da carta 2: "); 
        scanf ("%d", &pturisticos2); 

        printf("Defina a área em km² da cidade da carta 2 (separe a casas decimais com '.'): ");
        scanf ("%f", &area2); 

        printf("Defina o PIB (em bilhões) da cidade da carta 2 (separe a casas decimais com '.'): "); 
        scanf ("%f", &pib2);

        //calculo da densidade populacional
        densidadepop2 = (float) populacao2/area2;

        //calculo do PIB per capita
        //o valor está sendo multiplicado por 1 bilhão, uma vez que o valor que pedimos para o usuário preencher anteriormente é em BILHÕES.
        pibpercapita2 = (float) (pib2*1000000000)/populacao2;
        // abaixo, teremos os códigos referentes a impressão de todos os dados coletados acima para ambas as cartas.

        printf("\n");
        printf("DADOS DA CARTA 1\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c%s \n", estado1 , codigo1);
        printf ("Nome da Cidade: %s \n", cidade1);
        printf ("População: %d \n", populacao1);
        printf ("Número de pontos turísticos: %d \n", pturisticos1);
        printf ("Área: %.2f km²\n", area1); 
        printf ("PIB: %.2f bilhões de reais\n", pib1); 
        printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
        printf ("PIB per Capita: %.2f reais\n", pibpercapita1);

        printf("\n");

        printf("DADOS DA CARTA 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c%s \n", estado2 , codigo2);
        printf ("Nome da Cidade: %s \n", cidade2);
        printf ("População: %d \n", populacao2);
        printf ("Número de pontos turísticos: %d \n", pturisticos2);
        printf ("Área: %.2f km²\n", area2); 
        printf ("PIB: %.2f bilhões de reais\n", pib2); 
        printf ("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
        printf ("PIB per Capita: %.2f reais\n", pibpercapita2);

         /* alteração 30-03
         Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional,
         que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
         Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, 
         que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
         */

    return 0;
}

    // estado = char - codigo da carta = char[] - nome da cidade = char[] - populaçao = int - area em km = float
    // PIB = float - numero de pontos turisticos = int






