//By Bradley Zenker 2023

#include "program2functions.h"
#include <iostream>
#include <cmath>

using namespace std;

int SumDigits(int num) {
    //Makes sure that the input is positive
    num = abs(num); 
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool IsPalindrome(int num) {
    //Makes sure that the input is positive
    num = abs(num); 
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int CountDigitMatch(int num, int digit) {
    if (digit < 0 || digit > 9) {
        return -1; //Returns invalid number
    }
    //Makes sure that the input is positive
    num = abs(num); 
    int count = 0;
    while (num > 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }
    return count;
}
bool SameDigits(int num1, int num2) {
    int digits[10] = {0}; //Used to count the order of the digits

    //Makes sure that the input is positive
    num1 = abs(num1); 
    num2 = abs(num2); 

    while (num1 > 0) {
        digits[num1 % 10]++;
        num1 /= 10;
    }

    while (num2 > 0) {
        digits[num2 % 10]--;
        num2 /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (digits[i] != 0) {
            //Shows numbers have different digits
            return false; 
        }
    }

    return true;
}

void Factor(int num) {
    if (num < 0) {
        cout << num << " = -";
        num = abs(num);
    } else {
        cout << num;
        if (num <= 1) {
            cout << " is not prime" << endl;
            return; // Numbers less than or equal to 1 are not prime
        } else {
            cout << " = ";
        }
    }

    int divisor = 2;
    bool firstFactor = true; // To handle formatting of the first factor
    while (num > 1) {
        if (num % divisor == 0) {
            if (!firstFactor) {
                cout << " * ";
            }
            cout << divisor;
            num /= divisor;
            firstFactor = false;
        } else {
            divisor++;
        }
    }
    if (firstFactor) {
        cout << " is prime";
    }
    cout << endl;
}

void DoubleMinToIntMinSec(double minutes, int& intMinutes, int& seconds) {
    intMinutes = static_cast<int>(minutes);
    seconds = round((minutes - intMinutes) * 60.0);}