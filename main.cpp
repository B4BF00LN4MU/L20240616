#include<iostream>
#include<vector>
#include<string>
#include<conio.h>

#include "Actor.h"
#include "Player.h"
#include "Monster.h"
#include "Goal.h"
#include "Wall.h"

using namespace std;

int main()
{
	_getch();
	int X = 0;
	int Y = 0;



	int Map[10][10] =
	{
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,2,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
	};
	vector<Actor*> MyActor;

	//Player MyPlayer2;
	//MyPlayer = &MyPlayer2;
	//Player* MyPlayer3 = new Player;

	//MyActor[0] = MyPlayer3;//변수명이 필요없다

	//int a[10];
	//a[0] = 1;

	//int b = 2;
	//a[0] = b;
	//a[0] = 2;//이거랑 위랑 같은거임 2그냥 넣을거면 b는 이름 없어도 된다

	MyActor.push_back(new Player);
	MyActor.push_back(new Monster);
	MyActor.push_back(new Wall);
	MyActor.push_back(new Goal);

	for (int i = 1; i < 4; ++i)
	{
			if (MyActor[0]->GetX() == MyActor[i]->GetX() && MyActor[0]->GetY() == MyActor[i]->GetY())
			{
				switch (MyActor[i]->GetShape())
				{
				case 1:
					cout << "이따이요"<<endl;
					break;
				case 2:
					cout << "이것은 벽이다 \"끄덕\"" << endl;
					break;
				case 3:
					cout << "도차쿠" << endl;
					break;
				}
			}
	}


		/*if (Map[Y][X] == MyPlayer[Y][X])
		{
			cout << P;
		}


		for(int i=0; i<10;++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				if (Map[i][j] == 0)
				{
					cout << " ";
				}
				else if (Map[i][j] == 1)
				{
					cout << "*";
				}

				else if (Map[i][j] == 2)
				{
					cout << "P";
				}
			}cout << endl;
		}
		system("cls");*/
}