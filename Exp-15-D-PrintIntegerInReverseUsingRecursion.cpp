//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
////Print a integer in reverse using Recursive Function
#include <iostream>
using namespace std;
void print_rev(int i) {
    if (i > 0) {
        cout << (i % 10);   // print last digit
        print_rev(i / 10);  // recursive call
    }
}
int main() {
    int num = 113241663;
    cout << "Reverse of " << num << " is: ";
    print_rev(num);
    return 0;
}
/*
Output :
Reverse of 113241663 is: 366142311
*/
