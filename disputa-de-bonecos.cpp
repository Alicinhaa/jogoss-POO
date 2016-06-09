#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int A = 4, D = 2;


	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	while (sair == false) {


		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;


		system("pause");

		int dado6;

		//Adiciona uma "semente" ao gerador de numeros
		srand((int)time(0));
		//Gera um número aletorio
		dado6 = rand() % 6 + 1;
		//Gera um dano no jogador 1
		if (dado6 > 4)
		{
			vida1 = vida1 - dado6;
			cout << jog1 << "Dano:" << -dado6 << endl;
			cout << jog2 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}

		else if (dado6 <= 4)
		{

			cout << jog2 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}
		//Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		{

			vida2 = vida2 - dado6;
			cout << jog2 << "Dano:" << -dado6 << endl;
			cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
		}
		else if (dado6 <= 4) {

			cout << jog1 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();

		}

		//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;

		system("cls");

		// se sair não limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{

			sair = true;
		}
		// se continuar entao limpa a tela
		else system("cls");
	}


	cout << "Fim de jogo!" << endl;

	if (vida1 > 0) cout << jog1 << "Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;
	else cout << "Os dois perderam!" << endl;
	return 0;


}