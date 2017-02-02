#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>  // used for time function

void printMeFirst(std::string name, std::string courseInfo, std::string version) 
{
    std::cout << "Program written by: " << name << std::endl; // put your name here
    std::cout << "Course info: " << courseInfo << std::endl; //course info goes here
    std::cout << "Version Number " << version << std::endl;
    
    time_t now = time(0);  // current date/time based on current system
    char* dt = ctime(&now); // convert now to string for
    
    std::cout << " Date: " << dt << std::endl; //prints the date
}
//function to organize all of the options listed on menu
void options(std::string opt1, std::string opt2, std::string opt3, std::string opt4)
{
    std::cout << opt1 << std::endl; //option 1
    std::cout << opt2 << std::endl; //option 2
    std::cout << opt3 << std::endl; //option 3
    std::cout << opt4 << std::endl; //option 4
}
//function for conversion of seconds->hours->minutes
void secToHoursMin(double seconds)
{
    const int time = 60; //using this as base division factor
    double minutes;
    double hours;
    
    minutes = seconds / time; //gives minutes from seconds
    hours = (seconds / time) / time; //gives hours from seconds
    std::cout << "there are: " << hours << " hours." << std::endl;
    std::cout << "there are: " << minutes << " minutes." << std::endl;
    std::cout << "there are: " << seconds << " seconds." << std::endl;
    //displays all of the measures from seconds
}

void farToCel(double convert) //conversion from far to cel
{
    const int num = 32;
    convert = (convert - num) / 1.8;
    std::cout << "that is "<< convert << " degrees Celcius." << std::endl;
    
}

void celToFar(double revert) //conversion from cel to far
{
    const int num = 32;
    revert = (revert * 1.8) + num;
    std::cout << "that is "<< revert << " degrees Farenhiet." << std::endl;
}

int main()
{
printMeFirst("Mohammed Abbas"," CS116-02 Thursday – Lab1","1.1"); //calling printMeFirst 
options(" 1--Seconds to Hours"," 2--F to C"," 3--C to F"," 4--QUIT"); //calling options

std::cout << "Please select a option from the list...\n";
std::cout << "Only use positive integers (1 - 4): ";
int option = 4; //max number of options
int select;
std::cin >> select; //user selects the option
    while(select <= option || select == option)
    {
        if(select==1)
        {
            std::cout << "Enter Seconds to convert: ";
            double x;
            std::cin >> x;
            secToHoursMin(x); //calling seconds -> hours
            break;
        }
        else if(select==2)
        {
            std::cout << "Enter degrees Farenheit to convert: ";
            double y;
            std::cin >> y;
            farToCel(y); //calls far to cel
            break;
        }
        else if(select==3)
        {
            std::cout << "Enter degrees Celcius to convert: ";
            double z;
            std::cin >> z;
            celToFar(z); //calls cel to far
            break;
        }
        else if(select==4)
        {
            std::cout << "End...";
            break;
        }
        else
        {
            std::cout << "Not valid selection, please enter a valid input (1 - 4): \n";
        }
        
    }


}
