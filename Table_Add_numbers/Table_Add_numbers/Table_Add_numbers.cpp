/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: To have a table of 10 different numbers where the function will add them all and show the result one by one, skipping the line.
Made in Visual Studio
*/

#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;


int const N = 10; //constant 10
int t[N] = { 8, 45, 15, 3, 2, 87, 8, 9, 3615, 7 }; //table with 10 assorted numbers
int sum; // integer named "sum"

int main()
{
	sum = 0; //initializing the "sum" variable
	for (int i = 0; i < N; i++) // Here it says that as long as the counter "i" is greater than zero and less than 10, it will keep the function looping active.
	{
		sum = sum + t[i]; // the variable "sum" will receive the value = "sum" + the next number in the table
		cout << "\n" << sum; // here will show the result always skipping a line

	}
}

