#include <stdio.h> // biblioteca de entrada e saída
#include <unistd.h> // biblioteca pra algumas funcões no so linux
#include <stdlib.h> // uso do system("cls")
#include "tratamentoEntrada.c" // inclui o arquivo com a função de tratamento de entradas
#include "signos.c" // inclui o arquivo com a função de verificação de signos

int main(){
    // variáveis
    int dia, mes, ano;
    int opcao;

    #ifdef _WIN32
        system("cls"); // limpar a tela (WINDOWS)
    #else
        system("clear");// system("clear"); (LINUX)
    #endif

    // interface inicial
    printf("\n---------------------------------------\n");
    printf("-------- DESCOBRIDOR DE SIGNOS --------");
    printf("\n---------------------------------------\n");

    //loop para rodar pelo menos uma vez
    do {

        // entrada de dados
        printf("Digite o dia do seu nascimento: ");
        scanf("%i", &dia);

        printf("Digite o mês do seu nascimento: ");
        scanf("%i", &mes);

        printf("Digite o ano do seu nascimento: ");
        scanf("%i", &ano);
            
        // se as entradas forem válidas, o programa segue
        if(EntradaDiasMesesFev(dia, mes)) {
            verificarSigno(dia,mes);
        }

        //pergunta pro usuario se ele quer verificar outro signo
        printf("\nDeseja verificar outro signo? 1(SIM)/2(NAO): ");
        scanf("%i", &opcao);

        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif //limpar tela antes de repetir

    } while (opcao == 1);  // 1 continua repetindo / 2 encerra programa
}