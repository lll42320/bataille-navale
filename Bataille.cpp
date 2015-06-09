#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bataille.h"

using namespace std;

Bataille::Bataille()
{
	srand(time(0));
	
	playerTurn = rand()%2 + 1;
	
	for(int i=0; i<=9; i++)
	{
		for(int j=0; j<=9; j++)
		{
			map[i][j] = 0;
			map2[i][j] = 0;
		}
	}
}

Bataille::~Bataille()
{
	/** void **/
}

void Bataille::play()
{
	place();

	while(win() == 0)
	{
		print();
		turn();
	}
	
	playerTurn = win();
	print();
	
	if(playerTurn == 1)
	{
		cout << "Player 1 wins" << endl;
	}
	else
	{
		cout << "Player 2 wins" << endl;
	}
}

void Bataille::place()
{
	// player 1
	
	// boat 1
	bool boat1 = false;
	while(!boat1)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%6 + 2;
			} while(map[x][y-2]!=0 || map[x][y-1]!=0 || map[x][y]!=0 || map[x][y+1]!=0 || map[x][y+2]!=0);
			
			map[x][y-2] = 1;
			map[x][y-1] = 1;
			map[x][y] = 1;
			map[x][y+1] = 1;
			map[x][y+2] = 1;
			
			boat1 = true;
		}
		else
		{
			do
			{
				x = rand()%6 + 2;
				y = rand()%10;
			} while(map[x-2][y]!=0 || map[x-1][y]!=0 || map[x][y]!=0 || map[x+1][y]!=0 || map[x+2][y]!=0);
			
			map[x-2][y] = 1;
			map[x-1][y] = 1;
			map[x][y] = 1;
			map[x+1][y] = 1;
			map[x+2][y] = 1;
			
			boat1 = true;
		}
	}
	//end boat 1
	
	// boat 2
	bool boat2 = false;
	while(!boat2)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%7 + 2;
			} while(map[x][y-2]!=0 || map[x][y-1]!=0 || map[x][y]!=0 || map[x][y+1]!=0);
			
			map[x][y-2] = 1;
			map[x][y-1] = 1;
			map[x][y] = 1;
			map[x][y+1] = 1;
			
			boat2 = true;
		}
		else
		{
			do
			{
				x = rand()%7 + 2;
				y = rand()%10;
			} while(map[x-2][y]!=0 || map[x-1][y]!=0 || map[x][y]!=0 || map[x+1][y]!=0);
			
			map[x-2][y] = 1;
			map[x-1][y] = 1;
			map[x][y] = 1;
			map[x+1][y] = 1;
			
			boat2 = true;
		}
	}
	//end boat 2
	
	// boat 3
	bool boat3 = false;
	while(!boat3)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%8 + 1;
			} while(map[x][y-1]!=0 || map[x][y]!=0 || map[x][y+1]!=0);
			
			map[x][y-1] = 1;
			map[x][y] = 1;
			map[x][y+1] = 1;
			
			boat3 = true;
		}
		else
		{
			do
			{
				x = rand()%8 + 1;
				y = rand()%10;
			} while(map[x-1][y]!=0 || map[x][y]!=0 || map[x+1][y]!=0);
			
			map[x-1][y] = 1;
			map[x][y] = 1;
			map[x+1][y] = 1;
			
			boat3 = true;
		}
	}
	//end boat 3
	
	// boat 4
	bool boat4 = false;
	while(!boat4)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%9 + 1;
			} while(map[x][y-1]!=0 || map[x][y]!=0);
			
			map[x][y-1] = 1;
			map[x][y] = 1;
			
			boat4 = true;
		}
		else
		{
			do
			{
				x = rand()%9 + 1;
				y = rand()%10;
			} while(map[x-1][y]!=0 || map[x][y]!=0);
			
			map[x-1][y] = 1;
			map[x][y] = 1;
			
			boat4 = true;
		}
	}
	//end boat 4
	
	// player 2
	
	// boat 12
	bool boat12 = false;
	while(!boat12)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%6 + 2;
			} while(map2[x][y-2]!=0 || map2[x][y-1]!=0 || map2[x][y]!=0 || map2[x][y+1]!=0 || map2[x][y+2]!=0);
			
			map2[x][y-2] = 1;
			map2[x][y-1] = 1;
			map2[x][y] = 1;
			map2[x][y+1] = 1;
			map2[x][y+2] = 1;
			
			boat12 = true;
		}
		else
		{
			do
			{
				x = rand()%6 + 2;
				y = rand()%10;
			} while(map2[x-2][y]!=0 || map2[x-1][y]!=0 || map2[x][y]!=0 || map2[x+1][y]!=0 || map2[x+2][y]!=0);
			
			map2[x-2][y] = 1;
			map2[x-1][y] = 1;
			map2[x][y] = 1;
			map2[x+1][y] = 1;
			map2[x+2][y] = 1;
			
			boat12 = true;
		}
	}
	//end boat 12
	
	// boat 22
	bool boat22 = false;
	while(!boat22)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%7 + 2;
			} while(map2[x][y-2]!=0 || map2[x][y-1]!=0 || map2[x][y]!=0 || map2[x][y+1]!=0);
			
			map2[x][y-2] = 1;
			map2[x][y-1] = 1;
			map2[x][y] = 1;
			map2[x][y+1] = 1;
			
			boat22 = true;
		}
		else
		{
			do
			{
				x = rand()%7 + 2;
				y = rand()%10;
			} while(map2[x-2][y]!=0 || map2[x-1][y]!=0 || map2[x][y]!=0 || map2[x+1][y]!=0);
			
			map2[x-2][y] = 1;
			map2[x-1][y] = 1;
			map2[x][y] = 1;
			map2[x+1][y] = 1;
			
			boat22 = true;
		}
	}
	//end boat 22
	
	// boat 32
	bool boat32 = false;
	while(!boat32)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%8 + 1;
			} while(map2[x][y-1]!=0 || map2[x][y]!=0 || map2[x][y+1]!=0);
			
			map2[x][y-1] = 1;
			map2[x][y] = 1;
			map2[x][y+1] = 1;
			
			boat32 = true;
		}
		else
		{
			do
			{
				x = rand()%8 + 1;
				y = rand()%10;
			} while(map2[x-1][y]!=0 || map2[x][y]!=0 || map2[x+1][y]!=0);
			
			map2[x-1][y] = 1;
			map2[x][y] = 1;
			map2[x+1][y] = 1;
			
			boat32 = true;
		}
	}
	//end boat 32
	
	// boat 42
	bool boat42 = false;
	while(!boat42)
	{
		int direction = rand()%2 + 1;
		int x(11), y(11);
		if(direction == 1)
		{
			do
			{
				x = rand()%10;
				y = rand()%9 + 1;
			} while(map2[x][y-1]!=0 || map2[x][y]!=0);
			
			map2[x][y-1] = 1;
			map2[x][y] = 1;
			
			boat42 = true;
		}
		else
		{
			do
			{
				x = rand()%9 + 1;
				y = rand()%10;
			} while(map2[x-1][y]!=0 || map2[x][y]!=0);
			
			map2[x-1][y] = 1;
			map2[x][y] = 1;
			
			boat42 = true;
		}
	}
	//end boat 42
}

