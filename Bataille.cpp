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
	 
