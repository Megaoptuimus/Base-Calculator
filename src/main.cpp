#include <cmath>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


string decimalToBinary(int input)
{
    string output = "";
    while(input > 0)
    {
        int remainder = input % 2;
        if (remainder == 0)
        {
            output += "0";
        }
        else {
            output += "1";
        }
        input /= 2;
    }
    reverse(output.begin(), output.end());
    return output;
}

string decimalToOctal(int input)
{
    string output = "";
    while(input > 0)
    {
        int remainder = input % 8;
        output += to_string(remainder);
        input /= 8;
    }
    reverse(output.begin(), output.end());
    return output;
}

string octalToDecimal(int input) {
    int decimalNumber = 0, i = 0, remainder;
    while (input != 0) {
        remainder = input % 10;
        input /= 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
    }
    return to_string(decimalNumber);
}

string decimalToHex(int input)
{
    string output = "";
    while(input > 0)
    {
        int remainder = input % 16;
        switch(remainder)
        {
        case 10:
            output += "A";
            break;
        case 11:
            output += "B";
            break;
        case 12:
            output += "C";
            break;
        case 13:
            output += "D";
            break;
        case 14:
            output += "E";
            break;
        case 15: 
            output += "F";
            break;
        default:
            output += to_string(remainder);
        }
        input /= 16;
    }
    reverse(output.begin(), output.end());
    return output;
}

int main()
{
    int inputNumber, inputBase, outputBase;
    string outputNumber;


    cout << "Enter the base of your number: ";
    cin >> inputBase;

    cout << "Enter The Output Base: ";
    cin >> outputBase;

    cout << "Enter Your Number: ";
    cin >> inputNumber;

    switch(inputBase){
        case 2:
            switch(outputBase){
                case 8:
                    cout << "Base 8";
                    break;
                case 10:
                    cout << "Base 10";
                    break;
                case 16:
                    cout << "Base 16";
                    break;
                default:
                    cout << "Invalid Output Base";
            }       
            break;
        case 8:
            switch(outputBase){
                case 2:
                    cout << "Base 2";
                    break;
                case 10:
                    cout << "Base 10";
                    break;
                case 16:
                    cout << "Base 16";
                    break;
                default:
                    cout << "Invalid Output Base";
            }
            break;
        case 10:
            switch(outputBase){
                case 2:
                    if(inputNumber == 0)
                    {
                        cout << "Binary Of This Number Is: 0" << endl;
                    }
                    else
                    {
                        string binary = decimalToBinary(inputNumber);
                        cout << "Binary Of This Number Is: " << binary;
                    }
                    break;
                case 8:
                    if(inputNumber == 0)
                    {
                        cout << "Octal Of This Number Is: 0" << endl;
                    }
                    else 
                    {
                        string octal = decimalToOctal(inputNumber);
                        cout << "Octal Of This Number Is: " << octal;
                    }
                    break;
                case 16:
                    if(inputNumber == 0)
                    {
                        cout << "Hexadecimal Of This Number Is: 0" << endl;
                    }
                    else 
                    {
                        string hex = decimalToHex(inputNumber);
                        cout << "Hexadecimal Of This Number Is: " << hex;
                    }
                    break;
                default:
                    cout << "Invalid Output Base";
            }
            break;
        case 16:
            switch(outputBase){
                case 2:
                    cout << "Base 2";
                    break;
                case 8:
                    cout << "Base 8";
                    break;
                case 10:
                    cout << "Base 10";
                    break;
                default:
                    cout << "Invalid Output Base";
            }
            break;
        default:
            cout << "Invalid Input Base";
    }
}