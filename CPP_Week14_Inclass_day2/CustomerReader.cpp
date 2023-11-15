#include "CustomerReader.h"

bool CustomerReader::testNum(char* custNum, int size)
{
    int count; // Loop counter

    // Test the first three characters for alphabetic letters.
    for (count = 0; count < 3; count++)
    {
        if (!isalpha(*(custNum + count))) {
            return false;
        }

    }

    // Test the remaining characters for numeric digits.
    for (count = 3; count < size - 1; count++)
    {

        if (!isdigit(*(custNum + count))) {
            return false;
        }

    }
    return true;;
}

void CustomerReader::validateCustomer()
{
	//char* customer = new char[SIZE]; // To hold a customer number

    cout << "Enter a customer number in the form ";
    cout << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = numbers): ";
    cin.getline(customer, SIZE);

    if (testNum(customer, SIZE))
        cout << "That's a valid customer number.\n";
    else
    {
        cout << "That is not the proper format of the ";
        cout << "customer number.\nHere is an example:\n";
        cout << " ABC1234\n";
    }

    




}