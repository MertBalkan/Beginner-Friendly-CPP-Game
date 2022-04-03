#pragma once
#include "Character.h"

class Player : public Character
{
public:
    Player() = default;

    Player(const std::string& Name, float Health, float Stamina)
        : Character(Name, Health, Stamina)
    {
    }
};