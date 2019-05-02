#include <iostream>
using namespace std;

class Commentlink
{
    int number_bigger;  // wiekszy nr linku
    int number_smaller; // mniejszy nr linku
    int number_leading; // nr glowny linku
    int link_number; // numer umieszczany w linku

public:

    int n;  // ilosc linkow do wygenerowania

    void Input_numbers();

    void Output_numbers();
};
