#include "../includes/AAnimal.hpp"

AAnimal::AAnimal() : _type("")
{
	std::cout << "AAnimal created with default constructor!\n";
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal created with custom type!\n";
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal copied!\n";
	_type = other._type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal copy assignment called!\n";
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed!\n";
}

std::string AAnimal::getType() const
{
	return (_type);
}