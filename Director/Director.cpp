#include "Director.hpp"

void Director::print()
{
	std::cout << "Lista pracownikow-dyrektor "<<getNameD()<<" : " << std::endl;
	int n = 0;
	for (const auto& i : _vecOfWorker)
	{
		n++;
		std::cout<<n<<"-" << i->getNameW()<<" "<<i->getSecondName() << std::endl;
}
}

std::string Director::getNameD()
{
	return _name;
}

void Director::setDirectorForWorkers()
{
	for ( const auto& i : _vecOfWorker)
	{
		i->setDirector(this);
	}
}
