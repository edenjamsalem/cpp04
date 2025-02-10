#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

int main()
{
	const AAnimal *AAnimals[10];

	for (int i = 0; i < 5; i++)
		AAnimals[i] = new Dog();
	
	for (int i = 5; i < 10; i++)
		AAnimals[i] = new Cat();

	for (int i = 0; i < 10; i++)
	{	
		std::cout << AAnimals[i]->getType() << ": ";
		AAnimals[i]->makeSound();
	}

	for (int i = 0; i < 10; i++)
		delete AAnimals[i];
	
	return 0;
}