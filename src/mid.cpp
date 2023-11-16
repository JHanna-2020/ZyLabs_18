//
// Created by John Hanna on 11/15/23.
//
#pragma once
#include <iostream>
#include "../include/mid.h"
#include <vector>
using namespace std;
int mid(){

    int userNum;
    vector<int> userNums;
    cin >> userNum;
    while(userNum >0){
        userNums.push_back(userNum);
        cin >> userNum;
    }
    if(userNums.size() > 9){
        cout << "Too many numbers" << endl;
        return 0;
    }


    int mid = userNums.size()/2;
    cout << "Middle item: ";
    cout << userNums[mid] << endl;

    return 0;

}