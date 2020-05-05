#pragma once

#include "Character.h"
#include <iostream>

enum class Nationality {
	Polish,
	British,
	German
};

class ForNationality {
public:
	std::string cntr;
	std::string h;
	virtual void setCountry() = 0;
	virtual void setSayHi() = 0;
};


class Pol : public ForNationality {
public:
	virtual void setCountry() {
		cntr = "Poland";
		Character::getInstance()->setCountry(cntr);

	}
	virtual void setSayHi() {
		h = "Czesc";
		Character::getInstance()->setHi(h);
	}
};

class Brit : public ForNationality {
public:
	virtual void setCountry() {
		cntr = "Great Britain";
		Character::getInstance()->setCountry(cntr);
	}
	virtual void setSayHi() {
		h = "Hello";
		Character::getInstance()->setHi(h);
	}
};

class Ger : public ForNationality {
public:
	virtual void setCountry() {
		cntr = "German";
		Character::getInstance()->setCountry(cntr);
	}
	virtual void setSayHi() {
		h = "Hallo";
		Character::getInstance()->setHi(h);
	}
};

class TemplateNationality {
public:
	ForNationality* createNationality(Nationality nat) {
		if (nat == Nationality::Polish) {
			std::cout << "Character is now Polish" << std::endl;
			return new Pol();
			
		}
		else if (nat == Nationality::British) {
			std::cout << "Character is now British" << std::endl;
			return new Brit();
			
		}
		else if (nat == Nationality::German) {
			std::cout << "Character is now German" << std::endl;
			return new Ger();
			
		}
		else { //default or for bad input
			std::cout << "You provided bad input, character become Polish for default" << std::endl;
			std::cout << "You can change it in menu" << std::endl;
			return new Pol();
			
		}
	}

	virtual void setProperties( ForNationality* fNat) {
		fNat->setCountry();
		fNat->setSayHi();
	}
};