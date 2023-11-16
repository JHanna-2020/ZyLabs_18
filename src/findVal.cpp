//
// Created by john4 on 11/15/2023.
//
#pragma once
#include <iostream>
using namespace std;
#include "../include/findVal.h"
#include <vector>   // Must include vector library to use vectors
int findVal(){
    vector<int> userInts; // A vector to hold the user's input integers
    int num;
    cin >> num;
    for(int i = 0; i < num+1; i++){
        int temp;
        cin >> temp;
        userInts.push_back(temp);
    }
    for(int i = 0; i<userInts.size(); i++){
        if(userInts[i] < userInts[userInts.size()-1]){
            cout << userInts[i] << ",";
        }
    }
    cout << endl;
    return 0;
}