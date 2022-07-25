// Korzystaj¹c z std::map napisz funkcjê która zliczy iloœæ wyst¹pieñ danej litery w podanym stringu a nastêpnie wypisz to na konsolê np "Ala ma kota"

#include <iostream>
#include<map>
#include<string>


void howMAny(std::map<char,int>& map,std::string & napis)
{
    
    for (size_t i = 0; i < napis.size(); ++i)
    {
        if (napis[i] > 64 && napis[i] < 91)
        {
            napis[i] += 32;
        }
        if (napis[i] > 96 && napis[i] < 123)
        {

            map[napis[i]]++;

        }
    }

    for (auto& parametr : map)
    {
        std::cout << parametr.first << " - " << parametr.second << std::endl;
    }
}
int main()
{
	std::map<char, int>map;
	std::string napis1 = "Ala ma kota";
	std::cout << napis1 << std::endl;
	howMAny(map, napis1);

    map.clear();
    std::string napis2 = "Kot Filemon ma pchly";
    std::cout << napis2 << std::endl;
    howMAny(map, napis2);
	return 0;

}

