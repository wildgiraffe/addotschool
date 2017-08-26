#include <iostream>
using namespace std;

int main()
{
	int scores[10] = { 10,100,94,36,72,88,60,60,80,24 };
	int sum = 0;
	for (int i = 0; i < 10; ++i)
	{
		sum += scores[i];
	}
	cout << "Æò±Õ " << (sum) / 10 << " Á¡" << "\n";
			return 0;
}