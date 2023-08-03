#include<bits/stdc++.h>
using namespace std;

bool balanced_paranthesis(string s)
{
    stack<char> st;
    int i=0;
    while(s[i]!=')' && s[i]!='}' && s[i]!=']')
    {
        st.push(s[i]);
        i++;
    }

    while(!st.empty())
    { 
        
       st.pop();
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    cout<<balanced_paranthesis(s);
    return 0;
    
}