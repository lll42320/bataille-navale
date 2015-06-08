#include <iostream>

using namespace std;

void Bataille::print()
{
	for (int i=0; i<=9; i++)
	{		
		for (int j=0; j<=9; i++)
		{
			if( map[i][j]==0)
				cout << '.' ;
			else if( map[i][j]==1)
				cout << '#' ;
			else if( map [i][j]==2)
				cout << ',' ;
			else if( map [i][j]==3)
				cout << '@' ;

		}
		cout << endl ;
	}
}

void Bataille::play()
{
	while(!win())
	{
		print();
		turn();
	}
	cout << "You win" << endl;
}	 

void Bataille::turn()
{
	int X=11 ;
	while( x<1||x>10 )
	{	
		cout << "Sur quelle ligne voulez vous jouer? [1;10]" << endl;
		cin >> x;
	}
	
	While( y<1||y>10 )
	{
		cout << "Sur quelle colonne voulez vous jouer? [1;10]" << endl ;
		cin >> y;
	}

	if (map [x][y]==0)
	{
		map [x][y]=2
	}
	if (map [x][y]==1)
	{
		map [x][y]=3
	}
}

