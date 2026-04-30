#include <stdio.h> // biblioteca de entrad a e saída
#include <stdlib.h> // utilizar o system("start ...")

// função para verificar signo recebendo dois valores: dia, mes
void verificarSigno(int dia, int mes) {

    // verifica em qual intervalo de datas o dia e o mês se encaixam
    // abre a página HTML correspondente ao signo
    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)) {
        printf("Seu signo e Aries!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/aries.html");
        #else
            system("xdg-open ../../frontend/html/aries.html");
        #endif
    }

    else if ((dia >= 20 && mes == 4) || (dia <= 20 && mes == 5)) {
        printf("Seu signo e Touro!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/touro.html");
        #else
            system("xdg-open ../../frontend/html/touro.html");
        #endif
    }

    else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
        printf("Seu signo e Gemeos!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/gemeos.html");
        #else
            system("xdg-open ../../frontend/html/gemeos.html");
        #endif
    }

    else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) {
        printf("Seu signo e Cancer!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/cancer.html");
        #else
            system("xdg-open ../../frontend/html/cancer.html");
        #endif
    }

    else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
        printf("Seu signo e Leao!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/leao.html");
        #else
            system("xdg-open ../../frontend/html/leao.html");
        #endif
    }

    else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
        printf("Seu signo e Virgem!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/virgem.html");
        #else
            system("xdg-open ../../frontend/html/virgem.html");
        #endif
    }

    else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
        printf("Seu signo e Libra!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/libra.html");
        #else
            system("xdg-open ../../frontend/html/libra.html");
        #endif
    }

    else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
        printf("Seu signo e Escorpiao!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/escorpiao.html");
        #else
            system("xdg-open ../../frontend/html/escorpiao.html");
        #endif
    }

    else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) {
        printf("Seu signo e Sagitario!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/sagitario.html");
        #else
            system("xdg-open ../../frontend/html/sagitario.html");
        #endif
    }

    else if ((dia >= 22 && mes == 12) || (dia <= 19 && mes == 1)) {
        printf("Seu signo e Capricornio!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/capricornio.html");
        #else
            system("xdg-open ../../frontend/html/capricornio.html");
        #endif
    }

    else if ((dia >= 20 && mes == 1) || (dia <= 18 && mes == 2)) {
        printf("Seu signo e Aquario!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/aquario.html");
        #else
            system("xdg-open ../../frontend/html/aquario.html");
        #endif
    }

    else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)) {
        printf("Seu signo e Peixes!\n");
        #ifdef _WIN32
            system("start ../../frontend/html/peixes.html");
        #else
            system("xdg-open ../../frontend/html/peixes.html");
        #endif
    }

    else {
        printf("Data invalida.\n");
    }
}