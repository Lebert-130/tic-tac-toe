#include <string>

class CTicTacToe
{
public:
	void StartGame();
private:
	bool players_turn = true; //If it's true, it's the player's turn, if false, it's CPU's turn

	void PlayerTurn();
	void CPUTurn();
	void Redraw();
	void CheckWin();

	bool PlayerWon = false;
	bool CPUWon = false;

	std::string r1c1 = "1";
	bool hasTakenr1c1 = false;

	std::string r1c2 = "2";
	bool hasTakenr1c2 = false;

	std::string r1c3 = "3";
	bool hasTakenr1c3 = false;

	std::string r2c1 = "4";
	bool hasTakenr2c1 = false;

	std::string r2c2 = "5";
	bool hasTakenr2c2 = false;

	std::string r2c3 = "6";
	bool hasTakenr2c3 = false;

	std::string r3c1 = "7";
	bool hasTakenr3c1 = false;

	std::string r3c2 = "8";
	bool hasTakenr3c2 = false;

	std::string r3c3 = "9";
	bool hasTakenr3c3 = false;
};