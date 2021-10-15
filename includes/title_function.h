//-----------------------------
// Include Guards
//-----------------------------
#ifndef TITLE_FUNCTION_HEADER
#define TITLE_FUNCTION_HEADER

//-----------------------------
// Include Libraries
//-----------------------------
#include <iostream>
using namespace std;

//-----------------------------
// Function Definitions
//-----------------------------
void print_title(){
	// Prints "Sudoku" in ascii block art. Original art from patorjk
	// http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
	cout << endl << "                  Darius Brown presents: " << endl <<
	" ________  ___  ___  ________  ________  ___  __    ___  ___" << endl <<
	"|\\   ____\\|\\  \\|\\  \\|\\   ___ \\|\\   __  \\|\\  \\|\\  \\ |\\  \\|\\  \\" << endl <<
	"\\ \\  \\___|\\ \\  \\ \\  \\ \\  \\_|\\ \\ \\  \\|\\  \\ \\  \\/  /_\\ \\  \\ \\  \\ " << endl << 
	" \\ \\_____  \\ \\  \\ \\  \\ \\  \\ \\\\ \\ \\  \\ \\  \\ \\   ___  \\ \\  \\ \\  \\"  << endl << 
	"  \\|____|\\  \\ \\  \\_\\  \\ \\  \\_\\\\ \\ \\  \\_\\  \\ \\  \\\\ \\  \\ \\  \\_\\  \\ " << endl << 
	"    ____\\_\\  \\ \\_______\\ \\_______\\ \\_______\\ \\__\\\\ \\__\\ \\_______\\" << endl << 
	"   |\\_________\\|_______|\\|_______|\\|_______|\\|__| \\|__|\\|_______|" << endl << 
	"   \\|_________| " << endl << endl;
}

#endif