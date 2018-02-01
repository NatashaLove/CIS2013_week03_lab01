#include <iostream>
using namespace std;

int main() {

	char contimueProgram = 'x';

	for (int i = 0; i <99; i++) { 
		if (i == 1) {
			cout << 1 << "bottle of beer on the wall" << endl;
		}
		else if (i == 0) {
			cout << "No more bottles of beer on the wall" << endl;
		}
		else {
			cout << i << "bottles of beer on the wall" << endl;
		}
	}

	//do {
		//cout << "Do you want to continue (y/n)?";
		cin >> contimueProgram;

	//	switch (contimueProgram) {
		//case 'y':
		//	cout << "Going to continue" << endl;
		//	break;
		//case 'n':
		//	cout << "Going to exit" << endl;
		
		//	break;

		//default:
		//	contimueProgram = 'y';

	//	}
	//} while (contimueProgram == 'y');

	return 0;

}