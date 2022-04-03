#include "Damage.h"

#include "../Characters/Character.h"

void Damage::TakeDamage(Character* character, float HitValue) const
{
    character->SetHealth(character->GetHealth() - HitValue); 
}
