using namespace std;

vector <string> hexToDecimal(string input)
{
    vector <string> digits;
    int decimalValue = 0;
    int length = input.size();

    for (int i = 0; i < length; ++i)
    {
        char hexDigit = input[length - 1 - i];
        int value;
        if (hexDigit >= '0' && hexDigit <= '9') {
            value = hexDigit - '0';
        } else if (hexDigit >= 'A' && hexDigit <= 'F') {
            value = hexDigit - 'A' + 10;
        } else if (hexDigit >= 'a' && hexDigit <= 'f') {
            value = hexDigit - 'a' + 10;
        } else {
            throw invalid_argument("Invalid hexadecimal character");
        }

        decimalValue += value * pow(16, i);
    }
    digits.push_back(to_string(decimalValue));
    return digits;
}