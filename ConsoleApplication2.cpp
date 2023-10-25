// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double number1, number2;
	cout << "Enter your First Number";cin >> number1;
	cout << "Enter your Second Number";cin >> number2;
    double  result;
	result = number1 / number2;
	cout << result << endl;
	int count = 0;
	int j = 0;
	int temp = 0;
	double number[10];
	for (int i = 0; i < 11;i++)
	{
		
		while (j<=10)
		{
			temp = result * pow(10, j);
			number[i] = temp / pow(10, j - 1);		
			break;
			
		}
		cout << number[i] << endl;
		j++;
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
