#include <iostream>
#include <string>
int main(){
int width = 0;
int height = 0;
//AUTHOR : DOMINIC GELASI
//CLASS 278 LAB 2
//Q1.A.CPP : FILE NAME

std::cout<<"Enter a number for width : ";
std::cin >> width;
std::cout<<"Enter a number for height : ";
std::cin >> height;

std::cout<<"The Perimeter is: "<< (width*2) +(height *2)<<"The area is:  "<< height*width <<"\n"<<std::ends;

}
