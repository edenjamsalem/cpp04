#include "./Dog.hpp"
#include "./Animal.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog created with default constructor!\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copied!\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copied with assignment operator!\n";
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed\n";
}


void Dog::makeSound() const
{
	std::cout << "Woof woof!\n";
};

