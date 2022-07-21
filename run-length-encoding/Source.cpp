#include <vector>
#include <iostream>
#include <string>

using namespace std;

string runLengthEncoding(string str);

int main()
{
    string result = runLengthEncoding("AAAAAAAAAAAAABBCCCCDD");

    cout << result << " ";
    return 0;
}

string runLengthEncoding(string str) {
    // Write your code here.
    int count = 0;
    string resultString;

    if (str.empty())return"";

    for (int i = 1; i < str.length() + 1; i++)
    {
        if (count == 9)
        {
            resultString += to_string(count);
            resultString += str[i - 1];
            count = 0;
        }
        if (str[i] != str[i - 1])
        {

            count++;
            resultString += to_string(count);
            resultString += str[i - 1];
            count = 0;
            continue;
        }

        count++;
    }



    return resultString;
}
