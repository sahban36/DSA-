#include <iostream>
using namespace std;


char upper(char ch){

    char uch = ch - 'a' +'A';

    return uch;
}
char lower(char ch){

    char lch = ch - 'A' + 'a';
    return lch;
}


int main(){
    char s;
    char h;
    cout << "Enter the lower character: ";
    cin >> s;

    cout  << "Entre the upper character: ";
    cin >> h;
    cout << "The upper character is:" << upper(s) << endl;
    cout << "The lower character is:" << lower(h) << endl;

    return 0;

}