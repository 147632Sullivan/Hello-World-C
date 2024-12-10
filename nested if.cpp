#include <iostream>
#include <string>
using namespace std;

int main()
{
    string childname, interest; //Variable declaration
    int age;
    
    cout << "Input your child's name: " <<endl;
    getline (cin, childname);
    cout << "Input your child's age: " <<endl; //Prompt input
    cin >>age;

    if (age >= 4 && age <=10) //Arguments
    {
        cout <<"Input your child's interest: ";
        cin >> interest;

        //Else If
        
        if (interest == "Football") //First nested if
        {
            cout <<childname <<" has been successfully admitted into the Football Play Group! " <<endl;
        }
        else if (interest == "Art") // Second nested if
        {
            cout <<childname <<" has been successfully admitted into the Art Play Group! " <<endl;
        }
        else
        cout <<childname <<" has been admitted and assigned to other groups. " <<endl;
       }

       //Child Admittance

       if(age >= 7) {
        cout <<childname <<" has been admitted to Grade School " <<endl;
        }  
        else if (age = 5 && 6) {
            cout <<childname <<" has been admitted to Kindergarten " <<endl;
        }
        else if (age = 3 && 4) {
            cout <<childname <<" has been admitted to Pre-School " <<endl;
        }
        else if (age = 1 && 2) {
            cout <<childname <<" has been admitted to Play Group " <<endl;
        }
        
    if (age > 10) {
     cout <<childname <<" is too old! " <<endl;
     }
        else (age < 1); {
            cout <<childname <<" is too young! " <<endl;
        }
       
       return 0;
    }
