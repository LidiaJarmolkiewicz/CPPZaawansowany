#include <iostream>
#include<algorithm>
void print()
{
    std::cout << "Hello World!";
}
int add(int x, int y)
{
    return x+y;
    
}

int main()
{
    //a
    print();
    std::cout << std::endl;

    auto hello = []() {std::cout << "Hello World!"; };
    hello();
    std::cout << std::endl;
    []() {std::cout << "Hello World XXX"; }();
    std::cout << std::endl;
    
    //b
    std::cout << "sum="<<add(7,9) << std::endl;
        
    auto sum =[](unsigned int x, unsigned int y) {return x+y; };
    std::cout << "suma wynosi=" << sum(5,87) << std::endl;
    
    //wskazniki na funkcje
    auto hellFun = print;//wskaznik na funkce przyuzyciu auto
    hellFun();
    void(*ptrName)() = print;
    ptrName();//wywo³anie funkcji
     int(*addPtrFun)(int,int)=add;
     std::cout << "suma 2 liczb wynosi= " << add(9, 77);
     return 0;

      
}
