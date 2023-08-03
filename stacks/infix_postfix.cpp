#include<bits/stdc++.h>
using namespace std;



int prec(char c){

    if(c=='^')
    {
        return 4;
    }
    if(c=='*'||c=='/')
    {
        return 3;
    }

    if(c=='+'||c=='-')
    {
        return 2;
    }

    else
    {
        return -1;
    }
}

string infix_postfix(string s){
    string res;
    res =" ";
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='0'&&s[i]<='9')
        {
            res+=s[i];
        }
        if(s[i]=='('){
            st.push(s[i]);
        }

        if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();
            }

            if(!st.empty()){
                st.pop();
            }
        }

        if(s[i]=='+' || s[i]=='/' ||s[i]== '-' || s[i]=='*'){
            while(st.top()!='(' && (prec(st.top())>s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);

        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}



int main(){
    string s;
    cin>>s;

    cout<<infix_postfix(s);
return 0;
}

