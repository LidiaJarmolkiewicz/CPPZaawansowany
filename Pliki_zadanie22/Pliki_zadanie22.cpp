 
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
//Wczytaj plik zdania.csv (Podczas pracy z tym zadaniem NIE NADPISUJ tego pliku).
//Wypisz na konsolê :
//-najd³u¿sze zdanie(najwiêcej s³ów)
//- najd³u¿sze zdanie(najwiêcej liter)
//- najkrotsze zdanie(najmniej s³ów)
//- najkrotsze zdanie(najmniej liter)
//- zlicz wszystkie wyst¹pienia wszystkich s³ów w pliku.
int main()
{
    std::ifstream file("zdania.csv");
    if (!file.is_open())
    {
        std::cout << "nie udalo sie otworzyc pliku";
        return 0;
    }
    std::string str;//linia
    std::vector<std::string>strings;
    std::vector<int> vecOfWords;
    while (file.good()&&!file.eof())
    {
        std::getline(file, str);
        strings.push_back(str);

        int howManyWords = 0;
        int sign = 0;
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == ' ')
            {
                sign++;
            }
        }
       howManyWords = sign + 1;//bo s³ów jest o jedno wiecej niz spacji

                
        vecOfWords.push_back(howManyWords);//vektor z liczbami s³ów w kazdej linijce
        
        /*for (int v : vecOfWords)
        {
            std::cout << v << std::endl;
        }*/
        sign = 0;
        howManyWords = 0;
               
    }
    file.close();

    auto result = std::max_element(vecOfWords.begin(), vecOfWords.end());//it na max il. s³ów
    int line = std::distance(vecOfWords.begin(), result) + 1;

    std::cout << "najwiecej slow " << line << std::endl;
   
    std::cout << "wczytano " << strings.size() << " lancuchow" << "\n";

   //
    
    
}

