#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;
void printMeFirst(string name, string courseInfo, string version)
{
	cout << "Program written by: " << name << endl; // put your name here
	cout << "Course info: " << courseInfo << endl; //course info goes here
	cout << "Version Number " << version << endl;

	time_t now = time(0);  // current date/time based on current system
	char* dt = ctime(&now); // convert now to string for

	cout << " Date: " << dt << endl; //prints the date
}

//function to organize all of the options listed on menu
void options(string opt1, string opt2, string opt3, string opt4)
{
	cout << opt1 << endl; //option 1
	cout << opt2 << endl; //option 2
	cout << opt3 << endl; //option 3
	cout << opt4 << endl; //option 4
}

void secToHoursMin(double seconds)
{
	do //keeps the user from entering a negativer number
    {
		cout << "Please enter a non-negative number\n";
		cin >> seconds; //stores entry to be processed in while loops
		
    }
	while (seconds < 0); //input must be > 0
	
	while (cin.fail()) //keeps from entering other characters
	{
		cout << "please enter a valid input: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> seconds; //stores value for arithmetic proccessing
	}
	const int time = 60; //using this as base division factor
	double minutes;
	double hours;

	minutes = seconds / time; //gives minutes from seconds
	hours = (seconds / time) / time; //gives hours from seconds
	cout << "there are: " << setprecision(2) << hours << " hours." << endl;
	cout << "there are: " << setprecision(2) << minutes << " minutes." << endl;
	cout << "there are: " << setprecision(2) << seconds << " seconds." << endl;
	//displays all of the measures from seconds
}

void farToCel(double convert) //conversion from far to cel
{
	do //keeps the user from entering a negativer number
    {
		cout << "Please enter a non-negative number\n";
		cin >> convert; //stores entry to be processed in while loops
		
    }
	while (convert < 0); //input must be > 0
	while (cin.fail())
	{
		cout << "please enter a valid input: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> convert;
	}
	const int num = 32;
	convert = (convert - num) / 1.8;
	cout << "that is " << setprecision(2) << convert << " degrees Celcius." << endl;

}

void celToFar(double revert) //conversion from cel to far
{
	do //keeps the user from entering a negativer number
    {
		cout << "Please enter a non-negative number\n";
		cin >> revert; //stores entry to be processed in while loops
		
    }
	while (revert < 0); //input must be > 0
	while (cin.fail())
	{
		cout << "please enter a valid input: ";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> revert;
	}
	const int num = 32;
	revert = (revert * 1.8) + num;
	cout << "that is " << setprecision(2) << revert << " degrees Farenhiet." << endl;
}
int main()
{
	char menuOpt; //the creation of the menu option variable
	int select; //the input variable for options
	do {

		cout << "-----------------------------------------------------------\n";
		printMeFirst("Mohammed Abbas", " CS116-02 Thursday – Lab1", "1.1"); //calling printMeFirst 
		options(" 1--Seconds to Hours", " 2--F to C", " 3--C to F", " 4--QUIT"); //calling options
		cout << "Please select a option from the list...\n";
		cout << "Only use positive integers (1 - 4): ";
		cin >> select; //user selects the option
		
		if (select == 1)
		{
			cout << "Enter Seconds to convert: ";
			double x;
			cin >> x;
			secToHoursMin(x); //calling seconds -> hours
		}
		if (select == 2)
		{
			cout << "Enter degrees Farenheit to convert: ";
			double y;
			cin >> y;
			farToCel(y); //calls far to cel
		}
		if (select == 3)
		{
			cout << "Enter degrees Celcius to convert: ";
			double z;
			cin >> z;
			celToFar(z); //calls cel to far
		}
		if (select == 4)
		{
			cout << "End...";
			break;
		}
		cout << "Would you like to return to the menu (y/n): ";
		cin >> menuOpt;
		}
while (menuOpt == 'y'); //loops the menu back to the begining
}
