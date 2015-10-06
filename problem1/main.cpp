#include <iostream>

using namespace std;

int totalSum;  // holds the current total sum

void processMultiples();


int main() {
    // cout << "Hello, World!" << endl;

    totalSum = 0;  // initialize totalSum

    processMultiples();

    cout << "The sum of multiples of 3 or 5 below 1000 is " << totalSum << endl;

    return 0;
}


// function adding a multiple number to a count
void addToTotalSum(int numberToAdd) {

    totalSum += numberToAdd;

}


// function checking if a number is a multiple of 3 or 5 below 1000
void processMultiples() {

    for (int i = 1; i < 1000; i++) {

        if ( i % 3 == 0 || i % 5 == 0) {

            // i is a multiple of 3
            // so add to totalSum
            addToTotalSum(i);

        } // end if

    } // end for

} // end processMultiples
