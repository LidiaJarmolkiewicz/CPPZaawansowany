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

	std::map<std::string, int>list;
	std::string product;
	
	std::string number;
	std::string str;
	int howMuch = 0;
	bool end = false;
	std::cout << "co chcesz kupi�?, jesli skonczy�es podaj 'end'" << std::endl;
	while(!end)
	{
		
		std::cout << "Podaj nazwe produktu : " << std::endl;
		std::getline(std::cin, product);
		if (product == "end")
		{
			end = true;
			break;
		}
		std::cout << "Podaj ilosc : " << std::endl;
		std::getline(std::cin, number);
		howMuch = stoi(number);

		for (int k = 0; k <product.length(); ++k)
		{
			product[k] = std::tolower(product[k]);
			
		}


		auto it = list.find(product);
		if (it == list.end())//produktu nie ma na liscie
		{
			list.emplace(product,howMuch);//wprowadzam do listy
		}
		else//istnieje na liscie
		{
			std::cout << " produkt" << product << " jest juz na liscie - co zrobic?" << std::endl;
			std::cout << "podaj 1 jesli zmienic ilosc" << std::endl;
			std::cout << "podaj 2 jesli zsumowac ilosc" << std::endl;
			std::cout << "podaj 3 jesli pominac" << std::endl;

			int n = 0;
			std::cin>> n;
			std::cin.ignore(1);
			if (n == 1)
			{
				it->second = howMuch;
			}
			else if (n == 2)
			{
				it->second += howMuch;

			}
			else if (n == 3)
			{

			}

		}

	}
	std::cout << "twoja lista zakupow :" << std::endl;
	//std::for_each(list.begin(), list.end(), [](std::pair<const std::string, int>& item) {std::cout << item.first << " " << item.second << std::endl;   });
	for (auto kv:list)
	{
		std::cout << kv.first << "  " << kv.second<<std::endl;
	}



		//std::string fileName("lisat_zakupow.txt");
		//std::ofstream file(fileName, std::ios::out | std::ios::trunc);
		//if (file.is_open())
		//{
		//	if (file.good())
		//	{
		//		for (auto& kv : list)
		//		{
		//			file << kv.first << " " << kv.second << "\n";
		//		}
		//	}

		//}
		//else
		//{
		//	std::cout << "nie moge otworzyc pliku";
		//	return -1;
		//}
		//file.close();

				

	return 0;
}
