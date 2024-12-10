#include <iostream>
using namespace std;
int main() 
{
    int age;
    cout << "Please enter the age: " <<endl;
    cin >>age;
    
    cout << "Using ternary operator" <<endl;
string message= (age >= 4) ? "Admit to school" : "Declined! Minimum Age Not Reached";
cout <<message <<endl;
return 0;
}