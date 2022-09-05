#include "warranty.h"
#include <iostream>
using namespace std;

Warranty::Warranty(istream& in)
{
    //take in the start date
    getline(in, );
}

Warranty::Warranty()
{
    //get start date
    string buydate;
    cout << "Start date: ";
    cin >> buydate;
    SetBuydate(buydate);
    //get end date
    string enddate;
    cout << "End date: ";
    cin >> enddate;
    SetEnddate(enddate);
    //get item
    string item;
    cout << "Start date: ";
    cin >>item;
    Setitem(item);
}

Warranty::~Warranty()
{
    //dtor
}

string Warranty::getSummary()
{
    string sum;
    sum += "Buy date: ";
    sum += buydate;
    sum += '\n';
    sum += "End date: "
    sum += end_date;
    sum += '\n';
    sum += item;
    sum += '\n';
    sum += terms;
    return sum;
}
