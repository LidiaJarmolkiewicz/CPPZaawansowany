// Za pomoc� std::set sprawdz czy w podanym �a�cuchu znak�w wyst�puj� wszystkie litery alfabetu.


#include <iostream>
#include<set>


bool czyJestAlfabet(std::string tekst)
{
    std::set<char> testAlfa;
    for (size_t i = 0; i < tekst.size(); ++i)
        if (tekst[i] > 64 && tekst[i] < 91)
        {
            char x = tekst[i] += 32;
        }
        else if (tekst[i] > 96 && tekst[i] < 123)
        {
            testAlfa.insert(tekst[i]);
        }
    if (testAlfa.size() == 26)
    {
        return true;
    }
    return false;
}

int main()
{
    std::string tekst1 =" Pokoj konferencji, do ktorego dolaczylas, zostal otwarty w nowym oknie przegladarki - kod vbfhxuq ";
    
   std::cout << "tekst do porownania 1- "<<czyJestAlfabet(tekst1) << std::endl;

   std::string tekst2 = " Witamy w Bazie Wiedzy. W tym miejscu zamieszczone s� wszystkie przydatne informacje dotycz�ce zaj�� oraz niezb�dne materia�y, z kt�rych b�dziesz korzysta� podczas ca�ego kursu.Na pasku u g�ry strony znajdziesz przygotowane dla Ciebie materia�y podzielone na poszczeg�lne kategorie. Powodzenia, Zesp� SDA ";

   std::cout << "tekst do porownania 2- " << czyJestAlfabet(tekst2) << std::endl;

    std::string alfabet = "abcdefghijklmnopqrstuvwxyz";
    
    std::cout <<"alfabet - "<<czyJestAlfabet(alfabet) << std::endl;

   
        return 0;
}
