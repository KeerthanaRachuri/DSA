#include<bits/stdc++.h>
using namespace std;

int area(int* arr, int n){
    stack<int> st;
    int i=0;
    int area = 0;
    
    while(i<n)
    {
        
        while(!st.empty() && arr[st.top()]<arr[i])
        {   
            int t = st.top();
            int h = arr[st.top()];
            st.pop();
            if(st.empty()){
                break;
            }
            
            
            if(arr[st.top()]>h && !st.empty())
            {
                int width = i-st.top()-1;
                area+= (min(arr[i], arr[st.top()]) - h)*(width);
            }
            
        }
        st.push(i);
        i++;
    }
    return area;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<area(arr, n);
    return 0;

}
