
#include <iostream>
#include<stdio.h>

template<typename T>
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

template<typename T>
T* max(T* a, T* b)
{
    return *a > *b ? a : b;
}

template<>
char* max(char* a, char* b)//specjalizacja dla wskaznikow
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

template<typename T>
T max(T* data, const unsigned int n)
{
	T max = data[0];
	for (int i = 1; i < n; ++i)
	{
		if (data[i] > max)
		{
			max = data[i];
		}
    }
	return  max;
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
    int tab[size] = { 1,12,412,23,99,2,55,4,87,6 };
    std::cout << "najwiekszy element tablicy :  " << max(tab,size) << std::endl;


}
