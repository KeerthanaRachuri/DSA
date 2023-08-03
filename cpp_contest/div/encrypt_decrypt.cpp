#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    vector<string> ans;

    for(int i=0; i<t; i++){

        int n;
        cin>>n;

        string s;
        cin>>s;
        
        string a;
 
        int m = s.length();

        char elmnt = s[0];
        for(int i=1; i<m; i++)
        {
           if(elmnt==s[i])
             
             {
                a.push_back(s[i]);
                elmnt = s[i+1];
                i++;
                
             }
        }
          ans.push_back(a);
       
    }
    
    for(int i=0; i<ans.size(); i++){
       cout<<ans[i]<<endl;
    }

    return 0;
}