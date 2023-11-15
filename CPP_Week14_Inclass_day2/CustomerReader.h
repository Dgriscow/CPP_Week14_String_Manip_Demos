#pragma once
#include <iostream>
#include <cctype>
using namespace std;

class CustomerReader {
private:
	const int SIZE = 8; // Array size

	bool testNum(char* custNum, int size);

	char* customer = new char[SIZE]; // To hold a customer number

public:
	void validateCustomer();




};