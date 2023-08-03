#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){}
    int A,B,C,k;
    cin>>A>>B>>C>>k;
    if(C>=A+B){
        int count;
        count=1;
        int ans_A = 0;
        int ans_B = 0;
        while(count<k)
        {
            ans_A++;
            ans_B= pow(10,C-1)-ans_A;
            count++;
            while(ans_A + ans_B<pow(10,C) && count<k)
            {
                ans_B++;
                count++;
            }
           
           
        }

        int ans = ans_A + ans_B;
        cout<<ans_A<<" "<<"+"<<" "<<ans_B<<" "<<"="<<" "<<ans<<endl;
    }
  return 0;
}