#include "../includes/Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal created with default constructor!\n";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal created with custom type!\n";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal copied!\n";
	_type = other._type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment called!\n";
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed!\n";
}

void Animal::makeSound() const {};

std::string Animal::getType() const
{
	return (_type);
}