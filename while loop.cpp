#include <iostream>
using namespace std;
int main()
{
    string food;
    char resp;
    cout <<"Please enter a food you like: ";
    cin >>food; //Customers Insert The Food They Like
    cout <<"Do you wish to continue (Y/N)? ";
    cin >>resp;

    while (resp!= 'N') //Characters use only 1 quotation mark
    {
        cout <<"Please enter a food you like: ";
        cin >>food;
        cout <<"Do you wish to continue (Y/N)? ";
        cin >>resp;
    }
    return 0;
}