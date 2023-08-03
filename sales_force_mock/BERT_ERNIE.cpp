#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    string reverse;
    for(int i=s.length()-1; i>=0; i--){
        reverse+=s[i];
    }   
    return reverse;
}

string modify(string s){
    if(s==reverse(s)){
        for(int i=0; i<s.length(); i++){

        }
    }
    else{
    for(int i=0; i<s.length(); i++){
        
    }
    }
}

vector<string> game(vector<string> ss){
vector<string> ans;
int n = ss.size();
for(int i=0; i<n; i++){
    int ernie = 0;
    int bert = 0;
    int player;
    string prev = "modify";


    if(ss[i]==reverse(ss[i])){
       ss[i] = modify(ss[i]);
        player++;
    }

    else if(ss[i]!=reverse(ss[i]) || prev!= "UD"){
        ss[i] = reverse(ss[i]);
    }
}
}


// int main(){
//     int n;
//     cin>>n;
//     vector<string> ss;

//     for(int i=0; i<n; i++)
//     {
//         cin>>ss[i];
//     }


    
//     for(int i=0; i<n; i++){
//     cout<<ss[i];
//     }

//     return 0;

// }