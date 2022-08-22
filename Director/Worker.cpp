#include "Worker.hpp"

void Worker::setDirector(Director* director)
{
	_director = director;
}

std::string Worker::getNameW()
{
	return _name;
}

std::string Worker::getSecondName()
{
	return _secondName;
}
