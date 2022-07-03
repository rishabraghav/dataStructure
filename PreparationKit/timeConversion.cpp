#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s)
{
    int index = s.length() - 2;

    int first, second;
    first = s[0] - '0';
    second = s[1] - '0';
    int hr = first * 10 + second;
    string hrs;

    if (s[index] == 'A')
    {
        s.pop_back();
        s.pop_back();
        if (s[0] == '1' && s[1] == '2')
        {

            hrs = to_string(hr - 12);
            string sub = s.substr(2, 8);
            hrs.append("0");
            hrs.append(sub);
            return hrs;
        }
    } else {
        s.pop_back();
        s.pop_back();
        if (s[0] == '1' && s[1] == '2'){
            return s;
        } else {    
            hrs = to_string(hr + 12);
            string sub = s.substr(2, 8);
            hrs.append(sub);
            return hrs;
        }
        
    }
    return s;
}

int main()
{
    string s;

    getline(cin, s);

    cout << "Converted time into 24 HRS is " << timeConversion(s);
    return 0;
}