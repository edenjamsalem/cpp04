#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal
{
	private:
		std::string _type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif
