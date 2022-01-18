#include <iostream>
using namespace std;

int main() {

	int vyska;
	cout << "zadaj vysku trojuholnika" << endl;
	cin >> vyska;

	for (int i = vyska; i > 0; i--)
	{
		for (int j = 0; j <= vyska; j++)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}