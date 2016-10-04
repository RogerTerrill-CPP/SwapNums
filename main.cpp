#include <iostream>
using namespace std;

//Prototyes for each function
int getX();
int getY();
void displayXY(int x, int y);
void swapXY(int& x, int& y);

int main()
{
	int x, y;
	x = getX();
	y = getY();
	cout << "Your x, y values before change are " << x << " " << y << "\n";
	displayXY(x, y);
	swapXY(x, y);
	displayXY(x, y);
	return 0;
}


/*******************************************************
Name            :   getX()
Arguments       :   int x
Returns         :   int x
Precondition    :   None
Postcondition   :   User is asked for an integer and it is returned
*******************************************************/
int getX()
{
	//Declare and initialize a variable x
	int x = 0;

	//Ask the user to enter a value for x
	cout << "Please enter an integer for x: ";

	//User inputs an integer for x
	cin >> x;

	//Return the value of x to the main function
	return x;
}

/*******************************************************
Name            :   getY()
Arguments       :   int y
Returns         :   int y
Precondition    :   None
Postcondition   :   User is asked for an integer and it is returned
*******************************************************/

int getY()
{
	//Declare and initialize a variable y
	int y = 0;

	//Ask the user to enter a value for y
	cout << "Please enter an integer for y: ";

	//User inputs an integer for y
	cin >> y;

	//Return the value of x to the main function
	return y;
}

/*******************************************************
Name            :   displayXY(int x, int y)
Arguments       :   none
Returns         :   none
Precondition    :   int x and int y must be declared with values
Postcondition   :   Will output the values of x an y
*******************************************************/
void displayXY(int x, int y)
{
	//Display the values of x and y that are passed in the parameter
	cout << "The values of x is " << x << " and the value of y is " << y << endl;
}

/*******************************************************
Name            :   swapXY(int& x, int& y)
Arguments       :   int temp
Returns         :   none
Precondition    :   int& x and int& y must be declared with values
Postcondition   :   Will swap the values of x and y and return to main function
*******************************************************/
void swapXY(int& x, int& y)
{
	//Declare a temp variable
	int temp;

	//Swap values and ints
	temp = x;
	x = y;
	y = temp;
}

/*
Name			:	homework2
Arguements		:	int x, y
int& x, y
Return			:	x, y
Definition		:	A function that shows before and after swap of two integers
*/
