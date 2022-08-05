
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
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
    std::vector<int> vecOfLetters;
    
    while (file.good() && !file.eof())
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


        
        int howManyLetters = 0;
        for (int k = 0; k < str.length(); ++k)
        {
            if ((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z'))
            {
                howManyLetters++;//liczba liter w linii
            }
        }
             
       vecOfLetters.push_back(howManyLetters);//vektor z liczbami liter w kazdej linii

    }
    file.close();
    //1
    auto result = std::max_element(vecOfWords.begin(), vecOfWords.end());//it na max il. s³ów
    int line = std::distance(vecOfWords.begin(), result) + 1;//it na linie

    std::cout << "najwiecej slow jest w linii " << line << std::endl;
    std::cout << "najdluzsze zdanie :" << strings.at(line) << std::endl;
    std::cout << "najwieksza liczba slow " << vecOfWords.at(line) << std::endl;
    std::cout << "wczytano " << strings.size() << " lancuchow" << "\n";
    std::cout << std::endl;
    //2
    auto result2 = std::min_element(vecOfWords.begin(), vecOfWords.end()-1 );//DLACZEGO!!
    int line2 = std::distance(vecOfWords.begin(), result2);

    std::cout << "najmniej slow jest w linii " << line2 << std::endl;
    std::cout << "najkrotsze zdanie :" << strings.at(line2) << std::endl;
    std::cout << "najmniejsza liczba slow " << vecOfWords.at(line2) << std::endl;
    std::cout << "wczytano " << strings.size() << " lancuchow" << "\n";
    std::cout << std::endl;
    //std::for_each(vecOfWords.begin(), vecOfWords.end(), [](int s) {std::cout << s << std::endl; });
    //3
    
    auto result3 = std::max_element(vecOfLetters.begin(), vecOfLetters.end() );
    int line3 = std::distance(vecOfLetters.begin(), result3+1);
    std::cout << "najwiecej liter jest w linii " << line3 << std::endl;
    std::cout << "najdluzsze zdanie :" << strings.at(line3) << std::endl;
    std::cout << "najwieksza liczba liter " << vecOfLetters.at(line3) << std::endl;
    std::cout << "wczytano " << strings.size() << " lancuchow" << "\n";
    std::cout << std::endl;

    //4
    auto result4 = std::min_element(vecOfLetters.begin(), vecOfLetters.end() -1);//DLACZEGO!!
    int line4 = std::distance(vecOfLetters.begin(), result4);
    std::cout << "najmniej liter jest w linii " << line4 << std::endl;
    std::cout << "najkrotsze zdanie :" << strings.at(line4) << std::endl;
    std::cout << "najmniejsza liczba liter " << vecOfLetters.at(line4) << std::endl;
    std::cout << "wczytano " << strings.size() << " lancuchow" << "\n";
    std::cout << std::endl;

    //std::for_each(vecOfLetters.begin(), vecOfLetters.end(), [](int s) {std::cout << s << std::endl; });
    //5
    int sum = std::accumulate(vecOfWords.begin(), vecOfWords.end(), 0);
    std::cout << "liczba slow w calym pliku wynosi =  " << sum << std::endl;
}

