#include <iostream>
using namespace std;

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << "Iteration-" << i << endl;
    }
    return 0;
}