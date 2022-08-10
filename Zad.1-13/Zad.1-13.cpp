
#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<random>
#include<list>
#include<numeric>

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
//4. Napisz funkcj�, kt�ra usunie spacje z podanego stringa. Zadanie wykonaj na dw�ch kontenrach: vector i list (remove i erase) 
std::vector<char> removeFromString(std::string str4)
{
    std::vector<char>vec;
    for (int i = 0; i < str4.length(); ++i)
    {
        vec.push_back(str4.at(i));
    }
    vec.erase(std::remove(vec.begin(), vec.end(), ' '), vec.end());
    return vec;
}

//5. Napisz funkcj�, kt�ra zliczy wyst�pienia podanej litery w podanym stringu (count).
int countLetter(std::string text, char letter)
{
    int sum = 0;
    sum = std::count(text.begin(), text.end(), letter);
    return sum;
}
//6. Napisz funkcj�, kt�ra sprawdzi czy podany string jest palindromem (reverse i transform lub equal)
bool ifStringIsPalindrom( std::string word1)
{
    //std::string temp=word1;
    //std::reverse(word1.begin(), word1.end());
    //return  (word1 == temp);
       
  return std::equal(word1.begin(), word1.begin()+word1.size()/2, word1.rbegin());
 
  
}
//7. Napisz funkcj�, kt�ra stworzy wektor przechowuj�cy pot�gi kwadratowe z podanego zakresu np od. 3 do 10 (for_each)
std::vector<int> vectorOfSquare(int x,int y)
{
    std::vector<int >vector ;
    for (size_t i=x; i<=y; ++i)
    {
        vector.push_back(i);
    }
    std::for_each(vector.begin(), vector.end(), [](int& z) {z= pow(z, 2); });
    return vector;
}
//8. Zmie� poprzednie zadanie tak aby zwraca�o sum� kwadrat�w (accumulate)
int sumOfSquare(int x, int y)
{
    std::vector<int >vector = vectorOfSquare(x, y);
    int sum = std::accumulate(vector.begin(), vector.end(), 0);
   return sum;

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
    std::cout << std::endl;

    std::cout << "zadanie 4" << std::endl;
    std::string str4 = { "ala ma kota a nie psa" };
    std::cout << str4 << std::endl;
    std::vector<char> vec0;
    vec0 = removeFromString(str4);
    std::cout << "string po usunieciu spacji : ";
    for (auto s : vec0)
    {
        std::cout << s;
    }
    std::cout << std::endl;

    std::cout << "zadanie 5" << std::endl;
    std::string str5 = { "ala ma kota a nie psa" };
    char x = 'a';
    std::cout << "ilosc liter "<<x<<" w stringu <" <<str5<< " > wynosi= "<<countLetter(str5, x) << std::endl;

    std::cout << "zadanie 6" << std::endl;
    std::string str6 =  "kapook" ;
    std::string str7 =  "kajak" ;
    std::cout << str6 << (ifStringIsPalindrom(str6) ? " is" : " is not") << " a palindrom" << std :: endl;
    std::cout << str7 << (ifStringIsPalindrom(str7) ? " is" : " is not") << " a palindrom" << std::endl;

    std::cout << "zadanie 7" << std::endl;
    std::vector<int>vectorSqrt= vectorOfSquare(3, 10);
    for (auto e : vectorSqrt)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    std::cout << "zadanie8" << std::endl;
   std::cout << "suma kwadratow wynosi = " << sumOfSquare(3, 10) << std::endl;
   

}
