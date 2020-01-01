#include<iostream>
using namespace std;
int main(){
	cout << "Enter Number to Check: ";
	int number;
	cin >> number;
	if(number == 0){
		cout << "Number is not Prime";
		goto out;
	}
	if((number == 2)|| (number == 3)||((number/number == 1) && (number > 1) && (number%2 != 0) && (number%3 != 0))){
		cout << "Number is Prime";
	}else{
		cout << "Number is not Prime";
	}
out:	return 0;
}
