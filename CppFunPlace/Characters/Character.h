#pragma once
#include <string>

class Character
{
private:
    std::string Name;
    float Health;
    float Stamina;
public:
    Character();
    Character(std::string Name, float Health, float Stamina);
    
    void SetName(std::string Name) { this->Name = Name; }
    void SetHealth(float Health) { this->Health = Health; }
    void SetStamina(float Stamina) { this->Stamina = Stamina; } 

    std::string GetName() const { return this->Name; } 
    float GetHealth() const{ return this->Health; }
    float GetStamina() const{ return this->Stamina; }

    void PrintStatus() const;
};