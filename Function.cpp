#include<iostream>
using namespace std;

/*
=========================================================
Question 1:
Write a function printName() that prints your full name.

Output:
Nishant Gupta
=========================================================
*/
void printName() {
    cout << "Nishant Gupta";
}

/*
=========================================================
Question 2:
Write a function sum(int num) that returns the sum
of numbers from 1 to n.

Input:
5

Output:
15
=========================================================
*/
int sum(int num) {
    int sumNum = 0;

    for (int i = 1; i <= num; i++) {
        sumNum += i;
    }

    return sumNum;
}

/*
=========================================================
Question 3:
Write a function sumOfDigits(int num) that prints
the sum of digits of a number.

Input:
12345

Output:
15
=========================================================
*/
void sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        int lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }

    cout << sum;
}

/*
=========================================================
Question 4:
Write a function nCr(int n, int r) that calculates
the value of nCr.

Formula:
nCr = n! / (r! * (n-r)!)

Input:
5 2

Output:
10
=========================================================
*/
int nCr(int n, int r) {
    int factN = 1;
    int factR = 1;
    int factNR = 1;

    for (int i = 1; i <= n; i++) {
        factN *= i;
    }

    for (int i = 1; i <= r; i++) {
        factR *= i;
    }

    for (int i = 1; i <= n - r; i++) {
        factNR *= i;
    }

    return factN / (factR * factNR);
}

/*
=========================================================
Question 5:
Write a function checkPrime(int num) that checks
whether a number is Prime or Not Prime.

Input:
17

Output:
17 is Prime

Input:
18

Output:
18 is not Prime
=========================================================
*/
void checkPrime(int num) {

    bool isPrime = true;

    if (num < 2) {
        isPrime = false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << num << " is Prime";
    } else {
        cout << num << " is not Prime";
    }
}

/*
=========================================================
Question 6:
Write a function printPrime(int num) that prints
all Prime numbers from 2 to n.

Input:
20

Output:
2 3 5 7 11 13 17 19
=========================================================
*/
void printPrime(int num) {

    for (int j = 2; j <= num; j++) {

        bool isPrime = true;

        for (int i = 2; i * i <= j; i++) {
            if (j % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << j << " ";
        }
    }
}

int main() {

    // ==========================
    // Question 1
    // Output:
    // Nishant Gupta
    // ==========================
    printName();

    cout << "\n\n";

    // ==========================
    // Question 2
    // Input:
    // 5
    //
    // Output:
    // 15
    // ==========================
    cout << sum(5);

    cout << "\n\n";

    // ==========================
    // Question 3
    // Input:
    // 12345
    //
    // Output:
    // 15
    // ==========================
    sumOfDigits(12345);

    cout << "\n\n";

    // ==========================
    // Question 4
    // Input:
    // n = 5
    // r = 2
    //
    // Output:
    // 10
    // ==========================
    cout << nCr(5, 2);

    cout << "\n\n";

    // ==========================
    // Question 5
    // Input:
    // 17
    //
    // Output:
    // 17 is Prime
    // ==========================
    checkPrime(17);

    cout << "\n\n";

    // ==========================
    // Question 6
    // Input:
    // 20
    //
    // Output:
    // 2 3 5 7 11 13 17 19
    // ==========================
    printPrime(20);

    return 0;
}