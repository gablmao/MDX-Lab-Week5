#include <iostream>
#include <vector>

using namespace std;


    /* CHECK ITEMS IN LIST

    for (int i : nums) {
        cout << i << endl;
    }

    */

int main() {

    cout << "Enter an integer: ";
    int input;
    cin >> input;

    vector<int> primes;



    for (int i=2; i<=input; i++) {  //initially assings prime bool to numbers 2 to input
        bool prime = true;
        for (int num=2; num <= i/2; num++) {  //checks if i is a prime
            if (i % num == 0) {  //if it is true, it means the number i is divisible by more
                prime = false;    //numbers than just 1 and itself
                break;
            }
        }

        if (prime) {
            primes.push_back(i);
        }
    }



    //print result
    for (int n : primes) {
        cout << n << endl;
    }

    return 0;
}