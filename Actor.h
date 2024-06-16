#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Actor
{
public:
	Actor();
	virtual ~Actor();

	int GetX();
	int GetY();
protected:
	int X;
	int Y;
	char Shape;
};