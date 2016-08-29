//
//  main.cpp
//  Book Exercise 2.7
//
//  Created by ax on 8/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Get current time in GMT
//

#include <iostream>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Current GMT Time \n";
    
    // Data store
    int gmt_offset_num = 0;
    
    // I
    cout << "Enter the time zone offset to GMT: ";
    cin >> gmt_offset_num;
    
    
    // P

    // total seconds since epoch
    int total_seconds = time(0);
    
    // current second in the minute in the hour
    int current_second = total_seconds % 60;
    
    // total minutes sinch epoch
    int total_minutes = total_seconds / 60;
    
    // compute current minute in the hour
    int current_minute = total_minutes % 60;
    
    // obtain the total hours
    int total_hours = total_minutes / 60;
    
    // compute the current hour
    int current_hour = total_hours % 24;
    
    // offset the current hour from GMT
    int gmt_offset_hour = current_hour + gmt_offset_num;
    
    
    // O
    cout << "Current time: " << current_hour << ":" << current_minute << ":" << current_second << " GMT" << endl;
    cout << "The current time is: " << gmt_offset_hour << ":" << current_minute << ":" << current_second << " GMT" << endl;
    
    return 0;
}
