#ifndef GAME_OBJECT_FACTORY_H
#define GAME_OBJECT_FACTORY_H

#include "GameObject.h"

class GameObjectFactory
{
public:
	GameObjectFactory();
	virtual ~GameObjectFactory();
	virtual GameObject* createGameObject(int x, int y) = 0;
};

#endif GAME_OBJECT_FACTORY_H