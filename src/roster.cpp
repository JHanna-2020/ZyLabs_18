//
// Created by John Hanna on 11/28/23.
//
#include <iostream>
#include <vector>
#include "../include/roster.h"

using namespace std;
int playerRoster() {
    vector<int> jersey;
    vector<int> rating;
    for (int i = 0; i < 5; i++) {
        cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
        int temp;
        cin >> temp;
        jersey.push_back(temp);
        cout << "Enter player " << i + 1 << "'s rating:" << endl;
        cin >> temp;
        rating.push_back(temp);
        cout << endl;
    }
    cout << "ROSTER" << endl;
    for (int i = 0; i < jersey.size(); i++) {
        cout << "Player " << i + 1 << " -- Jersey number: " << jersey[i] << ", Rating: " << rating[i] << endl;
    }
    cout << endl;
    cout << "MENU" << endl;
    cout << "a - Add player" << endl;
    cout << "d - Remove player" << endl;
    cout << "u - Update player rating" << endl;
    cout << "r - Output players above a rating" << endl;
    cout << "o - Output roster" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
    char choice;
    cout << "Choose an option:" << endl;
    cin >> choice;
    if (choice == 'q') {
        return 0;
    } else if (choice == 'o') {
        cout << "ROSTER" << endl;
        for (int i = 0; i < jersey.size(); i++) {
            cout << "Player " << i + 1 << " -- Jersey number: " << jersey[i] << ", Rating: " << rating[i] << endl;
        }
        cout << endl;
        cout << "MENU" << endl;
        cout << "a - Add player" << endl;
        cout << "d - Remove player" << endl;
        cout << "u - Update player rating" << endl;
        cout << "r - Output players above a rating" << endl;
        cout << "o - Output roster" << endl;
        cout << "q - Quit" << endl;
        cout << endl;
        cout << "Choose an option:" << endl;
        cin >> choice;
    } else if (choice == 'a') {
        cout << "Enter a new player's jersey number:" << endl;
        int temp;
        cin >> temp;
        jersey.push_back(temp);
        cout << "Enter the player's rating:" << endl;
        cin >> temp;
        rating.push_back(temp);
        cout << endl;

        cout << endl;
        cout << "MENU" << endl;
        cout << "a - Add player" << endl;
        cout << "d - Remove player" << endl;
        cout << "u - Update player rating" << endl;
        cout << "r - Output players above a rating" << endl;
        cout << "o - Output roster" << endl;
        cout << "q - Quit" << endl;
        cout << endl;
        cout << "Choose an option:" << endl;
        cin >> choice;
    } else if (choice == 'd') {
        cout << "Enter a jersey number:" << endl;
        int temp;
        cin >> temp;
        for (int i = 0; i < jersey.size(); i++) {
            if (jersey[i] == temp) {
                jersey.erase(jersey.begin() + i);
                rating.erase(rating.begin() + i);
            }
        }
        cout << endl;


    }
    return 0;
}
