#include <iostream>
#include <string>
using namespace std;

int main(){
	int amount;
	float result;
	string currency;
	cout << "You can convert from dollars to: euro), Japanese yen, British pound, and Swiss fran" << endl;
	cout << "Enter amount of dollars you wannt to convert: ";
	cin >> amount;
	cout << "Enter to witch currency you want to convert(euro,yen,pound,franc): ";
	cin >> currency;
	float float_amount = (float)amount;
	if(currency == "euro"){
		result = float_amount * 0.83;}
	if(currency == "yen"){
		result = float_amount * 10928;}
	if(currency == "pound"){
		result = float_amount * 0.72;}
	if(currency == "franc"){
		result = float_amount * 0.91;}	
	cout << amount << " dollars is " << result << currency;
	return 0;	
}
