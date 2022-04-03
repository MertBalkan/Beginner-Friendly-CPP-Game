#pragma once

class Character;

class Damage
{
public:
    void TakeDamage(Character* character, float HitValue) const;
};
