#include <iostream>
#include<algorithm>
void print()
{
    std::cout << "Hello World!";
}
int Sum(int x, int y)
{
    return x+y;
    
}

int main()
{
    print();
    std::cout << std::endl;
   
    int x = 3;
    int y = 7;
    std::cout << Sum(x, y) << std::endl;

    auto1= []() {std::cout << "Hello World!"; };
    auto2=[](unsigned int x, unsigned int y) {std::cout << (x + y); };

  
}
