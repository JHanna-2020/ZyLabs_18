//
// Created by John Hanna on 11/15/23.
//
#pragma once
using namespace std;
#include "../include/below.h"
#include <iostream>
#include <vector>   // Must include vector library to use vectors
int findBelow(){
    vector<int> userInts; // A vector to hold the user's input integers

    /* Type your code here. */

    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int temp;
        cin >> temp;
        userInts.push_back(temp);
    }
    int val = userInts[userInts.size() - 1];
    for(int i = 0; i< userInts.size(); i++){
        if(userInts[i] < val){
            cout << userInts[i] << ",";
        }
    }
    cout << endl;

    return 0;
};

