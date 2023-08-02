#include <iostream>
#include <ncurses.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    initscr(); // Inicializa a tela
    start_color(); // Inicializa suporte a cores

    init_pair(1, COLOR_CYAN, COLOR_BLACK); // Define um par de cores (Texto em vermelho, fundo preto)
    init_pair(2, COLOR_GREEN, COLOR_BLACK);

    attron(COLOR_PAIR(1)); // Ativa o par de cores definido

    printw("Bem-vindo ao jogo de adivinhação!\n");
    printw("Tente adivinhar o número secreto entre 1 e 100.\n");
    refresh(); // Atualiza a tela para exibir o texto

    srand(time(0)); // Inicializa a semente do gerador de números aleatórios
    int numeroSecreto = rand() % 100 + 1; // Gera um número secreto entre 1 e 100
    int tentativa, tentativas = 5;

    attroff(COLOR_PAIR(1));
    attron(COLOR_PAIR(2));
    while (tentativas <= 5) {
        printw("Digite um número: ");
        scanw("%d", &tentativa); // Lê a tentativa do jogador

        if (tentativa == numeroSecreto) {
        	clear();
            printw("Parabéns, faltavam %d tentativas!\n", tentativas);
            break;
        } else if (tentativa < numeroSecreto) {
        	clear();
        	printw("Número de tentativas: %d\n", tentativas);
            printw("Tente um número maior.\n");
        } else {
        	clear();
        	printw("Número de tentativas: %d\n", tentativas);
            printw("Tente um número menor.\n");
        }

        refresh(); // Atualiza a tela para exibir a mensagem
        tentativas--;

        if (tentativas == -1) {
        	clear();
    		printw("Suas tentativas acabaram! O número secreto era: %d\n\n", numeroSecreto);
    		break;
    	}
    }
    attroff(COLOR_PAIR(2)); // Desativa o par de cores definido
    attron(COLOR_PAIR(1));

    printw("Pressione qualquer tecla para continuar");
    getch(); // Aguarda um caractere ser digitado para encerrar o programa
    endwin(); // Restaura as configurações do terminal

    return 0;
}
