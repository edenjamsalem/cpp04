#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat")
{
	std::cout << "WrongCat created with default constructor!\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copied!\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copied with assignment operator!\n";
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Meow meow meow!\n";
};
