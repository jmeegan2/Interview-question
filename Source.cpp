#include<iostream>
using namespace std;

void findMultiples(int n)
{
	int a = 3; //to keep track of multiple of 3
	int b = 5; //to keep track of multiple of 5
	for (int i = 1; i <= n; i++)
	{

		string s = "";

		//Found multiple of 3
		if (i == a)
		{
			a = a + 3; //update next multiple of 3
			s = s + "Buzz ";
		}
		//found multiple of 5
		if (i == b)
		{
			b = b + 5; //update next multiple of 5
			s = s + "Fizz ";
		}
		if (s == "")
			cout << (i) << endl;
		else
			cout << (s) << endl;
	}
}

int main()
{
	findMultiples(100);

	return 0;
}