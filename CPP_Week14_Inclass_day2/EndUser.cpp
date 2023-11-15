#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main1() {

	string s = "", silly = " around we go till we all fall down";

	s = "The Pendulum Swings around and around the Grandfather Clock";

	int strLen = s.size();

	cout << "The Size of this string: \n" << s << "\nIs; \n" << "Size: " << strLen << endl << endl;
	 //resize the array 
	s.resize(30);
	
	int newLen = s.size();
	
	cout << "The New length is: \n" << newLen << endl << "New String is: \n" << s << endl << endl;

	//Append to the string 
	s.append(silly);

	//display new strin g
	cout << "Heres the new modifed string that had sections removed and a new part appended: \n" << s << endl << endl;

	//test on the newer string if it contains alphanumeric charecters
	
	char mystery = '9';

	if (isalpha(mystery)) {
		cout << "This statement is true";
	}
	else {
		cout << "this statement is false";
	}

	

	return 0;
}