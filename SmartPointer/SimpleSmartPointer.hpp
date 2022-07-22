#pragma once
#include "RefCounter.h"
template<typename T>
class SimpleSmartPointer
{

public:
	SimpleSmartPointer(T* data)
		: _data(data)
	{
	}
		
	~SimpleSmartPointer()
	{
			delete _data;
			//_data = nullptr;-nie ma potrzeby
	}
	 T& operator*()//dereference
	{
		 return *_data;
	}
	T* operator->() //indirection
	{
		return _data;
	}


private:
	T* _data;

};

