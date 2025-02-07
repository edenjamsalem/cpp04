#include "./Cat.hpp"
#include "./Animal.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat created with default constructor!\n";
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
	std::cout << "Cat destroyed\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow meow meow!\n";
};
