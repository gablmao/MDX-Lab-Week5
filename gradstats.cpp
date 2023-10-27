#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> nums;

    int grade=0;

    while (grade!=-1) {
        cout << "Enter grade (or -1 to end): ";
        cin >> grade;
        nums.push_back(grade);
    }
    
    nums.pop_back();  //removes -1 from list

    int sum=0;
    int avg=0;

    for (int i=0; i < nums.size(); ++i) {
        sum = sum + nums[i];
    }   

    cout << sum << endl;

    avg = sum / nums.size();
    cout << avg << endl;
    return 0;
}