#include <iostream>

using namespace std;


// Problem 2 : Even Fibonacci numbers
// src : https://projecteuler.net/problem=2

// hold sum of even fibonacci numbers
int totalSum;

// hold numbers to add together to get next fibonacci number
int currentFibonacciNumber, nextFibonacciNumber;


int main() {
    // cout << "Hello, World!" << endl;

    currentFibonacciNumber = 1;
    nextFibonacciNumber    = 2;

    totalSum = nextFibonacciNumber;

    do {

        int placeholderCurrent = currentFibonacciNumber;

        int placeholderNext = nextFibonacciNumber;

        currentFibonacciNumber = nextFibonacciNumber;

        nextFibonacciNumber = placeholderCurrent + placeholderNext;

        // if there's no remainder on the number then it is even
        if ( nextFibonacciNumber % 2 == 0 ) {

            totalSum += nextFibonacciNumber;

        }

    } while (currentFibonacciNumber < 4000000);


    cout << "The total sum of all Fibonacci numbers less than 4000000 is : " << totalSum << endl;


    return 0;
}