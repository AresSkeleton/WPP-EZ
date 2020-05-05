#pragma once

#include <string>

class Character
{
	static Character* instance;

	std::string name;
	std::string country = "none";
	std::string hi = "none";
	Character();
public:
	static Character* getInstance();
	void getSettings();
	void sayHi();
	void setCountry(std::string& cntr);
	void setHi(std::string& cntr);
};


