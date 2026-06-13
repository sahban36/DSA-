#include <iostream>
using namespace std;

int main(){
    int budget;
    cout << "Enter your budget:";
    cin >> budget;

    if (budget>=2000000){
        cout << "You can buy creta!" << endl;

    }
    else{
        cout << "You cannot buy creta!" << endl;
    }

    return 0;
}