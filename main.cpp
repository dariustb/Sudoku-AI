//-------------------------
//	Libraries & Standards
//-------------------------
#include "includes/ai_functions.h"
#include "includes/board_functions.h"
#include "includes/title_function.h"

//-------------------------
//	The Main()
//-------------------------
int main(){ 
	// Declare Variables
	int board[9][9];
	string user_input[9], user_choice;
	bool is_solved;

	// Make it look pretty
	print_title();

	// Loop to solve multiple boards in one run
	do{
		// Get the board input from user and save it in the board variable
		do{
			cout << "> Enter below the initial board: (Right-click to paste)\n";
			for (int i = 0; i < 9; i++)
				getline(cin, user_input[i]);
			cout << endl;
		} while (!input_validation(user_input));

		// Set the board	
		for (int i = 0; i < 9; i++){
			int k = 0;
			for (int j = 0; j < user_input[i].length(); j++){
				if (user_input[i][j] != ' '){
					board[i][k] = user_input[i][j] - '0';
					k++;
				}
			}
		}

		// Print unsolved board
		cout << "Start state:\n";
		print_board(board);

		// Run AI to solve board
		is_solved = sudoku_AI(board);

		// Print finished board or unsolvable message
		if (is_solved){
			cout << "Solved state: \n";
			print_board(board); 
		}
		else
			cout << "Error: Board is unsolvable\n"; 

		// Now let em loop it over for different boards
		cout << "Solve new board? (y/n) \n";
		getline(cin, user_choice);
	
	} while (user_choice == "Y" || user_choice == "y");

	// gtfo lol
	cout << "Ending program...";
	return 0; 
}