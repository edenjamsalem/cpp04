#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created with default constructor!\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copied!\n";
	for (int i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copied with assignment operator!\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed!\n";
}
