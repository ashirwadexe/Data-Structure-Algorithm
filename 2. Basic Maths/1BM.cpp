#include <iostream>
using namespace std;

int main() { 
    int n = 1231233;
    int count = 0;

    while (n > 0) { 
        count++;
        n = n / 10;
    };
    cout << "No. of Digits: " << count;
    return 0;
};