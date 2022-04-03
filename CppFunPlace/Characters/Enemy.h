#pragma once
#include "Character.h"

class Enemy : public Character
{
public:
    Enemy() = default;

    Enemy(const std::string& Name, float Health, float Stamina)
        : Character(Name, Health, Stamina)
    {
    }
};