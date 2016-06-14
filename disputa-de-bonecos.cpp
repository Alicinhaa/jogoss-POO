#include <iostream>
#include <string> //para usar o tipo de dado string
#include <ctime>  // usa o tempo como "semente " do gerador 

using namespace std; // função principal 

int main(int argc, char* args[])
{
	bool sair = false; // variável lógica para usar na condição do laço
	string jog1, jog2; // variável que salva o nome dos jogadores 
	int vida1 = 20, vida2 = 20; // define a vida inicial do jogador 
	int A = 4, D = 2; // ataque e defesa do jogador 


	cout << "Digite o nome do jogador 1:" << endl; //pede para que o jogador 1 digite o nome 
	cin >> jog1; //salva o nome digitado na variável jog1

	cout << "Digite o nome do jogador 2:" << endl; // pede para que o jogador 2 digite o nome 
	cin >> jog2; // salva o nome na variável jog2
	while (sair == false) { // imprime os guerreiros e mostra o nome,vida e status


		cout << " o                       o" << endl;
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
		cout << "A:" << A << "           " << "A:" << A << endl;
		cout << "D:" << D << "           " << "D:" << D << endl;


		system("pause");// pausa para que os jogadores apareçam na tela

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
