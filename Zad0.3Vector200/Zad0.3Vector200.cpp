#include <iostream>
#include<algorithm>
#include<vector>
#include<numeric>


int main()
{
    std::vector<int>vec(201);
    std::iota(vec.begin(), vec.end(), -100);
    //a-czy wszystkie dodatnie
    if (std::all_of(vec.begin(), vec.end(), [](int x) {return x > 0; }))
    {
        std::cout << "wszystkie liczby sa dodatnie";
    }
    else
    {
        std::cout << "Nie wszystkie liczby sa dodatnie";
    }
    std::cout << std::endl;
    //b-czy istnieje liczba podzielna przez 3,5,30
    if (std::any_of(vec.begin(), vec.end(), [](int x) {if (0 == x % 3 && 0 == x % 5 && 0 == x % 30)return true; }))
    {
        std::cout << "istnieje liczba podzielna przez 3,5,30";
    }
    else
    {
        std::cout << "Nie istnieje liczba podzielna przez 3,5,30";
    };
    std::cout << std::endl;
    //b.1 jakie to liczby
    std::cout << "liczby podzielne przez 3,5,30 to: ";
    std::for_each(vec.begin(), vec.end(), [](int x) {if (0 == x % 3 && 0 == x % 5 && 0 == x % 30)std::cout << x << ","; });
    std::cout << std::endl;
    //C-usuñ zero
    vec.erase(std::remove(vec.begin(), vec.end(), 0), vec.end());
    //d czy nie zawiera 0
    if (std::any_of(vec.begin(), vec.end(), [](const int value)->bool {if (value != 0)return true; }))
    {
        std::cout << "vektor NIE zawiera elementu o wartosci 0" << std::endl;

    }
    else
    {
        std::cout << "vektor zawiera element o wartosci 0" << std::endl;
    }
    //e-czy kontener posortowany
    if (std::any_of(vec.begin(), vec.end(), [](int x)->bool {if (x < (x + 1)) return true; }))
    {
        std::cout << "vektor  jest posortowany" << std::endl;
    }
    else
    {
        std::cout << "vektor nie jest posortowany" << std::endl;
    }
    //f-skopiuj do vec2liczby z vec >90 i <-90
    std::vector<int>vec2 = {};

    auto copyConditions = [](int x)
    {
        return ((x > 90) || (x < -90));
    };

    std::copy_if(vec.begin(), vec.end(), back_inserter(vec2), copyConditions);
    std::cout << "vec2:";
    for (auto it = vec2.begin(); it != vec2.end(); ++it)
    {
        std::cout << *it << ",";
    }
    std::cout << std::endl;

    //g-skopiuj do innego vec 10kolejnych liczb od 78
    std::vector<int>vec3 = {};
    auto copyConditions78 = [](int x)
    {
        return ((x>=78)&&(x<=87));
    };

    std::copy_if(vec.begin(), vec.end(), back_inserter(vec3), copyConditions78);
    std::cout << "vec3: ";
    for (auto it = vec3.begin(); it != vec3.end(); ++it)
    {
        std::cout << *it << ",";
    }
    std::cout << std::endl;
    std::vector<int>vec4 = {};
    auto it = std::find(vec.cbegin(), vec.cend(), 78);
    std::copy(it, (it+10), back_inserter(vec4));
    std::cout << "vec4: ";
    for (auto it = vec4.begin(); it != vec4.end(); ++it)
    {
        std::cout << *it << ",";
    }
}
