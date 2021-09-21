#include <string>
#include <iostream>

using namespace std;

int main()
{
    string text = " Decoded: one two while at three ";
    string name;
    string verb;
    string location;
    string word1 = "one";
    
   

    cout << "one two while at three ";
    system("CLS");

    cout << "Enter the name: ";
    cin >> name;
    system("CLS");

    cout << "Enter a verb (past tense): ";
    cin >> verb;
    system("CLS");

    cout << "Enter a location: ";
    cin >> location;
    system("CLS");
    
   
    cout << text.substr(0,text.find(word1));
    cout << name;
   









}


