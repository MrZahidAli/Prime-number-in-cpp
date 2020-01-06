#include<iostream>
using namespace std;
int main(){
	cout << "Enter Number to Check: ";
	int limit;
	cin >> limit;

/*	 Method 1

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
*/

//Method 2
bool g = false;
	for(int number = 2; number <= limit; number++){
		for(int factor = 2; factor < number; factor++){
			if(number % factor == 0){
				g =  false;
				break;
			}else{
				g = true;
				break;
			}
		}
		if(g){
			cout << number;
		}
	}
	return 0;
}
