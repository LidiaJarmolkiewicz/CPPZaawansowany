#pragma once
#include<iostream>

template<typename T, unsigned int N>
class StaticTable
{
public:
	T& operator[](const unsigned int i)
	{
		if (i > N)
		{
			throw std::out_of_range("parametr i poza zakresem");
		}
		return tab[i];
	}
	template<typename T2>
	void print(T2 separator)
	{
		for (int i = 0; i < N; ++i)
		{
			std::cout << tab[i] << separator;
		}


	}
private:
	T tab[N];

};


template< unsigned int N>
class StaticTable<bool,N>//specjalizacja
{
public:
	bool& operator[](const unsigned int i)
	{
		return tab[i];
	}
	
	
private:
	bool tab[N];

};



//template<typename T, unsigned int N>
// T& StaticTable::operator[](const unsigned int i)
//{
//	//wyjatek out_of_range gdy i>=N
//	return data[i];
//	}
