#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main(){
    int t;
    cin>>t;

    vector<int> ans;

    for(int i=0; i<t; i++){
        int n;
        int k;
        cin>>n>>k;
        int max_elmnts;
        
        
        for(int i=0; i<k; i++)

        {   
        
            if(pow(2,i)>n)
            {
               max_elmnts = i;
                break;
            }

            else if(pow(2,i)==n){
                max_elmnts = i+1;
                break;
            }
        }
        
    }

  for(int i=0; i<ans.size(); i++){
       cout<<ans[i]<<endl;
    }

    return 0;
}