#include<iostream>
#include<vector>
#include <math.h>

using namespace std;

void reverseString(string &str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
}

void numberToBinary(string n){
	int number=0;
	for(int i=0;i<n.length();i++){
		int result=0;
		if(n[i] == '1'){
			if(i == 0){
				number += 1;
			}else if(i == 1){
				number += 2;
			}else{
				result = pow(2, i);
				number += result;
			}	
		}
	}
	cout << number;	
}

int main(){
	string num;

	cout << "Introduzca el valor: ";
	cin >> num;

	reverseString(num);	
	cout << num << endl;
	numberToBinary(num); 	
}
