#include "Actor.h"

Actor::Actor()
{
	X = 0;
	Y = 0;
	Shape = ' ';
}

Actor::~Actor()
{

}

int Actor::GetX()
{
	return X;
}

int Actor::GetY()
{
	return Y;
}
