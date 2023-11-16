#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int reverseList() {
    vector<int> userInts; // A vector to hold the user's input integers

    /* Type your code here. */

    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        userInts.push_back(temp);
    }
    for(int i = userInts.size() - 1; i >= 0; i--){
        cout << userInts[i] << ",";
    }
    cout << endl;

    return 0;
};
