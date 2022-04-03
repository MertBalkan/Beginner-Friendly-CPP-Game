#include "Character.h"
#include <iostream>

const std::string NO_NAME = "NO_NAME";

Character::Character()
{
    this->Name = NO_NAME;
    Health = 0.0f;
    Stamina = 0.0f;
}

Character::Character(std::string Name, float Health, float Stamina)
{
    this->Name = Name;
    this->Health = Health;
    this->Stamina = Stamina;
}

void Character::PrintStatus() const
{
    std::cout << "This is " << this->Name << std::endl;
    std::cout << "My Health is " << this->Health << std::endl;
    std::cout << "My Stamina is " << this->Stamina << std::endl;


}