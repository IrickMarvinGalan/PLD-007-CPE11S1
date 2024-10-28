#include <iostream>
using namespace std;

int main () 
{
	
	char chessboard_Pieces [8][8] = {
										{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
										{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
										{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
										{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
										{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
										{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
										{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
										{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
																					};
	
	for (int i = 0; i < 8; i++) 
	{
		for (int j = 0; j < 8; j++) 
		{
			cout << chessboard_Pieces[i][j] << "|";
		}
		cout << "\n";
		for (int k = 0; k < 8; k++) 
		{
			cout << "--";
		}
		cout << "\n";
	}
}
