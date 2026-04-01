#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num; // store original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    // check palindrome
    if (original == reverse)
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}
