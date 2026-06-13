// program to print even number form 0 to n
#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "even numbers are: ";

    for(int i=0;i<=n;i=i+2){

        if(i%2==0){

            cout << i << " ";
        }  
    }
    return 0;
}