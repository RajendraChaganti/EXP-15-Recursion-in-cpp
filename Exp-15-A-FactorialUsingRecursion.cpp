//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
//Factorial using Recursion 
#include <iostream>
using namespace std;
// Function definition
int fact(int n) {
    if (n <= 1)
        return 1;             // base case
    else
        return n * fact(n - 1); // recursive case
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << fact(num) << endl;
    return 0;
}
/*
Output :
Enter a number: 7
Factorial of 7 is 5040
*/
