#ifndef WALL_FACTORY_H
#define WALL_FACTORY_H

#include "GameObjectFactory.h"
#include "Wall.h"

class WallFactory : public GameObjectFactory
{
public:
	WallFactory();
	~WallFactory();
	virtual GameObject* createGameObject(int x, int y) override;
};

#endif WALL_FACTORY_H