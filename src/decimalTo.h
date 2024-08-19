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
};

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
};

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
};