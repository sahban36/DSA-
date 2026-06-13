#include <iostream>
using namespace std;

int main(){
    int height;
    int weight;

    cout << "Enter your height: " ;
    cin >> height;

    cout << "Enter your weight: ";
    cin >> weight;

    if (height>=5){
        if (weight>=40){
            cout << "Good health" << endl;
        }
        else{
            cout << "Increase weight" << endl;
            
        }
    }
    else{
        cout << "yeh baune logo ka gand masti boht badh gaya hai."<< endl;
    }
    
return 0;
}