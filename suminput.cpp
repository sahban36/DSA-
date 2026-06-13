#include <iostream>
using namespace std;

int main(){
    int s=0;
    int a;
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << "Enter number " << i << ": " ;
        cin >> a;
        s=s+a;
    }
    cout << "Total sum: " << s <<endl;

    return 0;
}