

#include <iostream>
#include"SimpleSmartPointer.hpp"
#include"SharedSmartPointer.hpp"
#include<memory>
struct Foo
{
    Foo(int in) : a(in) {}
    void print() const
    {
        std::cout << "a = " << a << '\n';
    }
    int a;
};
void print(SharedSmartPointer<int> ptrFun)
{
    std::cout << "Wartosc pod wskaznikiem: " << *ptrFun << std::endl;
}

void print(SimpleSmartPointer<int> ptrFun)
{
    std::cout << "Wartosc pod wskaznikiem: " << *ptrFun;
}

int main()
{
    SimpleSmartPointer<int> ptr(new int(7));
    //print(ptr);
   //std::cout << "Wartosc pod wskaznikiem: " << *ptr<<std::endl;

    SimpleSmartPointer<Foo> ptrFoo(new Foo(666));
    ptrFoo->print();
    (*ptrFoo).print();

    SharedSmartPointer<int> ptr1(new int(66)); //licznik =1
    SharedSmartPointer<int> ptr2(ptr1); //licznik =2
    print(ptr2); 
    print(ptr1);
   
    ///licznik =3 w funkcji
    //licznik = 2

}//licznik = 1
//licznkik = 0