#include<iostream>
#include<vector>

using namespace std;

void numberToBinary(int n, vector<int> &binary){
	if(n == 0){
		binary.push_back(0);
	}else if(n == 1){
		binary.push_back(1);
		binary.push_back(0);
	}else{
		for(int i=0;n>0;i++){
			binary.push_back(n%2);
			n = n/2;
		}
	}
}

int main(){
	int num;
	vector<int> binary;

	cout << "Introduzca el valor: ";
	cin >> num;
	
	numberToBinary(num, binary); 	
}
