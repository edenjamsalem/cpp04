#include "../includes/AAnimal.hpp"
#include "../includes/Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog created with default constructor!\n";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	std::cout << "Dog copied!\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copied with assignment operator!\n";
	if (this != &other)
		AAnimal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof woof!\n";
};

