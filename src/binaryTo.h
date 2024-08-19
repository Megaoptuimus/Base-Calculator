using namespace std;

string binaryToDecimal(int input)
{
    int digit = 0, i = 0, remainder;
    string output = "";
    while (input > 0)
    {
        remainder = input % 10;
        input /= 10;
        digit += remainder * pow(2, i);
        i++;
        output = to_string(digit);
    }
    return output;
};