#include <iostream>
#include <stdio.h>  // getchar()
#include <iomanip>  // number precision
#include "comments.h"  // LinkGenerator
#include "TimeCalculation.h"  // TimeCalculator

using namespace std;

int main()
{
    cout << "        Program for generating deviantart comments links.          " << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "          It generates links in the following template:            " << endl;
    cout << "  https://comments.deviantart.com/[leading_number]/[link_number]/  " << endl;
    cout << "-------------------------------------------------------------------" << endl;

    Commentlink LinkGenerator; // Class; Object - new object of the type Commentlink
    TimeCalculation TimeCalculator; // Class; Object - new object of the type TimeCalculation

    LinkGenerator.Input_numbers(); // Object.Function - ask the user how many and what links to generate

    cout << endl << "Number of links to generate: " << LinkGenerator.n << endl;
    cout << "Generating links into file..." << endl;

    TimeCalculator.TimeCalcStart(); // Object.Function - start time calculation
    LinkGenerator.Output_numbers(); // Object.Function - output links to file
    TimeCalculator.TimeCalcStop(); // Object.Function - stop time calculation

    cout << fixed << setprecision(3);

    cout << "----------------------------------------------------" << endl;
    cout << "       Link generation completed successfully.      " << endl;
    cout << "               Completed in " << TimeCalculator.TimeCalculated << " s." << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "          written in object C++ by ReznoR           " << endl;
    cout << "                     2018.11.29                     " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "          [Press Enter to close the program]        " << endl;

    getchar(); getchar();

    return 0;
}
