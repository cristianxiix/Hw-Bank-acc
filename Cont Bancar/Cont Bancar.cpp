#include <iostream>
#include <string>
#include "Mets.h"

int main()
{
	std::cout << "*****Bine ati venit la EuroBank!*****" << std::endl;
	std::string ops = "1.Sold\n2.Depunere\n3.Retragere\n4.Iesire\n";
	std::string otOps = "Pentru alte operatiuni, va rugam introduceti cifra corespunzatoare\n";
	std::cout << ops;
	int manevra;
	std::cin >> manevra;
	jump:
	switch (manevra)
	{
		default:
		{
		system("pause");
		std::cin >> manevra;
		}
		case 1:
		{
			std::cout << "Soldul dvs. este: " << ShowBalance() << " EURO" << std::endl;
			std::cout << otOps;
			std::cin >> manevra;
		}
		case 2:
		{
			float amount;
			std::cout << "Introduceti suma dorita pentru depunere\n";
			std::cin >> amount;
			std::cout << "Ati depus " << amount << " EURO.\nSoldul nou este " << Deposit(amount) << " EURO." << std::endl;
			std::cout << otOps;
			std::cin >> manevra;
			goto jump;
		}
		case 3:
		{
			float amount;
			std::cout << "Introduceti suma dorita pentru retragere\n";
			std::cin >> amount;
			std::cout << "Ati retras " << amount << " EURO.\nSoldul nou este " << Withdraw(amount) << " EURO." << std::endl;
			std::cout << otOps;
			std::cin >> manevra;
			goto jump;
		}
		case 4:
		{
			std::cout << "Programul se va termina la linia urmatoare." << std::endl;
			return 1;
		}
	}
}
const float ShowBalance()
{
	return sold;
}
float Deposit(float amount)
{
	sold += amount;
	return sold;
}
float Withdraw(float amount)
{
	sold -= amount;
	return sold;
}



