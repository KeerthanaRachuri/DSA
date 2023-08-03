#include<bits/stdc++.h>
using namespace std;


int largest_rectangle(int* arr, int n){
     int ans = 0;
     int i=0;
     stack<int> st;
     while(i<n){
        while(!st.empty() && arr[st.top()]>arr[i]){
            int t=st.top();
            int h = arr[t];
            st.pop();
            if(st.empty())
            {
                ans = max(ans, h*i);
            }
            else
            {
                int len = i-st.top()-1;
                ans = max(ans, h*len);

            }
        }
        st.push(i);
        i++;
     }
     return ans;

}


   
 
   


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<largest_rectangle(arr,n);
    return 0;
}