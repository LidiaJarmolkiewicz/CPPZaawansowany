
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
    std::string temp=word1;
    std::reverse(word1.begin(), word1.end());
    return  (word1 == temp);
       
  //return std::equal(word1.begin(), word1.begin()+word1.size()/2, word1.rbegin());
 
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
//9.Napisz funkcj�, kt�ra stworzy wektor przechowuj�cy liczby od 1 do n. Nast�pnie utw�rz dwa wektory.
//Jeden, kt�rzy b�dzie przechowywa� tylko wielokrotno�ci 2, a drugi tylko wielokrotno�ci 3.Nast�pnie zwr�� vector przechowuj�cy tylko wielokrotno�ci 2 i 3. (remove_copy_if, set_intersection)

bool multiBy2(int x)
{
    return (x % 2) != 0;
}
bool multiBy3(int x)
{
    return (x % 3) != 0;
}

std::vector<int> numbersFrom1ToN(int n)
{
    std::vector<int> vecN;
    for (size_t i = 1; i <= n; ++i)
    {
        vecN.push_back(i);
    }
    std::vector<int>vector2=vecN;
    vector2.erase(std::remove_copy_if(vecN.begin(), vecN.end(), vector2.begin(), multiBy2),vector2.end());
    std::vector<int> vector3 = vecN;
    vector3.erase(std::remove_copy_if(vecN.begin(), vecN.end(), vector3.begin(), multiBy3), vector3.end());

    std::vector<int> vector4;
    std::set_intersection(vector2.begin(), vector2.end(), vector3.begin(), vector3.end(), std::back_inserter(vector4));

    return vector4;
}
 //10. Napisz funkcj�, kt�ra zwr�ci wszystkie mo�liwe permutacje 3 liczb (next_permutation)
std::vector<int> allPermutation(int a, int b, int c)
{
    std::vector<int>vecP;
    vecP.push_back(a);
    vecP.push_back(b);
    vecP.push_back(c);
    std::sort(vecP.begin(), vecP.end());
    do {

        for (auto i : vecP)
        {
            std::cout  << i ;
        }
        std::cout << std::endl;
    } 
    while (std::next_permutation(vecP.begin(), vecP.end()));
    
    return vecP;
}
//11. Napisz funkcj�, kt�ra przyjmuje wektor cyfr, a zwraca liczb� permutacji tych cyfr, kt�re s� wielokrotno�ci� 11.
bool multiBy11(int x)
{
    return x % 11 != 0;
}
int numberOfPermutation11()
{
    std::vector<int>vect ;
    vect.push_back(11);
    vect.push_back(44);
    vect.push_back(33);

    std::vector<int>vectorNew=vect;
    vectorNew.erase(std::remove_copy_if(vect.begin(), vect.end(), vectorNew.begin(), multiBy11), vectorNew.end());
    int number = 0;
    std::sort(vectorNew.begin(), vectorNew.end());
    do {

        for (const auto& i: vectorNew)
        {
            std::cout << i;
           
        }
        number++;
        std::cout << std::endl;
        
    } while (std::next_permutation(vectorNew.begin(), vectorNew.end()));
   
    
    return number;
}
//12. Napisz funkcj�, kt�ra zamieni podanego int na vector jej cyfr. 
std::vector<int> changeIntToNumber(int x)
{
    std::vector<int> vectInt;
    while (x != 0)
    {
        vectInt.push_back(x%10);
        x /= 10;
    }
    std::reverse(vectInt.begin(), vectInt.end());
    return vectInt;
}
//13. Napisz funkcj�, kt�ra znajdzie pierwsz� wi�ksz� liczb�, kt�ra jest palindromem od zadanej liczby.
 int palindromNext(int x)
{
     
     //std::vector<int> vecPalToNumber=changeIntToNumber(x);
  
     //std::reverse(vecPalToNumber.begin(), vecPalToNumber.end());

     int temp = x;
    int reverse = 0;
    while (x != 0)
    {
        reverse = (reverse * 10) + x % 10;
        x=x / 10;//odwr�cona liczba

    }
    if (temp==reverse)
        return 1;
    else
        return 0;
   
    

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
    std::cout << "ilosc liter " << x << " w stringu <" << str5 << " > wynosi= " << countLetter(str5, x) << std::endl;

    std::cout << "zadanie 6" << std::endl;
    std::string str6 = "kapook";
    std::string str7 = "kajak";
    std::cout << str6 << (ifStringIsPalindrom(str6) ? " is" : " is not") << " a palindrom" << std::endl;
    std::cout << str7 << (ifStringIsPalindrom(str7) ? " is" : " is not") << " a palindrom" << std::endl;

    std::cout << "zadanie 7" << std::endl;
    std::vector<int>vectorSqrt = vectorOfSquare(3, 10);
    for (auto e : vectorSqrt)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    std::cout << "zadanie8" << std::endl;
    std::cout << "suma kwadratow wynosi = " << sumOfSquare(3, 10) << std::endl;

    std::cout << "zadanie 9" << std::endl;
    std::cout << "wektor wielokrotnosci liczb 2 i 3 = ";
    std::vector<int> vector2 = numbersFrom1ToN(25);
    for (auto i : vector2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "zadanie 10" << std::endl;
	int a = 1;
	int b = 2;
	int c = 3;
    std::cout << "permutacje liczb" << a << "," << b << "," << c << " to "<<std::endl;
    allPermutation(a, b, c);
	
    std::cout << std::endl;
    std::cout << "zadanie 11" << std::endl;
    std::cout << "liczba permutacji wynosi dla liczb, ktore sa wielokr. 11 = "<<numberOfPermutation11();
   
    std::cout << std::endl;
    std::cout << "zadanie 12" << std::endl;
    int p = 7589;
    std::cout << "zmieniony int "<<p<<" na vektor : ";
    
    std::vector<int>v= changeIntToNumber(p);

    for ( auto i : v)
    {
        std::cout << i ;
    }

    std::cout << std::endl;
    //13
    std::cout << "zadanie 13" << std::endl;
    int n = 7589;
    std::cout << "Palindrom  liczby" << n;
    while (!palindromNext(n))
    {
        n = n + 1;
   }
    
     std::cout<<" wynosi: "<< n;
    
    std::cout << std::endl;
}
