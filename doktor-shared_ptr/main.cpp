#include <iostream>
#include"doc.hpp"



int main()
{
	Pacjent pat("Ola");
	Doktor dok("Jan");
	dok.setPacjent(std::make_shared<Pacjent> ("Ala"));
	pat.setDoktor(std::make_shared<Doktor>("Jacek"));
	dok.wizyta();
	pat.odpowiedzP();
}
