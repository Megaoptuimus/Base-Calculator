using namespace std;

int hexToDecimal(const string& hexStr) {
    int decimalValue = 0;
    int base = 1; //16^0, minimum base power

    //reads hex string right to left
    for (int i = hexStr.size() - 1; i>=0; --i) {
        char hexDigit = hexStr[i];
        int decimalDigit;

        //hex to decimal conversion logic
        if (isdigit(hexDigit)) {
            decimalDigit = hexDigit - '0';
        }
        else {
            hexDigit = toupper(hexDigit); // upper case conversion
            decimalDigit = hexDigit - 'A' + 10; //A to F converted to 10-1
        }
        //calculate decimal value
        decimalValue += decimalDigit * base;
        base*=16;
    }
    return decimalValue;
};