// Jordan Brown 
// CIS 1202.800
// Oct. 18, 2022

#include <iostream>

using namespace std;

//Function Prototypes
template <typename T>
T half(T num);
int half(int);

int main()
{
	float fnum1, fnum2;
	int inum1, inum2;
	int again = 1;
	while (again == 1)
	{
		cout << "Enter a float\n";
		cin >> fnum1;
		fnum2 = half(fnum1);
		cout << "Half is " << fnum2 << endl;
		cout << "Enter an integer\n";
		cin >> inum1;
		inum2 = half(inum1);
		cout << "Half is " << inum2 << endl;
		cout << "Do it again?\n1 - Yes\n0 - No\n";
		cin >> again;
		while (again < 0 || again > 1)
		{
			cout << "Invalid response.\n1 - Yes\n0 - No\n";
			cin >> again;
		}
	}

	return 0;
}

template <typename T>
T half(T num)
{
	T newNum;
	newNum = num / 2.00;
	return newNum;
}

int half(int num)
{
	int newNum;
	newNum = round(static_cast<double>(num / 2.00));
	return newNum;
}