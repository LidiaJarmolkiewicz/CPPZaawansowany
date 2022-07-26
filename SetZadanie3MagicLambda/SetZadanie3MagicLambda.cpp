
#include <iostream>
#include<set>
#include<algorithm>

bool containsAllLetters3(const std::string& text)
{
    std::set<char> alphabetChecker;

    auto magicLambda = [&alphabetChecker](unsigned char c)
    {
        if (!(c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
            return 0;
               
            
        }
        else  if (c >= 97 && c <= 122)
        {
            std::tolower(c);
        }
        alphabetChecker.insert(c);
    };

    std::for_each(text.begin(), text.end(), magicLambda);

    return alphabetChecker.size() == 26;
}

int main()
{
    std::string tekst1 = " Pokoj konferencji, do ktorego dolaczylas, zostal otwarty w nowym oknie przegladarki - kod vbfhxuq ";

    std::cout << "tekst1 do porownania   " << containsAllLetters3(tekst1) << std::endl;

    std::string tekst2 = " Witamy w Bazie Wiedzy. W tym miejscu zamieszczone s¹ wszystkie przydatne informacje dotycz¹ce zajêæ oraz niezbêdne materia³y, z których bêdziesz korzystaæ podczas ca³ego kursu.Na pasku u góry strony znajdziesz przygotowane dla Ciebie materia³y podzielone na poszczególne kategorie. Powodzenia, Zespó³ SDA ";

    std::cout << "tekst2 do porownania  " << containsAllLetters3(tekst2) << std::endl;

    std::string alfabet = "abcdefghijklmnopqrstuvwxyz";
    std::cout << "alfabet  " << containsAllLetters3(alfabet) << std::endl;


    std::string alfaTest = " .. -defghijkwxyz";
    std::cout << "alfa  " << containsAllLetters3(alfaTest) << std::endl;
    return 0;

}