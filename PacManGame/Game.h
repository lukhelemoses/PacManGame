
class Game
{
private:
	int x;
	int y;
	int score;
	

public:
	Game(int=0,int=0,int=0);
	~Game();
	void DrawBoard();
	void DrawFood();
	void Player();
};

