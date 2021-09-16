#include <iostream>
#include <string>
int main(){
//VARIABLE===================================================
int min = 65536;
int max = -65536;
int i = -1;
int length = 0;
int temp;
//START USER INPUTS===================================================
	std::cout<<"Enter the Length of your array (max 20)";
	std::cin>>length;
	int nums[length];
	if(length<= 20){
		i = 0;
	while(i<=length-1 || i==0){
	   std::cout<<"Enter the value for position "<< i<<" " ;
	   std::cin>>temp;
	   if(temp <=65535 || temp>=-65535 ){
	  	nums[i] = temp;
		i++;	
		if(temp < min){
		  min =  temp;
		}
		if(temp>max){
		  max = temp;
		}	
	   }   
	   
	
	}
	}
	std::cout<<"MAX OF THE ARRAY : ";
	std::cout<< max << " ";
	std::cout<<" MIN OF THE ARRAY : ";
	std::cout<< min<< " "; 
	std::cout<<"Length : ";
	std::cout<<  i;


}
