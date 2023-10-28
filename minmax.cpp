#include <iostream>
#include <vector>

using namespace std;

int main() {
    //task: generates 10 random numbers, store them in an array/vector, 
    //find the minimum and maximum in array/vector


    vector<int> minmax;
    int generateNum;

    //generate and store random numbers in vector
    for (int i=0; i<10; i++) {
        generateNum = rand() % 100 + 1;
        minmax.push_back(generateNum);
    }


    //finds the min and max in vector
    int max = 0;
    int min = minmax[0];
    int compareValMax = 0;
    int compareValMin = 0;

    for (int j=0; j<minmax.size(); j++) {

        compareValMax = minmax[j];
        compareValMin = minmax[j];

        // if max is smaller than current item in vector, store that item to max
        // stores maximum number in max variable
        if (max < compareValMax) {
            max = compareValMax;
        }
        // min is the first item in vector
        // compares to items in vector, if min is bigger than item in vector, update min
        if (min > compareValMin) {
            min = compareValMin;
        }
    }



    // print results
    //output the 10 random numbers
    cout << "Program generated 10 random integers between 0 and 100: " << endl;
    for (int i=0; i<minmax.size(); i++) {
        cout << minmax[i] << " ";
    }

    cout << "Maximum number is: " << max << " and Minimum number is: " << min;



    return 0;
}