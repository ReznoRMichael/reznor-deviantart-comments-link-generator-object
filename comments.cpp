#include "comments.h"
#include <iostream>
#include <fstream>

using namespace std;

void Commentlink::Input_numbers()
{
    cout << "Enter the [leading_number]: ";
    cin >> number_leading;
    cout << "Enter the starting [link_number]: ";
    cin >> number_smaller;
    cout << "Enter the ending [link_number]: ";
    cin >> number_bigger;

    while (number_bigger<number_smaller)
    {
        cout << "Ending number should be _bigger_ than the starting number!" << endl;
        cout << "Please enter a bigger number: ";
        cin >> number_bigger;
    }

    n = ((number_bigger - number_smaller) + 1);
    link_number = number_smaller;
}

void Commentlink::Output_numbers()
{
    fstream textfile;
    textfile.open("da_comments_links.txt", ios::out);

    for (int i=0; i<n; i++)
    {
        textfile << "https://comments.deviantart.com/" << number_leading << "/" << link_number << "/" << endl;
        link_number++;
    }
    textfile.close();
}

