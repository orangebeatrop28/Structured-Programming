#include <iostream>
using namespace std;

int main() {
    // Text
    char value = 'a';
    string name = "Joshua";
    string lastName = "JHS";
    string fullName = name + " " + lastName;
    cout << fullName << endl;

    cout << "First"s + " & " + "Second String" << endl;
    cout << string( "First" ) + " & " + "Second String" << endl;
    cout << "First" << " & " << "Second String" << endl;
    return 0;
}
