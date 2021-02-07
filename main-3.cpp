/* Program name: M04 Programming Assignment 2
*  Author: Caitlin J. Corbin
*  Date last updated: Feb. 10, 2020
* Purpose: Reads a file, converts temperature, and outputs to user and a new file.
*/

#include <iostream>
#include <fstream>

using namespace std;

int lower, upper; //declaring variables

int main(){ //main function

            cout << "Enter the smallest number in Celsius: \n"; //user prompt for small number
            cin >> lower; //puts input into variable: lower
            cout << "Enter the largest number in Celsius: " << endl; //user prompt for largest number
            cin >> upper; //puts input into variable: upper

    while(upper <= lower) { //condition that sees if the big number is bigger than the smallest
            cout << "Invalid Attempt, small number must be less than the large number" << endl; //error message
    }
            cout << "C---F \n";
            ofstream myFile; //creates new file
            myFile.open("temp.txt"); //opens file

    for(int celsius=lower; celsius <= upper; celsius++) { //condition that converts ranges lower to upper

            myFile << celsius << " " << (celsius*(9/(double)5) + 32) << endl; //puts data into temp file
            cout << celsius << " " << (celsius*(9/(double)5) + 32) << endl; //compares Celcius to Farenheight
    }

    return 0;
}