void Bataille::turn()
{
	cout << "You are the player " << playerTurn << endl;
	
	int x=11 ;
	while( x<1||x>10 )
	{	
		cout << "Sur quelle ligne voulez vous jouer? [1;10]" << endl;
		cin >> x;
	}
	
	int y=11;
	while( y<1||y>10 )
	{
		cout << "Sur quelle colonne voulez vous jouer? [1;10]" << endl ;
		cin >> y;
	}
	if(playerTurn == 1)
	{
		if (map2[x-1][y-1]==0)
		{
			map2[x-1][y-1]=2;
		}
		if (map2[x-1][y-1]==1)
		{
			map2[x-1][y-1]=3;
		}
		
		playerTurn = 2;
	}
	else
	{
		if (map[x-1][y-1]==0)
		{
			map[x-1][y-1]=2;
		}
		if (map[x-1][y-1]==1)
		{
			map[x-1][y-1]=3;
		}
		
		playerTurn = 1;
	}
}

int Bataille::win()
{
	bool w1=true, w2=true;
	
	for (int i=0; i<=9; i++)
	{
		for (int j=0; j<=9; j++)
		{
			if (map [i][j]==1)
			{
				w1 = false;
			}
		}
	}
	
	for (int i=0; i<=9; i++)
	{
		for (int j=0; j<=9; j++)
		{
			if (map2 [i][j]==1)
			{
				w2 = false;
			}
		}
	}
	
	if(w1)
	{
		return 1;
	}
	else if(w2)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

void Bataille::print()
{
	if(playerTurn == 1)
	{
		for(int i=0; i<=9; i++)
		{		
			for(int j=0; j<=9; j++)
			{
				if(map2[i][j] == 0)
					cout << '.';
				else if(map2[i][j] == 1)
					cout << '.';
				else if(map2[i][j] == 2)
					cout << '/';
				else if(map2[i][j] == 3)
					cout << '@';
			}
			cout << endl;
		}
	}
	else
	{
		for(int i=0; i<=9; i++)
		{		
			for(int j=0; j<=9; j++)
			{
				if(map[i][j] == 0)
					cout << '.';
				else if(map[i][j] == 1)
					cout << '.';
				else if(map[i][j] == 2)
					cout << '/';
				else if(map[i][j] == 3)
					cout << '@';
			}
			cout << endl;
		}
	}
}
