#include <iostream>
using namespace std;

long long arearect(int length, int bredth){

    long long l=length;
    long long b=bredth;
    long long area = l * b;

    return area;

}

int main(){
    int a = 56789394573867;
    int b = 4554754376389;

    cout << arearect(a,b) << endl;

    return 0;
}