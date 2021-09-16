#include <iostream>
#include <string>
#include <cstring>
//AUTHOR : DOMINIC GELASI
//CLASS 278 LAB 2
//q2_b.CPP : FILE NAME

int main(){
std::string acc;
std::string pswrd;
std::string ref = "21_CSE_c++_Fall";
int i = 0;

        while(i != 1){
        std::cout<<"Enter account number:  ";
        std::cin >> acc;
        std::cout<<"Enter password: ";
        std::cin >> pswrd;
	if(strcasecmp(acc.c_str(), ref.c_str()) == 0  && pswrd =="278A&B"){
         std::cout<< "Login Succesfull \n";
         i= 1;
        }
        else{
         std::cout<< "Login Failed \n";
        }
	}
}

