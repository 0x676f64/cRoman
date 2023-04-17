#include <iostream>
#include <vector>
#include <string>

using namespace std;

string decimal_to_roman(int decimal_number) {
    /*
     * Converts a decimal number to Roman numerals.
     */
    vector<pair<int, string>> roman_numerals = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };
    string roman_numeral = "";
    for (auto pair : roman_numerals) {
        int value = pair.first;
        string letter = pair.second;
        while (decimal_number >= value) {
            roman_numeral += letter;
            decimal_number -= value;
        }
    }
    return roman_numeral;
}

int main() {
    // Prompt the user to enter a decimal number
    int decimal_number;
    cout << "Enter a decimal number: ";
    cin >> decimal_number;

    // Convert the decimal number to Roman numerals
    string roman_numeral = decimal_to_roman(decimal_number);

    // Display the Roman numeral
    cout << decimal_number << " in Roman numerals is " << roman_numeral << endl;

    return 0;
}

