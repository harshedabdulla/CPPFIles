
#include<iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
/* psuedocode:
 * harshed carpet clean intro
 * ask how many small rooms
 * ask how many large rooms
 * show the amount per room for large
 * show the amount per room for small room
 * show total amout
 * show tax
 * show total after tax
 * show ==================
 * valid for 30 days 
 * thank you */
int main(){
    
    cout<<"Hello!! Welcome to Harsheds carpet cleaning system"<<endl;
    int no_of_large_rooms {0};
    int no_of_small_rooms {0};
    cout<<"How many large rooms to be cleaned: ";
    cin>>no_of_large_rooms;
    cout<<"How many small rooms to be cleaned: ";
    cin>>no_of_small_rooms;
    double amt_for_large_room {30};
    double amt_for_small_room {20};
    double total_tax {.06};
    cout<<"Amount for each large room: $"<<amt_for_large_room<<endl;
    cout<<"Amount for each small room: $"<<amt_for_small_room<<endl;
    cout<<"Amount for the large room: $"<<amt_for_large_room*no_of_large_rooms<<endl;
    cout<<"Amount for the small room: $"<<amt_for_small_room*no_of_small_rooms<<endl;
    cout<<"Total cash = $"<<amt_for_large_room*no_of_large_rooms+amt_for_small_room*no_of_small_rooms<<endl;
    cout<<"Total tax = $"<<(amt_for_large_room*no_of_large_rooms+amt_for_small_room*no_of_small_rooms)*0.06<<endl;
    cout<<"========================================="<<endl;
    cout<<"Total payment = $"<<(amt_for_large_room*no_of_large_rooms+amt_for_small_room*no_of_small_rooms)+((amt_for_large_room*no_of_large_rooms+amt_for_small_room*no_of_small_rooms)*0.06)<<endl;
    cout<<"Valid for only 30 days"<<endl;
    cout<<"Thank you!"<<endl;
    
    return 0;
}