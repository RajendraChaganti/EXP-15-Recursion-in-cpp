//Name:-Rajendra Chaganti
//PRN:-24070123150
//div:-B3
////Print a string in reverse using Recursive Function
#include <iostream>
using namespace std;
void print_rev(char* str) {
    if (*str != '\0') {          // base case: end of string
        print_rev(str + 1);      // recursive call with next character
        cout << *str;            // print current character after recursion
    }
}
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);       // read input string including spaces
    cout << "Reversed string: ";
    print_rev(str);              // call recursive function
    cout << endl;
    return 0;
}
/*
Output :
Enter a string: itnagahC ardnejaR si eman yM
Reversed string: My name is Rajendra Chaganti
*/
