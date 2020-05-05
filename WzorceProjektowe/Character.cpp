#include "Character.h"

#include <iostream>
#include <string>

Character* Character::instance = NULL;

Character::Character() {
	std::cout << "Creating a character...\n" << std::endl;
}

Character* Character::getInstance() {
	if (Character::instance == NULL) {
		Character::instance = new Character();
		std::cout << "Enter a character name : ";
		std::string nm;
		std::cin >> nm;
		instance->name = nm;
		std::cout << "Character has been created!\n" << std::endl;
	}
	
	return Character::instance;
}

void Character::getSettings()
{
	std::cout << "Name : " << name << std::endl;
	std::cout << "Country : " << country << std::endl;
}

void Character::sayHi() {
	std::cout << hi << std::endl;
}

void Character::setCountry(std::string& cntr) {
	country = cntr;
}

void Character::setHi(std::string& h) {
	hi = h;
}
