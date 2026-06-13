#include <iostream>

using namespace std;

int main(){

int num1= 5;  
float num2= 4.5;   

float sum= num1+ num2;    // float main store hoga to output bhi float main ayega 
int sum2= num1 + num2;   //int main store hoke  value int main ayega may be loss of data


cout << (num1 + num2) << endl;    // 9.5
cout << sum<< endl;      // 9.5
cout << sum2 << endl;   // 9 

char a='A';
cout << (a+1) << endl;
char ch= a+1;
cout << ch << endl;

return 0;
}
