#include <iostream>
#include <string>
//AUTHOR : DOMINIC GELASI
//CLASS 278 LAB 2
//q2_a.CPP : FILE NAME

int main(){
std::string acc;
std::string pswrd;
int i = 0; 

	while(i != 1){
	std::cout<<"Enter account number:  ";
	std::cin >> acc;
	std::cout<<"Enter password: ";
	std::cin >> pswrd;
	if(acc == "21_CSE_c++_Fall"&& pswrd =="278A&B"){
	 std::cout<< "Login Succesfull \n";
	 i= 1;
	}
	else{
	 std::cout<< "Login Failed \n";	
	}	
}

}
