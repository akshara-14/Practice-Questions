#include <iostream>
#include <string>

using namespace std;

// Function to encode a string using NRZ 1 encoding
string encodeNRZ1(string str)
{
    string encoded = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            encoded += "+";
        }
        else
        {
            encoded += "-";
        }
    }

    return encoded;
}

// Function to encode a string using NRZ 2 encoding
string encodeNRZ2(string str)
{
    string encoded = "+";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            if (encoded.back() == '+')
            {
                encoded += "-";
            }
            else
            {
                encoded += "+";
            }
        }
        else
        {
            encoded += encoded.back();
        }
    }

    return encoded;
}

// Function to encode a string using Manchester encoding
string encodeManchester(string str)
{
    string encoded = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            encoded += "-+";
        }
        else
        {
            encoded += "+-";
        }
    }

    return encoded;
}

// Function to encode a string using Differential Manchester encoding
string encodeDiffManchester(string str)
{
    string encoded = "";
    char last = '-';

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            if (last == '-')
            {
                encoded += "+-";
                last = '+';
            }
            else
            {
                encoded += "-+";
                last = '-';
            }
        }
        else
        {
            if (last == '-')
            {
                encoded += "-+";
                last = '-';
            }
            else
            {
                encoded += "+-";
                last = '+';
            }
        }
    }

    return encoded;
}

int main()
{
    // Test the encoding functions
    string str = "0101";
    string encoded = encodeNRZ1(str);
    cout << "NRZ 1 encoding of " << str << " : " << encoded << endl;

    encoded = encodeNRZ2(str);
    cout << "NRZ 2 encoding of " << str << " : " << encoded << endl;

    encoded = encodeManchester(str);
    cout << "Manchester encoding of " << str << " : " << encoded << endl;

    encoded = encodeDiffManchester(str);
    cout << "Differential Manchester encoding of " << str << " : " << encoded << endl;

    return 0;
}
