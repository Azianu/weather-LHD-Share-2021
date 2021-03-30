#define _CRT_SECURE_NO_WARNINGS_
#include<iostream>
#include <cstdlib>
#include<string>
#include<time.h>
#include<iomanip>
using namespace std;

void find(string n);
string weeks[7];
int main()
{
	string weathers[] = { "","sunny", "cloudy", "rainy" };
	
	
	srand((unsigned)time(NULL));
	
	int j,choice;

	for (int i = 0; i < 7; i++) //assigning random weathers to days
	{
		j = (rand()%3)+1;
		weeks[i] = weathers[j];
	}

again:
	cout << "Best days to plan....." << endl<<endl;
	cout << "Go on a picnic \t\t(1)\n";
	cout << "Sunbathe \t\t(2)\n";
	cout << "Play in the rain \t(3)\n\n";
	cout << "What do you want to do?" ;
	cin >> choice;
	cout << endl << endl;
	if (choice == 1)
	{
		cout << "The best days to go for picnic are:" << endl;
		find("cloudy");
	}
	else if (choice == 2)
	{
		cout << "The best days to go for sunbathing are:" << endl;
		find("sunny");
	}
	else if (choice == 3)
	{
		cout << "The best days to go for playing in the rain are:" << endl;
		find("rainy");
	}
	else
	{
		cout << "Invalid Choice.Try again" << endl;
		goto again;
	}
	cout << endl;
	return 0;
}
void find(string n)
{
	string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	for (int i = 0; i < 7; i++)
	{
		if (weeks[i] == n)
		{
			cout << "*" << days[i] << endl;
		}
		else;
	}

}