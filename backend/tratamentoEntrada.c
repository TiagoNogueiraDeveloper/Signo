#include <stdio.h> //entrada e saida
#include <stdbool.h> //permite utilizar os valores true e false

// Tratamento de entrada com base nos dias e meses, verificando se os dados inseridos são válidos, e retornando mensagens de erro caso contrário. O tratamento é específico para o mês de fevereiro, que tem um número máximo de 29 dias.
int EntradaDiasMesesFev(int dia, int mes) {

    // Verifica se o dia está dentro do intervalo permitido (1 a 31)
    if (dia < 1 || dia > 31) {
        printf("Dia inválido. Por favor, tente novamente.\n");
        return false; // Retorna false para indicar entrada inválida
    }
    
    // Verifica se o mês está dentro do intervalo permitido (1 a 12)
    if (mes < 1 || mes > 12) {
        printf("Mês inválido. Por favor, tente novamente.\n");
        return false; // Retorna false para indicar entrada inválida
    }
    
    // Tratamento especial para fevereiro (máximo 29 dias)
    if (mes == 2 && dia > 29) {
        printf("Fevereiro não pode ter mais de 29 dias. Por favor, tente novamente.\n");
        return false; // Retorna false para indicar entrada inválida
    }
        
    return true; // se passou por todas validações, retorna true para indicar entrada válida
}
