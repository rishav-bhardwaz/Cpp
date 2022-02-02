#include <iostream>
using namespace std;
int main()
{
	int X = 40;
	switch (X) {
	case 1:
		cout << "X is 1";
		break;
	case 2:
		cout << "X is 2";
		break;
	case 3:
		cout << "X is 3";
		break;
	default:
		cout << "X other than 1, 2 and 3";
		break;
	}
	return 0;
}
