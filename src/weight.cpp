//
// Created by John Hanna on 11/28/23.
//
#include <iostream>
#include <iomanip>              // For setprecision
#include <vector>               // Must include vector library to use vectors
using namespace std;

int calcWeights() {
    vector<double> weights;     // A vector to hold the user's input weights
    for(int i = 0; i < 5; i++){
        cout << "Enter weight " << i + 1 << ":" << endl;
        double temp;
        cin >> temp;
        weights.push_back(temp);
    }
    double sum = 0;
    for(int i = 0; i < weights.size(); i++){
        sum += weights[i];
    }
    double max;
    for(int i = 0; i < weights.size(); i++){
        if(i == 0){
            max = weights[i];
        }
        else if(weights[i] > max){
            max = weights[i];
        }
    }
    double avg = sum / weights.size();
    cout << fixed << setprecision(2);
    cout << "You entered: ";
    for(int i = 0; i < weights.size(); i++){
        cout << weights[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << "Total weight: " << sum << endl;
    cout << "Average weight: " << avg << endl;
    cout << "Max weight: " << max << endl;


    /* Type your code here. */

    return 0;
}