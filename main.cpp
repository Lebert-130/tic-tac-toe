#include "stdafx.h"
#include <iostream>
#include "tictactoe.h"

int main() 
{
	CTicTacToe tictactoe;
	int option;

	std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
	std::cout << std::endl;
	std::cout << "1: Start Game" << std::endl;
	std::cout << "2: Exit" << std::endl;
	std::cout << std::endl;
	std::cin >> option;

	if (option == 1) 
	{
		tictactoe.StartGame();
	}
	else 
	{
		return 0;
	}
}