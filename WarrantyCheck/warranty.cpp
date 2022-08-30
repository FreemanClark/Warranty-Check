#include "warranty.h"
#include <iostream>
using namespace std;

Warranty::Warranty(istream& in)
{
    in >>
}

Warranty::~Warranty()
{
    //dtor
}

string Warranty::getSummary()
{
    string sum;
    sum += date;
    sum += ", ";
    sum += item;
    sum += ", ";
    sum += terms;
    return sum;
}
