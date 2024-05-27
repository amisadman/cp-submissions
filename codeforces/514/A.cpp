#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    for(int i =0;i< s.length();i++)
    {
        if(s[i] > '4') s[i] = '9' - s[i] + '0';
    }
    if(s[0] == '0') s[0] = '9';
    cout << s << endl;
    
    return 0;
}

/*
Leanings : 
for number reverse the logic is -> num2 = num2*10 + temp;
for making the number same as before -> num2 = temp*pow(10,it)+num2
But pow function is bad.Sometimes it doesn't give the correct output.Thats why using strings are better.
*/