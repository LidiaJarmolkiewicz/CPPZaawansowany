#include <iostream>//Stwórz wektor 100 kolejnych liczb ca³kowitych z zakresu od 1 do 100
#include<algorithm>
#include<vector>
#include<numeric>
void printVec(const int x)
{
    std::cout << x << " ";
}
class LessThan
{
public:
    LessThan(int border) :_border(border) {};
    void operator()(int value) 
    {
        if (value < _border)
        {
            std::cout << value << "_";
        }
    }
    

private:
    int _border;
};
bool biggerThan(const int value)
{
    return value > 4;
}


int main()
{
    std::vector<int> vec(100);
    std::iota(vec.begin(), vec.end(), 1);
    //a-wypisz liczby
    std::for_each(vec.begin(), vec.end(), printVec);
    std::cout <<std::endl;
    //b-wypisz>50
    std::for_each(vec.begin(), vec.end(), LessThan(50));
    std::cout << std::endl;
    //c-ile liczb >4
    int count=std::count_if(vec.begin(), vec.end(), biggerThan);
    std::cout << "Liczb wiekszych od 4 jest " << count << std::endl;
    //d - a,b,c z lambda
    std::for_each(vec.begin(), vec.end(), [](const int x) {std::cout << x << ","; });
    std::cout << std::endl;
    std::for_each(vec.begin(), vec.end(), [](int x) {if (x < 50)std::cout << x << "_"; });
    std::cout << std::endl;
    int countBigger = std::count_if(vec.begin(), vec.end(), [](int x) {return x > 4; });
    std::cout << "Liczb wiekszych od 4 jest " << countBigger << std::endl;
    //e-liczby podzielne przez dzielnik
    int dzielnik =7;
    std::for_each(vec.begin(), vec.end(), [dzielnik](int x) {if (0 == x % dzielnik)std::cout << x<<","; });
    std::cout << std::endl;
    //f - suma liczb parzystych
    int sum = 0;
    std::for_each(vec.begin(), vec.end(), [&sum](int x) {if (0 == x % 2)sum += x; });
    std::cout << "suma liczba parzystych wynosi " << sum<<std::endl;
    
    return 0;
}
