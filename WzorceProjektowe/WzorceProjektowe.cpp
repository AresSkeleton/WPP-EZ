// WzorceProjektowe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Character.h"
#include "NationalityChanger.h"


int main()
{
    short int choose;
    
    std::cout << "---------Witam w programie tworzenia---------" << std::endl;
    bool running = true;
    while (running) {
        std::cout << "1) Create a character" << std::endl;
        std::cout << "2) Add/change nationality" << std::endl;
        std::cout << "3) Show character settings" << std::endl;
        std::cout << "0) Exit from program\n" << std::endl;
        std::cin >> choose;
        switch (choose) {
        case 1:{
            auto character = Character::getInstance();
            break;
        }
        case 2:{
            int nat;
            std::cout << "Enter a nationality of character: 0) Polish, 1) British, 2)German\n" << std::endl;
            std::cin >> nat;
            auto nationality = TemplateNationality().createNationality(Nationality(nat));
            TemplateNationality().setProperties(nationality);
            break;
        }
        case 3: {
            Character::getInstance()->getSettings();
            break;
        }
        case 0:{
            std::cout << "Bye!" << std::endl;
            running = false;
            break;
            }
        }
        
    }

    

}