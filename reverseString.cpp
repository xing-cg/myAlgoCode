#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s)
{
    int right = s.size() - 1;
    int left = 0;
    while(left < right)
    {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
template<class T>
void showVec(vector<T> &v)
{
    for(auto & val : v)
    {
        cout << val;
    }
    cout << endl;
}
int main()
{
    vector<char> vc = {'h', 'e', 'l', 'l', 'o'};
    showVec(vc);
    reverseString(vc);
    showVec(vc);
}
