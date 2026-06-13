#include <iostream>
using namespace std;

string istriangle(int a, int b, int c){

    if(a>b && a>c){
        if(a>(b+c)){
            return "yes";
        }
    }
}
int main(){
    istriangle(5,2,1);
    return 0;
}