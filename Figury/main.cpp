
#include <iostream>
#include"Figura.hpp"
#include"Rectangle.hpp"
#include"Triangle.hpp"

int main()
{
    char wybor;
    std::cout << "wybierz figure : p-prostokat, t-trojkat, domyslny trojkat " << std::endl;
    std::cin >> wybor;

    Figura* figura = nullptr;

    if (wybor == 'p')
    {
        figura = new Rectangle();
    }
    else
    {
        figura = new Triangle();
    }
       
    figura->zmienBoki();
    figura->wyswietlBoki();
    figura->obliczPole();
    figura->obliczObwod();
    figura->wyswietlpoleIObwod();
    delete figura;
    
}
