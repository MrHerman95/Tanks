#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class GameObject
{
public:
	enum Direction {
		UP = 1, DOWN, LEFT, RIGHT
	};

	GameObject();
	virtual ~GameObject() = 0;

	int getPositionX();
	int getPositionY();

	void setDisplayChar(char ch);
	char getDisplayChar();

protected:
	int positionX_;
	int positionY_;
	char displayChar_;
};

#endif GAME_OBJECT_H