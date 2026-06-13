#include <iostream>
using namespace std;

int main(){
    bool condn1= (1<2);
    bool condn2= (2==2);
    bool condn3= (4>=3);
    bool condn= false;

    if(condn1 || condn2 || condn3){
        if (condn1 && condn2 && condn3){
            cout << "all condition are true" << endl;
        }
        else{
            cout << "atleast one conition is true" << endl;
        }
    }
    else{
        cout << "all condition are false" << endl;
    }
    cout << !condn << endl;
    return 0;
}
