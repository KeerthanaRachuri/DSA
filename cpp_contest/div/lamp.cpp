#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    //testcases
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        int c, d;
        for(int i=0; i<n; i++){
            cin>>c>>d;
            a.push_back(c);
            b.push_back(d);
           
        }
        int a_val=1;
        int temp = 1;
        int points = 0;
       while(a_val<= 200000){
         for(int j=0; j<n; j++)
         {
        if(a[i]==a_val)
        {
           if(b[i]>=temp)
           {
                temp = b[i];
           }
        
        }
        }
        points+= temp;
        a_val++;
       }
        
    cout<<points<<endl;
    }

    return 0;
    
}