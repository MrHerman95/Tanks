#ifndef PROJECTILE_FACTORY_H
#define PROJECTILE_FACTORY_H

#include "GameObjectFactory.h"
#include "Projectile.h"

class ProjectileFactory : public GameObjectFactory
{
public:
	ProjectileFactory();
	~ProjectileFactory();
	virtual GameObject* createGameObject(int x, int y) override;
};

#endif PROJECTILE_FACTORY_H