#include <iostream>
#include <cstdlib>
#include "tictactoe.h"

void CTicTacToe::StartGame()
{
	system("CLS");
	std::cout << " " << r1c1 << " | " << r1c2 << " | " << r1c3 << " | " << std::endl;
	std::cout << " " << r2c1 << " | " << r2c2 << " | " << r2c3 << " | " << std::endl;
	std::cout << " " << r3c1 << " | " << r3c2 << " | " << r3c3 << " | " << std::endl;
	std::cout << std::endl;
	PlayerTurn();
}

void CTicTacToe::PlayerTurn() 
{
	int slot;

	std::cout << "Select a Slot: ";
	std::cin >> slot;

	if (slot == 1) 
	{
		if (hasTakenr1c1 == false) 
		{
			r1c1 = "X";
			players_turn = false;
			hasTakenr1c1 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}

	if (slot == 2)
	{
		if (hasTakenr1c2 == false) 
		{
			r1c2 = "X";
			players_turn = false;
			hasTakenr1c2 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}

	if (slot == 3)
	{
		if (hasTakenr1c3 == false) 
		{
			r1c3 = "X";
			players_turn = false;
			hasTakenr1c3 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}

	if (slot == 4)
	{
		if (hasTakenr2c1 == false)
		{
			r2c1 = "X";
			players_turn = false;
			hasTakenr2c1 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}

	if (slot == 5)
	{
		if (hasTakenr2c2 == false)
		{
			r2c2 = "X";
			players_turn = false;
			hasTakenr2c2 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}

	if (slot == 6)
	{
		if (hasTakenr2c3 == false)
		{
			r2c3 = "X";
			players_turn = false;
			hasTakenr2c3 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}

	if (slot == 7)
	{
		if (hasTakenr3c1 == false)
		{
			r3c1 = "X";
			players_turn = false;
			hasTakenr3c1 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
		
	}

	if (slot == 8)
	{
		if (hasTakenr3c2 == false) 
		{
			r3c2 = "X";
			players_turn = false;
			hasTakenr3c2 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
		
	}

	if (slot == 9)
	{
		if (hasTakenr3c3 == false)
		{
			r3c3 = "X";
			players_turn = false;
			hasTakenr3c3 = true;

			CheckWin();
			Redraw();
		}
		else
		{
			Redraw();
		}
	}
}

void CTicTacToe::CPUTurn()
{
	int slot = rand() % 100;

	if (slot < 10 && hasTakenr1c1 == false) 
	{
		r1c1 = "O";
		hasTakenr1c1 = true;
		CheckWin();
	}

	if (slot > 10 && slot < 20 && hasTakenr1c2 == false)
	{
		r1c2 = "O";
		hasTakenr1c2 = true;
		CheckWin();
	}

	if (slot > 20 && slot < 20 && hasTakenr1c3 == false)
	{
		r1c3 = "O";
		hasTakenr1c3 = true;
		CheckWin();
	}

	if (slot > 30 && slot < 40 && hasTakenr2c1 == false)
	{
		r2c1 = "O";
		hasTakenr2c1 = true;
		CheckWin();
	}

	if (slot > 40 && slot < 50 && hasTakenr2c2 == false)
	{
		r2c2 = "O";
		hasTakenr2c2 = true;
		CheckWin();
	}

	if (slot > 50 && slot < 60 && hasTakenr2c1 == false)
	{
		r2c3 = "O";
		hasTakenr2c1 = true;
		CheckWin();
	}

	if (slot > 60 && slot < 70 && hasTakenr3c1 == false)
	{
		r3c1 = "O";
		hasTakenr3c1 = true;
		CheckWin();
	}

	if (slot > 70 && slot < 80 && hasTakenr3c2 == false)
	{
		r3c2 = "O";
		hasTakenr3c2 = true;
		CheckWin();
	}

	if (slot > 80 && hasTakenr3c3 == false)
	{
		r3c3 = "O";
		hasTakenr3c3 = true;
		CheckWin();
	}

	players_turn = true;
	Redraw();
}

void CTicTacToe::Redraw()
{
	system("CLS");
	std::cout << " " << r1c1 << " | " << r1c2 << " | " << r1c3 << " | " << std::endl;
	std::cout << " " << r2c1 << " | " << r2c2 << " | " << r2c3 << " | " << std::endl;
	std::cout << " " << r3c1 << " | " << r3c2 << " | " << r3c3 << " | " << std::endl;
	std::cout << std::endl;

	if (players_turn == true) 
	{
		PlayerTurn();
	}
	else
	{
		CPUTurn();
	}
}

void CTicTacToe::CheckWin()
{
	//Ways the player can win
	if (r1c1 == "X" && r2c1 == "X" && r3c1 == "X")
	{
		PlayerWon = true;
	}

	if (r1c2 == "X" && r2c2 == "X" && r3c2 == "X")
	{
		PlayerWon = true;
	}

	if (r1c3 == "X" && r2c3 == "X" && r3c3 == "X")
	{
		PlayerWon = true;
	}

	if (r1c1 == "X" && r1c2 == "X" && r1c3 == "X")
	{
		PlayerWon = true;
	}

	if (r2c1 == "X" && r2c2 == "X" && r2c3 == "X")
	{
		PlayerWon = true;
	}

	if (r3c1 == "X" && r3c2 == "X" && r3c3 == "X")
	{
		PlayerWon = true;
	}

	if (r1c1 == "X" && r2c2 == "X" && r3c3 == "X")
	{
		PlayerWon = true;
	}

	if (r1c3 == "X" && r2c2 == "X" && r3c1 == "X")
	{
		PlayerWon = true;
	}
	//

	//Ways the CPU can win
	if (r1c1 == "O" && r2c1 == "O" && r3c1 == "O")
	{
		CPUWon = true;
	}

	if (r1c2 == "O" && r2c2 == "O" && r3c2 == "O")
	{
		CPUWon = true;
	}

	if (r1c3 == "O" && r2c3 == "O" && r3c3 == "O")
	{
		CPUWon = true;
	}

	if (r1c1 == "O" && r1c2 == "O" && r1c3 == "O")
	{
		CPUWon = true;
	}

	if (r2c1 == "O" && r2c2 == "O" && r2c3 == "O")
	{
		CPUWon = true;
	}

	if (r3c1 == "O" && r3c2 == "O" && r3c3 == "O")
	{
		CPUWon = true;
	}

	if (r1c1 == "O" && r2c2 == "O" && r3c3 == "O")
	{
		CPUWon = true;
	}

	if (r1c3 == "O" && r2c2 == "O" && r3c1 == "O")
	{
		CPUWon = true;
	}
	//

	if (PlayerWon == true)
	{
		int something;

		system("CLS");
		std::cout << "The player won!" << std::endl << std::endl;
		std::cout << "Type any number to exit: ";
		system("PAUSE");
		exit(0);
	}

	if (CPUWon == true)
	{
		int something;

		system("CLS");
		std::cout << "The CPU won!" << std::endl << std::endl;
		std::cout << "Type any number to exit: ";
		system("PAUSE");
		exit(0);
	}

	if (PlayerWon == false)
	{
		Redraw();
	}
}