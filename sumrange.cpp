#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;

    cout << "Enter two numbers: ";

    int x;
    int y;
    cin >> x >> y;

    /*for (i=0; i<nums.size(); i++) {
        cout << nums[i];
    }*/

    int i = 0;
    int sum = 0;
    for (i=x; i<=y; i++) {
        nums.push_back(x);
        cout << i << endl;
        sum = sum + nums[i];
    }
    cout << sum;
    //cout << "The sum between " << x << " and " << y << " is " << sum << endl;

    return 0;

}