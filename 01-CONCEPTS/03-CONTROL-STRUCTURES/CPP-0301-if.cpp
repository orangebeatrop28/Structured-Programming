#include <iostream>
using namespace std;

int main() {
    // Conditionals
    int age = 19;

    // Single if
    // if( age >= 18 ) {
    //     cout << "Puedes entrar al antro" << endl;
    // }

    // if( age >= 18  ) {
    //     cout << "Puedes votar" << endl;
    // }
    // else {
    //     cout << "No Puedes votar" << endl;
    // }

    int total = 301;
    if( total >= 100 && total <= 200 ) {
        cout << "Tienes el premio del primer nivel" << endl;
    }
    else if( total > 200 && total <= 300 ) {
        cout << "Tienes el premio del segundo nivel" << endl;
    }
    else {
        cout << "No tienes ningun premio" << endl;
    }

    return 0;
}
