#include<bits/stdc++.h>
using namespace std;

int prefix(string s){
    stack<int> st;
    for(int i=s.length()-1; i>=0; i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
        st.push(s[i]);

        }
      else
       {
        int operand1 = st.top();
        st.pop();
        int operand2 = st.top();
        st.top();
            
        switch(s[i]){
        case '+':
            st.push(operand1+operand2);
            break;
        
        case '*':
            st.push(operand1*operand2);
            break;
        
        case '^':
            st.push(operand1^operand2);
            break;

        case '-':
            st.push(operand1-operand2);
            break;
        
        case '/':
        st.push(operand1/operand2);
        break;

        case '%':
        st.push(operand1%operand2);
        break;
        }
      }

    }
    return st.top();
}

int main(){
    string s;
    cin>>s;
    cout<<prefix(s);
    return 0;
}
