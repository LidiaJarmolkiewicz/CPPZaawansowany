
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<random>
//1. Napisz funkcj�, kt�ra przyjmuje stringa, nast�pnie uszereguje wszystkie litery w porz�dku alfabetycznym i zwraca tak odwr�conego stringa (sort).
std::string sortAlfabet(std::string str)
{
    std::sort(str.begin(), str.end());
    return str;
}
//2. Napisz analogiczn� funkcj�, kt�ra zwr�ci przemieszanego stringa (random_shuffle). Zwr�� uwag� czy za ka�dym uruchomieniem, faktycznie string jest przemieszany innaczej
std::string randomSortAlfabet(std::string str)
{
    std::random_device rd;
    std::default_random_engine eng(rd());
    //std::random_shuffle(str.begin(), str.end());
    std::shuffle(str.begin(), str.end(), eng);
    return str;
}
//3. Napisz funkcj�, kt�ra przyjmuje dwa stringi a nast�pnie zwraca vector ich wsp�lnych liter (powtarzajcych sie w obu stringach).
std::vector<char> twoStrings(std::string str2, std::string str3)
{
    std::vector<char>vec;
    for (int i = 0; i < str2.length(); ++i)
    {
        for (int k = 0; k < str3.length(); ++k)
        {
            if (str2.at(i) == str3.at(k))
            {
                vec.push_back(str2.at(i));
            }
        }
    }

    return vec;
}

int main()
{
    std::cout << "zadanie 1" << std::endl;
    std::string str = { "niezapominajka" };
    std::cout << str << std::endl;
    std::cout << sortAlfabet(str) << std::endl;

    std::cout << "zadanie 2" << std::endl;
    std::string str1 = { "niezapominajka" };
    std::cout << str1 << std::endl;
    std::cout << randomSortAlfabet(str1) << std::endl;

    std::cout << "zadanie 3" << std::endl;
    std::string str2 = { "motylek" };
    std::string str3 = { "pszczola" };
    std::cout << str2 << " " << str3 << std::endl;
    std::vector<char> vecOfLetters;
    vecOfLetters = twoStrings(str2, str3);
    std::cout << "wspolne litery : ";
    for (auto s : vecOfLetters)
    {
        std::cout << s;
    }








}
