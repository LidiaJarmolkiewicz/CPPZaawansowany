
#include <iostream>
#include <stdio.h>

template<typename T>//szablon podstawowy
T max(T a,T  b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    //return a>b?a:b;  -operator potrójny
}

template<typename T>//specjalizacja czesciowa
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}

template<>
char* max(char* a, char* b)//specjalizacja pelna
{
    if (strcmp(a, b) > 0)//string compare
    {
        return a;
    }
    else
    {
        return b;
    }
 }

template<typename T>//przeciazanie szablonu-inny szablon niz 1
T max(T* data, const unsigned int n)
{
	T max = data[0];
	for ( unsigned int i = 1; i < n; ++i)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
    }
	return  max;
}

template<typename T1>
void print(T1 z)
{
    std::cout << z << std::endl;
}


template<>
void print(bool x)
{
    if (x)
    {
        std::cout << "true"<< std::endl;
    }
    else
        std::cout <<  " false" << std::endl;
}


template<typename T1,typename T2>
void print(T1 s, T2 p)//szablon print
{
    std::cout << s << " " << p << std::endl;
}

template<typename T1, typename T2>//specjalizacja cxzescioa dla wsk
void print(T1* s, T2* p)
{
    std::cout << *s << " " <<*p << std::endl;
}

template<typename T1>//specjalizacja czesc dla 2 parametru
void print(T1 s, bool p)
{

    std::cout << s << " " << (p?"true":"false") << std::endl;
    
}

template<typename T1>
void print( bool p, T1 s)
{
    //
    std::cout << (p ? "true" : "false") << s <<std::endl;
}

template<typename T1, typename T2, typename T3>
T1 fun(T1 a, T2 b,T3 c)
{  
    return a + b + c;
       
   }

template<typename T1, typename T2>
T1 fun(T1 a, T2 b, bool c)
{
    
    if (c)
    {
        return a+b;
        
    }
    else {
        return a*b;
        
    }
   
}



int main()
{
    int num1 = 10;
    int num2 = 15;
    std::cout <<"wieksza int " <<max(num1, num2)<<std::endl;
    std::cout << "wieksza double " << max(1.555, 1.777) << std::endl;


    int* ptr1 = &num1;
    int* ptr2 = &num2;
    std::cout << "wieksza ptr " <<*max(ptr1, ptr2) << std::endl;

    std::cout << "wiekszy char " << max("aabbcc","ggttyy") << std::endl;

    const unsigned int size = 10;
    double tab[size] = { 1,12.12,412.3,23,99,2.99,55,4,87.6 };
    std::cout << "najwiekszy element tablicy :  " << max(tab,size) << std::endl;
    print(77);
    print(true);
    print(2.22, true);
    print(true, 5);
 
    std::cout << fun(4, 5, 6) << std::endl; 
    std::cout << fun(4, 5,true) << std::endl; 
  
}
