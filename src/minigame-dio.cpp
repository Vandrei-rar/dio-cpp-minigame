//#include <iostream>
//#include <cstdlib> // Para usar as funções rand() e srand()
//#include <ctime>   // Para usar a função time()
//#include <ncurses.h>
//
//using namespace std;
//
//int main() {
//	initscr();
//	start_color();
//
//	init_pair(1, COLOR_BLACK, COLOR_CYAN);
//	init_pair(1, COLOR_BLACK, COLOR_RED);
//    // Configuração para gerar números aleatórios diferentes em cada execução
//    srand(time(0));
//
//    int numeroSecreto = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
//    int tentativa;
//    int tentativasRestantes = 5;
//
//    attron(COLOR_PAIR(1));
//    printw("Bem-vindo ao jogo de adivinhação!");
//    cout << "Tente adivinhar o número secreto entre 1 e 100." << endl;

//    while (tentativasRestantes > 0) {
//        cout << "Tentativas restantes: " << tentativasRestantes << endl;
//        cout << "Digite seu palpite: ";
//        cin >> tentativa;
//
//        if (tentativa == numeroSecreto) {
//            cout << "Parabéns! Você acertou o número secreto." << endl;
//            break;
//        } else if (tentativa < numeroSecreto) {
//            cout << "Seu palpite é menor do que o número secreto." << endl;
//        } else {
//            cout << "Seu palpite é maior do que o número secreto." << endl;
//        }
//
//        tentativasRestantes--;
//    }
//
//    if (tentativasRestantes == 0) {
//        cout << "Suas tentativas acabaram. O número secreto era: " << numeroSecreto << endl;
//    }
//
//    getch();
//    endwin();
//
//    return 0;
//}
