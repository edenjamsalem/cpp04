#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat created with default constructor!\n";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copied!\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copied with assignment operator!\n";
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow meow meow!\n";
};
