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

int Actor::SetX()
{
	return 0;
}

int Actor::GetY()
{
	return Y;
}

int Actor::SetY()
{
	return 0;
}

int Actor::GetShape()
{
	return Shape;
}

int Actor::SetShape()
{
	return 0;
}
