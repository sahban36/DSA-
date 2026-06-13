#include <iostream>
using namespace std;

int sum(int a, int b){
    int totalsum = a +b;

    return totalsum;
}

void name(){
    cout << "My name is Predator" << endl;
}

int product(int a , int b, int c){

    return a*b*c;
}
int main(){
    int ans = sum(5,10);

    int prod = product(3,6,3);

    cout << ans << endl; 
    cout << prod << endl;
    name();
}