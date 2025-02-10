#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"

Cat::Cat(): AAnimal("Cat")
{
	std::cout << "Cat created with default constructor!\n";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	std::cout << "Cat copied!\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copied with assignment operator!\n";
	if (this != &other)
		AAnimal::operator=(other);
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
