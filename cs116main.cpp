#include <iostream>

#include <string>

#include <iomanip>

#include <ctime>  // used for time function

 

using namespace std;
/**

   Purpose:

       Print out the programmer’s information such as name, class information

       and date/time the program is run

   @author Ron Sha

   @version 1.0 1/27/2017

 

   @param name -  the name of the programmer

   @param courseInfo -  the name of the course

   @return - none

*/

void printMeFirst(string name, string courseInfo)

{

cout <<" Program written by: "<< name << endl; // put your name here

cout <<" Course info: "<< courseInfo << endl;

time_t now = time(0);  // current date/time based on current system

char* dt = ctime(&now); // convert now to string for

   cout << " Date: " << dt << endl;

}

 

main()

{

                /*

                You must include the printMeFirst() function as 1st line of your program.

                You need to pass your name, your class info to function so it will print them out.

                 Always call this function in all of your lab program for this class.

              */

 

printMeFirst("Ron Sha"," CS116-02 Thursday – Lab1"); 

 

                /*

               write your codes below

 

                */

 

}