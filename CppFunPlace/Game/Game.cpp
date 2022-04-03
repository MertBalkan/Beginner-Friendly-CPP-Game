#include "Game.h"

#include <iostream>

#include "../Characters/Character.h"
#include "../Characters/Enemy.h"
#include "../Characters/Player.h"
#include "../Damages/Damage.h"


void Game::StartGame()
{
    Character* playerCharacter = new Player("the warrior", 100, 100);
    Character* enemyCharacter = new Enemy("the creature", 100, 100);
    Character* enemyCharacter2 = new Enemy();
    
    Damage* damage = new Damage();
    
    playerCharacter->PrintStatus();

    damage->TakeDamage(playerCharacter, 25);

    playerCharacter->PrintStatus();
}
