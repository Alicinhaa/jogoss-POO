#include <iostream>
#include <ctime>
using namespace std;

void imprimir_espacos(int rodada);
int main()
{
	int total_espacos = 50;
	int espacos_1 = 0;
	int espacos_2 = 0;
	while (espacos_1 < total_espacos && espacos_2 < total_espacos)
	{
		system("cls");
		cout << "Jogo do carrinho de corrida legal" << endl;
		cout << "                                                Chegada!" << endl;

		srand((int)time(0));

		espacos_1 = rand() % 3 + 1 + espacos_1;
		imprimir_espacos(espacos_1);
		cout << "  _  " << endl;
		imprimir_espacos(espacos_1);
		cout << "-o-o>" << endl;

		espacos_2 = rand() % 3 + 1 + espacos_2;
		imprimir_espacos(espacos_2);
		cout << "  _  " << endl;
		imprimir_espacos(espacos_2);
		cout << "-o-o>" << endl;
	}
	if (espacos_1 > espacos_2) cout << "Carro 1 venceu a corrida!" << endl;
	else if (espacos_2 > espacos_1) cout << "Carro 2 venceu a corrida!" << endl;
	else cout << "Empate!" << endl;
	return 0;
}

void imprimir_espacos(int rodada)
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{
		cout << " ";
	}
}