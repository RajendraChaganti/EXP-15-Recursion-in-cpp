//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
////Addition Of All Integers Upto n Using Recursion
#include <iostream>
using namespace std;
int sumup(int n) {
    if (n <= 1)   // base case 
        return 1;
    else
        return n + sumup(n - 1); // recursive case
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    cout << "Sum of first " << n << " natural numbers is: " << sumup(n) << endl;
    return 0;
}
/*
Output :
Enter a number: 45
Sum of first 45 natural numbers is: 1035
*/
