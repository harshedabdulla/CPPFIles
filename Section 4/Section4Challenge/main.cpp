#include<iostream>
#include <stdio.h>
int main(){
    int fav;
    std::cout<<"Hello please enter a number between 1 and 100: "<<std::endl;
    std::cin>>fav;
    std::cout<<"Amazing!! Thats my favourite number too!"<<std::endl;
    std::cout<<"No really!!, "<<fav<<" is my favourite number too"<<std::endl;
    return 0;
}