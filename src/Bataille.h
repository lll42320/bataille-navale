#ifndef BATAILLE_H_INCLUDED
#define BATAILLE_H_INCLUDED

class Bataille
{
	public:
	
	Bataille();
	~Bataille();
	void play();
	void place();
	void turn();
	int win();
	void print();
	
	private:
	
	int playerTurn;
	int map[10][10];
	int map2[10][10];
};

#endif
