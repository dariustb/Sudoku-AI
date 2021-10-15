//-----------------------------
// Include Guards
//-----------------------------
#ifndef BOARD_FUNCTION_HEADER
#define BOARD_FUNCTION_HEADER

//-----------------------------
// Include Libraries
//-----------------------------
#include <iostream>
using namespace std;

//-----------------------------
// Function Definitions
//-----------------------------
void print_board(int board[9][9]){
	//Change this to 1 to just print the board like the input
	int board_type = 2;

	// Print numbers wo board
	if (board_type == 1){
		for (int i = 0; i < 9; i++){
			for (int j = 0; j < 9; j++)
				cout << board[i][j] << ' ';	
			cout << endl;
		}
	}

	// Or print numbers w board
	else if (board_type == 2){
		for (int j = 0; j < 3; j++){
			cout << "	";
			for (int i = 0; i < 3; i++)
				cout << " ____ ____ ____  ";
			cout << endl;
			for (int i = 0; i < 3; i++){
				cout << "	";
				for (int k = 0; k < 3; k++){
					cout << "| ";
					for (int l = 0; l < 3; l++){
						if (board[j*3+i][k*3+l] == 0)
							cout << ' ';
						else
							cout << board[j*3+i][k*3+l];
						cout << "  | ";
					}
				}
				cout << endl << "	";
				for (int k = 0; k < 3; k++){
					cout << "|";
					for (int l = 0; l < 3; l++)
						cout << "____|";
					cout << ' ';
				}
				cout << endl;
			}
		}
	}
	cout << endl;
}


bool input_validation(string user_input[9]){
	// Check row x column for the values between '0' and '9'
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < user_input[i].length(); j++){
			if(user_input[i].length() < 9 || (user_input[i][j] != ' ' && (user_input[i][j] < '0' || user_input[i][j] > '9'))){
				cout << "\nError: Invalid board input. Try again.\n";
				return false;
			}
		}
	}
	return true;
}

#endif