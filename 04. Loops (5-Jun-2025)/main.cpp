#include<iostream>
using namespace std;
int main() {
    cout << "How many times u wanna print \"Hello World\": ";
    int howMany;
    cin >> howMany;

    // For loop
    for(int i = 1; i <= howMany; i++) {
        cout << "Hello World \n";
    }

    // while loop

    int c = 0;
    while(c < 10) {
        cout << "Hello C++ \n";

        c++;
    }


    // Do while loop
    int a = 0;
    do {
        cout << "Hello \n";
        a++;
    } while(a < 10);


}
