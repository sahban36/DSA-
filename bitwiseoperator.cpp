#include <iostream>
using namespace std;

int main(){
    //& operator
    cout << (5&7) << endl;
    //| opertaor
    cout << (5|7) << endl;
    // ~(tilda) operator

    cout <<  (~1) << endl; 
    // left shift mutiply power of 2
    cout << (5<<15) << endl;

    // right shift divide power 2
    
    cout << (100>>4) << endl;

    // xor operator same- 0 diff- 1
    cout << (5^5) << endl;


    return 0;
}