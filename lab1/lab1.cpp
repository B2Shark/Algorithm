#include <iostream>
using namespace std;

//problem 1
string reverse(string &str)
{
    string temp;
    size_t size = str.length();
    for(int i = 0 ; i < size ; ++i)
    {
        temp += str[size - (i+1)];
    }
    str = temp;
    return str;
}

//problem 2
bool check_unique_char(string &str)
{
    bool flag = true;
    for(int i = 0 ; i < str.length() ; ++i)
    {
        for(int j = i+1 ; j < str.length() ; ++j)
        {
            if(str[i] == str[j])
                flag = false;
        }
    }

    return flag;
}

//problem 3
void check_permulation_char(string &str1, string &str2)
{
    if(str1 == reverse(str2))
        cout<< "permulation"<< endl;
    else
        cout<< "not permulation";
}

int main()
{
    string str = "IUH_DSA";
    string str1 = "ASD_HUI";

    //reverse(str);
    cout << str << endl;

    if(check_unique_char(str))
        cout<< "unique character"<< endl;
    else
        cout<< "not unique character"<< endl;

    check_permulation_char(str,str1);

    

}