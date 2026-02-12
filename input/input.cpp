#include<iostream>
#include "input.h"

using namespace std;

TravelPreference getUserInput(){

    TravelPreference pref;

    cout<<"=====>>> Smart Trip Assistant <<<=====" << endl;
    cout<<"Please enter your travel information below.\n"<<endl;

    cout << "Budget [TH-Bath] : ";
    cin >> pref.budget;

    cout << "Number of travel days : ";
    cin >> pref.days;

    cout << "Number of people : ";
    cin >> pref.people;

    cout << "Do you have a private car? [1 = Yes , 0 = No] : ";
    cin >> pref.hascar;

    cin.ignore(); //clear เพราะเดี๋ยวจะใช้ getline

    cout << "Preferred travel style (Relax / Adventure / Foodie / Photography): ";
    getline(cin,pref.tripStyle);




}