#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal created with default constructor!\n";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal created with custom type!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copied!\n";
	_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy assignment called!\n";
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed!\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a sound!\n";
};

std::string WrongAnimal::getType() const
{
	return (_type);
}