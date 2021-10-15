//-----------------------------
// Include Guards
//-----------------------------
#ifndef AI_FUNCTION_HEADER
#define AI_FUNCTION_HEADER

//-----------------------------
// Include Libraries
//-----------------------------
// N/A

//-----------------------------
// Function Prototypes
//-----------------------------
bool sudoku_AI(int[9][9]);				// the AI - runs the strategy functions
bool check_full(int[9][9], int&, int&);	// check if the board's full
bool check_fail(int[9][9], int, int, int);	// check the constraints of the board
bool check_row(int[9][9], int, int);	// constraint - row
bool check_col(int[9][9], int, int);	// constraint - column
bool check_3x3(int[9][9], int, int);	// constraint - 3x3 sqaure cluster

//-----------------------------
// Function Definitions
//-----------------------------
bool sudoku_AI(int board[9][9]){
	// I initialize these variables to keep track of the value position as it changes, preventing any segmentation errors.
	int row, col; 

	// Check if the board is full. Because of backtracking, this would only mean that the board is successfully complete
	if (check_full(board, row, col))
		return true;

	for (int i = 1; i <= 9; i++){
		// Check the board for a fail 
		if (check_fail(board, row, col, i)){
			board[row][col] = i; 

			// Calls function recursively while there are still board squares to fill
			if (sudoku_AI(board)) 
				return true; 

			// It gets here if the previous recursion returns false. The space is cleared out and becomes open to a different value
			board[row][col] = 0; 
		} 
	} 
	return false;
} 

bool check_full(int board[9][9], int& row, int& col){
	// Apparently, initializing the row and column is calling a segmentation fault for me, so this is my way of circumventing the issue. This pretty much traverses the board for empty values
	for (row = 0; row < 9; row++){
		for (col = 0; col < 9; col++){
			if (board[row][col] == 0) 
				return false; 
		}
	}
	return true; 
}

bool check_row(int board[9][9], int row, int value){
	// Goes through the row to check if the value is already taken
    for (int col = 0; col < 9; col++){
        if (board[row][col] == value)  
            return false;  
	}
    return true;  
}  

bool check_col(int board[9][9], int col, int value){
	// Goes through the column to check if the value is already taken
    for (int row = 0; row < 9; row++){
        if (board[row][col] == value)  
            return false;  
	}
    return true;  
}  

bool check_3x3(int board[9][9], int row_3x3, int col_3x3, int value){
	// Goes through the 3x3 square cluster to check if the value is already taken
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
			// So row_3x3 is row - (row%3), same with col_3x3 to find the beginning of the 3x3 square cluster in the board
            if (board[row + row_3x3][col + col_3x3] == value)  
                return false;  
		}
	}
    return true;  
}  

bool check_fail(int board[9][9], int row, int col, int value){
	// First check if the selected row and column are valid
	if (check_row(board, row, value) && check_col(board, col, value)){
		// Then check if the 3x3 cluster is valid
		if (check_3x3(board, row - row % 3, col - col % 3, value))
			return true;
	}

	// Otherwise, this board isn't solved
	return false;
}

#endif