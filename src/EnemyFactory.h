#ifndef ENEMY_FACTORY_H
#define ENEMY_FACTORY_H

#include "GameObjectFactory.h"
#include "Enemy.h"

class EnemyFactory : public GameObjectFactory
{
public:
	EnemyFactory();
	~EnemyFactory();
	virtual GameObject* createGameObject(int x, int y) override;
};

#endif ENEMY_FACTORY_H