#include <iostream>
#include <vector>

using namespace std;

int main() {
    //cout << "Hello World" << endl;

    //task: generates 10 random numbers, store them in an array/vector, 
    //find the minimum and maximum in array/vector


    vector<int> minmax;
    int generateNum;

    //generate and store random numbers in vector
    for (int i=0; i<10; i++) {
        generateNum = rand() % 100 + 1;
        minmax.push_back(generateNum);
    }

    //output the 10 random numbers
    cout << "Program generated 10 random integers between 0 and 100: " << endl;
    for (int i=0; i<minmax.size(); i++) {
        cout << minmax[i] << " ";
    }

    //finds the min and max in vector
    int max;
    int min;
    int compareVal;


    return 0;
}