#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Enter an integer: ";
    int input;
    cin >> input;

    vector<int> nums;

    //creates list of numbers from 0 to inputted number
    for (int i=0; i<=input; ++i) {
        nums.push_back(i);
    }

    nums.erase(nums.begin(), nums.begin()+2);

    /* CHECK ITEMS IN LIST

    for (int i : nums) {
        cout << i << endl;
    }
    
    */



    //checks if number at [i] is prime to inputted number
    //if not prime, remove from list
    /*for (int i=2; i<(nums.size() / 2); ++i) {

    }*/

    return 0;
}