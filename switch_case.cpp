#include <iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;

    switch(grade){
        case 'O': cout << "Your marks is between 90 to 100" << endl;
        break;
        case 'E': cout << "Your marks is between 80 to 90" << endl;
        break;
        case 'A': cout << "Your marks is between 70 to 80" << endl;
        break;
        case 'B': cout << "Your marks is between 60 to 70" << endl;
        break;
        default: cout << "You failed" << endl;

    } 

    return 0;
}