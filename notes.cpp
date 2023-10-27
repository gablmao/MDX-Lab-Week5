#include <iostream>

using namespace std;

int main() {

    cout << "hello world" << endl;

    return 0;
}

/*
TODAY'S TASK STUFF:
> using vectors/arrays and loops
    > difference between vectors and arrays is that vectors can change its size dynamically
    arrays are static data structures
    > MAKE SURE TO #include <vector> for vectors to work

> to make a vector
    > std::vector<int> nums;
        > "nums" is the name of the vector
        > <int> is the data type it supports
    > or vector<int> nums = {list of items...}
    > to add elements in the vector
        > nums.push_back(int);
        > or do the second point above


> if you want to iterate over vectors, use loops

----------------EXAMPLE CODE-----------------
int main() {
    vector<int> nums = {1, 2, 3};

    for (i=0; i<nums.size(); i++) {
        cout << nums[i];
    }
}
----------------EXAMPLE CODE------------------
*/