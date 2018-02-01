#include <iostream>
using namespace std;

int main() {

	char contimueProgram = 'x';

	do {
		cout << "Do you want to continue (y/n)?";
		cin >> contimueProgram;

		switch (contimueProgram) {
		case 'y':
			cout << "Going to continue" << endl;
			break;
		case 'n':
			cout << "Going to exit" << endl;
		
			break;

		default:
			contimueProgram = 'y';

		}
	} while (contimueProgram == 'y');

	return 0;

}