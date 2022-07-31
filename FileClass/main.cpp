#include <iostream>
#include"File.hpp"


int main()
{
	
	int x =0;
	Pracownik worker1("Jan", "Trudny", x, 3000);
	Pracownik worker2("Ala", "Marudna", x, 2000);
	Pracownik worker3("Zofia", "Ciezka", x, 4000);
	Pracownik worker4("Ola", "Chuda", x, 1000);
	Pracownik worker5("Marek", "Prosty", x, 13000);
	Pracownik worker6("Pawel", "Krzywy", x, 3500);
	Pracownik worker7("Piotr", "Koslawy", x, 3200);
	Pracownik worker8("Rudolf", "Czerwononosy", x, 7000);
	Pracownik worker9("Henryk", "Krzywousty", x, 8000);
	Pracownik worker10("Mieszko", "Porabany", x, 10000);
	 x = worker1.getIdNumber();
	 std::cout << worker1.getIdNumber()<<"- " << worker1.getName() << " " << worker1.getSecondName() << " " << worker1.getSalary() << "\n";
	 std::cout << worker2.getIdNumber() << " -" <<worker2.getName() << " " << worker2.getSecondName() << " " << worker2.getSalary() << "\n";
	 std::cout<<worker3.getIdNumber() << "- " << worker3.getName() << " " << worker3.getSecondName() << " " <<  worker3.getSalary() << "\n";
	 std::cout << worker4.getIdNumber() << "- " << worker4.getName() << " " << worker4.getSecondName() << " " << worker4.getSalary() << "\n";
	
	return 0;
	
