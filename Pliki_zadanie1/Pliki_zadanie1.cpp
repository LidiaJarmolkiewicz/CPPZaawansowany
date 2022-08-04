#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <algorithm>
#include <cstdlib>
//Program lista zakup�w-Stw�rz program, kt�ry b�dzie od u�ytkownika wczytywa� nazwy produkt�w spo�ywczych oraz ilo�� do kupienia(dla uproszczenia bez jednostki miary).
//- dla pewno�ci zamie� du�e litery na ma�e,- gdy uzytkownik poraz drugi wprowadzi ten sam produkt, zapytaj si� go co chce zrobi� :
//a) nadpisac(zamieniamy star� warto�� na now�)
//b) zsumowac(sumujemy obie warto�ci)
//c) pominac(zostawiamy pierwsz� warto��)
//Nast�pnie zapisz dane do pliku lista_zakupow.txt-np :jablko 4
int main()
{
	std::string s;
	std::map<std::string, int>list;
	int n = 0;
	std::string product;
	std::string numberOfProd;
	int number = 0;
	std::cout << "Ile produktow chcesz kupic? ";
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		std::cout << "Podaj nazwe produktu : ";
		std::getline(std::cin, s);

		int x = s.find_last_of(' ');
		for (int k = 0; k < x; ++k)
		{
			s[k] = std::tolower(s[k]);
			product += s[k];
		}
		for (int j = x + 1; j < s.length(); ++j)
		{
			numberOfProd += s[j];
		}
		number = std::atoi(numberOfProd.c_str());


		//auto result = std::find(list.begin(), list.end(), product);
		if (list.find(product) != list.end())
		{
			std::cout << " produkt" << product << " jest juz na liscie - co zrobic?" << std::endl;
			std::cout << "podaj 1 jesli zmienic ilosc" << std::endl;
			std::cout << "podaj 2 jesli zwiekszyc ilosc" << std::endl;
			std::cout << "podaj 3 jesli pominac" << std::endl;


			std::map<std::string, int>::iterator it = list.find(product);
			int choice;
			std::cin >> choice;
			switch (choice)
			{
			case 1:
				it->second = number;
				break;

			case 2:
				it->second = it->second + number;
				break;
			case 3:
				break;
			}
						
		}
		list.insert({ product, number });
		//std::cout << product << " " << number << std::endl;


		std::string fileName("lisat_zakupow.txt");
		std::ofstream file(fileName, std::ios::out | std::ios::trunc);
		if (file.is_open())
		{
			if (file.good())
			{
				for (auto& kv : list)
				{
					file << kv.first << " " << kv.second << "\n";
				}
			}

		}
		else
		{
			std::cout << "nie moge otworzyc pliku";
			return -1;
		}
		file.close();

				
	}
	return 0;
}
