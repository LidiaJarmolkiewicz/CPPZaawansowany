// Za pomoc¹ std::set sprawdz czy w podanym ³añcuchu znaków wystêpuj¹ wszystkie litery alfabetu.


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

   std::string tekst2 = " Witamy w Bazie Wiedzy. W tym miejscu zamieszczone s¹ wszystkie przydatne informacje dotycz¹ce zajêæ oraz niezbêdne materia³y, z których bêdziesz korzystaæ podczas ca³ego kursu.Na pasku u góry strony znajdziesz przygotowane dla Ciebie materia³y podzielone na poszczególne kategorie. Powodzenia, Zespó³ SDA ";

   std::cout << "tekst do porownania 2- " << czyJestAlfabet(tekst2) << std::endl;

    std::string alfabet = "abcdefghijklmnopqrstuvwxyz";
    
    std::cout <<"alfabet - "<<czyJestAlfabet(alfabet) << std::endl;

   
        return 0;
}
