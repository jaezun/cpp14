#include <iostream>
using namespace std;

int	main(){
	const char	caracter = '*';
	int		totalLines;
	int		lineCounter;
	int		spaceBeforeChar;
	int		j;

	cout << "How many lines ?\n";
	cin >> totalLines;

	for (lineCounter = 0; lineCounter < totalLines; lineCounter++){
		spaceBeforeChar = totalLines - lineCounter - 1;
		for (j = 0; j < spaceBeforeChar; j++) cout << ' ';
		for (j = 0; j < 2 * lineCounter + 1; j++) cout << caracter; 
		cout << endl;
	}
}
