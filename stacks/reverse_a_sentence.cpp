#include<bits/stdc++.h>
using namespace std;


// class stack{
//     int* arr;
//     int top;

//     public:
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

//     void push(int x){
//         if(top==n-1){
//             cout<<"stackoverflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top] = x;
//         return;
//     }

//     void pop()
//     {
//         if(top==-1){
//             cout<<"NO element found"<<endl;
//             return;
//         }
//         top--;   
//         return;
//     }
//     int Top(){
//         if(top==-1){
//             cout<<"No element in stack"<<endl;
//             return -1;
//         }
//        return arr[top];
//     }

//     bool empty(){
//         return top==-1;
//     }
// };

void reverse(string s){
    stack<string> st;
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        string word = " ";
        
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }

 while(!st.empty())
 {
    cout<<st.top()<<endl;
    st.pop();
 }
 return;
}
int main(){
    
    string s = "hey, how are u doing?";
    reverse(s);

   

    
    

    return 0;
}