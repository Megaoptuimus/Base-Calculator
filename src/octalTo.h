using namespace std;

vector<string> octalToDecimal(int input)
{
    int digit = 0, i = 0, remainder;
    vector<string> digits; 
    while (input > 0)
    {
        remainder = input % 10;
        input /= 10;
        digit += remainder * pow(8, i);
        digits.push_back(to_string(digit));
        i++;
    }
    return digits;
};