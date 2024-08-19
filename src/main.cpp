#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>
#include "binaryTo.h"
#include "decimalTo.h"
#include "octalTo.h"
#include "hexTo.h"

using namespace std;

string decimalToBinary(int input);
string decimalToOctal(int input);
string decimalToHex(int input);
vector<string> octalToDecimal(int input);

int main()
{
    int inputNumber, inputBase, outputBase;
    string outputNumber, inputNumberStr;


    cout << "Enter the base of your number: ";
    cin >> inputBase;

    cout << "Enter The Output Base: ";
    cin >> outputBase;

    cout << "Enter Your Number: ";
    cin >> inputNumber;
    inputNumberStr = to_string(inputNumber);

    switch(inputBase){
        case 2:
            switch(outputBase){
                case 8:
                    if(inputNumber == 0)
                    {
                        cout << "Octal Of This Number Is: 0";
                    }
                    else
                    {
                        string decimal = binaryToDecimal(inputNumber);
                        string octal = decimalToOctal(stoi(decimal));
                        cout << "Octal Of This Number Is: " << octal;
                    }
                    break;
                case 10:
                    if(inputNumber == 0)
                    {
                        cout << "Decimal Of This Number Is: 0";
                    }
                    else
                    {
                        string decimal = binaryToDecimal(inputNumber);
                        cout << "Decimal Of This Number Is: " << decimal;
                    }
                    break;
                case 16:
                    if(inputNumber == 0)
                    {
                        cout << "Hex Of This Number Is: 0";
                    }
                    else
                    {
                        string decimal = binaryToDecimal(inputNumber);
                        string hex = decimalToHex(stoi(decimal));
                        cout << "Hex Of This Number Is: " << hex;
                    }
                    break;
                default:
                    cout << "Invalid Output Base";
            }       
            break;
        case 8:
            switch(outputBase){
                case 2:
                    if(inputNumber == 0)
                    {
                        cout << "Binary Of This Number Is: 000" << endl;
                    }
                    else
                    {
                        vector<string> decimals = octalToDecimal(inputNumber);
                        string decimal;
                        cout << "Binary Of This Number Is: ";
                        for (int i = 1; i < decimals.size(); i++)
                        {
                            decimal += decimals[i];
                        }
                        string binary = decimalToBinary(stoi(decimal));
                        cout << binary;
                    }
                    break;
                case 10:
                    if(inputNumber == 0)
                    {
                        cout << "Octal Of This Number Is: 0" << endl;
                    }
                    else
                    {
                        vector<string> decimal = octalToDecimal(inputNumber);
                        cout << "Octal Of This Number Is: ";
                        for (int i = 1; i < decimal.size(); i++)
                        {
                            cout << decimal[i];
                        }
                    }
                    break;
                case 16:
                    if(inputNumber == 0)
                    {
                        cout << "Hex Of This Number Is: 0 "<< endl;
                    }
                    else 
                    {
                        vector<string> decimals = octalToDecimal(inputNumber);
                        string decimal;
                        cout << "Hex Of This Number Is: ";
                        for (int i = 1; i < decimals.size(); i++)
                        {
                            decimal += decimals[i];
                        }
                        string hex = decimalToHex(stoi(decimal));
                        cout << hex;
                    }
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
                    if(inputNumberStr == "0")
                    {
                        cout << "Decimal Of This Number Is: 0" << endl;
                    }
                    else
                    {
                        int decimal = hexToDecimal(inputNumberStr);
                        cout << "Decimal Of This Number Is: " << decimal;
                    }
                    break;
                default:
                    cout << "Invalid Output Base";
            }
            break;
        default:
            cout << "Invalid Input Base";
    }
}