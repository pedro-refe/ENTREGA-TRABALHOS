#include <stdio.h>
    int main (){
        //GRAVAÇÃO PRIMEIRA CARTA - DEFININDO VARIÁVEIS
        char estado[5];
        char codigo[2];
        char nome[30];
        int populacao;
        int p_turistico;
        float area;
        float pib;
        float densidade;
        float pibpercapta;

        //GRAVAÇÃO PRIMEIRA CARTA - LETRA
        printf("Vamos começar a gravar os dados da primeira carta:\n");
        printf("Qual será a letra referente à carta? (entre A-H) ");
        scanf("%s", &estado);
        printf("Letra escolhida: %s \n", estado);

        //GRAVAÇÃO PRIMEIRA CARTA - CÓDIGO
        printf("Agora vamos escolher um número para ela.\n");
        printf("Digite um número entre 01-04: ");
        scanf("%s", codigo);
        printf("Código escolhido: %s \n", codigo);

        //GRAVAÇÃO PRIMEIRA CARTA - NOME DA CIDADE
        printf("Ok, agora me diga o nome da cidade escolhida: ");
        scanf("%s", nome);
        printf("%s é uma ótima cidade!\n", nome);
        //aqui por enquanto não aceita nome composto

        //GRAVAÇÃO PRIMEIRA CARTA - POPULAÇÃO
        printf("Me diga, qual a população de %s? ", nome);
        scanf("%d", &populacao);
        printf("A população de %s é de %d habitantes, uau!\n", nome, populacao); 

        //GRAVAÇÃO PRIMEIRA CARTA - ÁREA (Km²)
        printf("Beleza, agora eu já sei o nome e a população, mas ainda faltam algumas informações...\n");
        printf("Qual a área de %s em Km²? ", nome);
        scanf("%f", &area); 
        printf("A área de %s, é de %.2f Km².\n", nome, area);    

        //GRAVAÇÃO PRIMEIRA CARTA - PIB
        printf("Já estamos quase acabando de registrar nossa primeira carta, ok?\n");
        printf("Preciso que me diga, qual o PIB dos habitantes de %s? ", nome);
        scanf("%f", &pib);
        printf("Entendi, o PIB de %s é de R$ %.2f.\n", nome, pib);

        //GRAVAÇÃO PRIMEIRA CARTA - PONTOS TURÍSTICOS
        printf("Certo, outra informação que eu preciso saber é quantos pontos turísticos, %s tem. ", nome);
        scanf("%i", &p_turistico);
        printf("Sério que %s tem %i pontos turísticos?\n", nome, p_turistico);

        //GRAVAÇÃO PRIMEIRA CARTA - DENSIDADE POPULACIONAL
       densidade = (float) (populacao / area);

        //GRAVAÇÃO PRIMEIRA CARTA - PIB PER CAPTA
        pibpercapta = (float) (pib / populacao);
       
        
        //IMPRESSAO PRIMEIRA CARTA
        printf("Por enquanto já obtive todas as informações necessárias, assim ficou sua primeira carta:\n");
        printf("\n-----------------------------------------------------------------------------------\n");
        printf("CARTA %s%s\n", estado, codigo);
        printf("NOME DA CIDADE: %s\n", nome);
        printf("POPULAÇÃO: %d habitantes\n", populacao);
        printf("MEDIDA DA ÁREA: %.2f Km²\n", area);
        printf("PIB: R$ %.2f\n", pib);
        printf("PONTOS TURÍSTICOS: %i\n", p_turistico);
        printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade);
        printf("PIB PER CAPTA: %.2f\n", pibpercapta);
        printf("-------------------------------------------------------------------------------------\n");
        printf("\n\n\n\n");


        //DEFININDO VARIÁVEIS    
        char letra[5];
        char numero[2];
        char nomecidade[30];
        int popula;
        int turistico;
        float areakm2;
        float quantpib;
        float dens;
        float pibpercap;

        //GRAVAÇÃO SEGUNDA CARTA - LETRA
        printf("Vamos gravar nossa segunda carta agora.\n");
        printf("Qual letra vai representar esta carta? ");
        scanf("%s", &letra);
        printf("A letra escolhida foi %s.\n", letra);

        //GRAVAÇÃO SEGUNDA CARTA - CÓDIGO
        printf("Agora qual o código? ");
        scanf("%s", &numero);
        printf("O número do código é %s.\n", numero);

        //GRAVAÇÃO SEGUNDA CARTA - NOME DA CIDADE
        printf("Qual o nome da cidade escolhida? ");
        scanf("%s", nomecidade);
        printf("O nome escolhido foi %s.\n", nomecidade);

        //GRAVAÇÃO SEGUNDA CARTA - POPULAÇÃO
        printf("Me diga, qual a população de %s? ", nomecidade);
        scanf("%d", &popula);
        printf("População de %s é de %d habitantes.\n", nomecidade, popula);

        //GRAVAÇÃO SEGUNDA CARTA - ÁREA (Km²)
        printf("Qual é área de %s? ", nomecidade);
        scanf("%f", &areakm2);
        printf("A área de %s é de %.2f Km².\n", nomecidade, areakm2);

        //GRAVAÇÃO SEGUNDA CARTA - PIB
        printf("Qual o PIB da cidade? ");
        scanf("%f", &quantpib);
        printf("O PIB de %s é de R$ %.2f.\n", nomecidade, quantpib);

        //GRAVAÇÃO SEGUNDA CARTA - PONTOS TURÍSTICOS
        printf("Quantos pontos turísticos %s tem? ", nomecidade);
        scanf("%d", &turistico);
        printf("Existem %d pontos turísticos em %s.\n", turistico, nomecidade);

        //GRAVAÇÃO SEGUNDA CARTA - DENSIDADE POPULACIONAL
        dens = (float) (popula / areakm2);

        //GRAVAÇÃO SEGUNDA CARTA - PIB PER CAPTA
        pibpercap = (float) (popula / quantpib);

        //IMPRESSÃO SEGUNDA CARTA
        printf("\nPerfeito, agora irei imprimir sua segunda carta!\n");
        printf("\n-----------------------------------------------------------------------------------\n");
        printf("CARTA %s%s\n", letra, numero);
        printf("NOME DA CIDADE: %s\n", nomecidade);
        printf("POPULAÇÃO: %d habitantes\n", popula);
        printf("MEDIDA DA ÁREA: %.2f Km²\n", areakm2);
        printf("PIB: R$ %.2f\n", quantpib);
        printf("PONTOS TURÍSTICOS: %i\n", turistico);
        printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", dens);
        printf("PIB PER CAPTA: %.2f\n", pibpercap);
        printf("-------------------------------------------------------------------------------------\n");







    }