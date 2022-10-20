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

	return 0;
}

template <typename T>
T half(T num)
{
	T newNum;
	newNum = num / 2;

	return newNum;
}

int half(int num)
{
	int newNum;
	newNum = round(static_cast<double>(newNum / 2.00));
	return newNum;
}