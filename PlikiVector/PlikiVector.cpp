#include<algorithm>
#include<vector>
#include<random>
#include <iostream>
#include <fstream>
#include<string>
#include<iomanip>

int main()
{
    std::random_device rd;
    std::default_random_engine Engine(rd());
    std::uniform_int_distribution<int>Distr(-1000000, 1000000);


    std::string fileStream("D:\\SDA\\CPPZaawansowany\\PlikiVector\\plikZZadania.txt");
     std::ofstream fileToWrite(fileStream, std::ios::out | std::ios::trunc);//zapisanie do pliku
     if (fileToWrite.is_open())
     {
         for (int i = 0; i < 1000000; ++i)
         {
             if (fileToWrite.good())
             {
                 fileToWrite << Distr(Engine)<<"\n";
             }
         }
     }
     fileToWrite.close();
        
    
     int temp = 0;
	 std::string str;
	 std::ifstream fileToRead(fileStream);
	 std::vector<int> vec;
	 if (fileToRead.is_open())
	 {

		 while (fileToRead.good() && !fileToRead.eof())
		 {
			 fileToRead >> temp;  //wpisanie do zmiennej tymczasowej
             vec.push_back(temp);
		 }
	 }
       fileToRead.close();
         

     auto it = vec.begin();
     for (int i = 1; i <= 100; ++i)
     {
         std::advance(it, 1);
         std::cout<<"["<<i << "]_" << *it << std::endl;
     }
     return 0;
	  
	 
   
    //otworzyc plik FileNew za pomoc¹ ifstream 
    //odczytac w petli dane       za pomoca operatora >> do zmiennej tymczasowej i wo³amy pushback
    //wypisaæ 100 pierwszych liczb i sprawdziæ czy sa w tej samej kolejnosci

     
}
