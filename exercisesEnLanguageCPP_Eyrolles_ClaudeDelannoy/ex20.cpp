#include <iostream>
#include <iomanip>
using namespace std;

int	main(){
	int	counterWays {};
	int	cents10;
	int	cents5;
	int	cents2;

	for (cents10 = 0; cents10 <= 10; cents10++){
		for (cents5 = 0; cents5 <= 20; cents5++)
		for (cents2 = 0; cents2 <= 50; cents2++)
		if (2 * cents2 + 5 * cents5 + 10 * cents10 == 100){
			counterWays++;
			cout << "1 Euro = ";
			if (cents10) cout << setw(2) <<  cents10 << " x 10c  ";
			if (cents5 ) cout << setw(2) <<  cents5  << " x 5c   ";
			if (cents2 ) cout << setw(2) <<  cents2  << " x 2c   ";
			cout << endl;
		}
	}
	cout << endl << "There are " << counterWays << " Ways to pay 1 Euro with 2, 5 or/and 10 cents." << endl;

}
