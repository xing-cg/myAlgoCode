#include<iostream>
#include<string>
using namespace std;
bool IsVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
       c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}
template<class T>
void Swap(T & a, T & b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
string reverseVowels(string s)
{
    int left = 0;
    int right = s.length() - 1;
    while(left < right)
    {
        while(left < right && !IsVowel(s[left]))
        {
            left++;
        }
        while(left < right && !IsVowel(s[right]))
        {
            right--;
        }
        if(left < right)
        {
            Swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    return s;
}
int main()
{
    string s = "leetcode";
    cout << s << endl;
    string newS = reverseVowels(s);
    cout << newS << endl;
}
