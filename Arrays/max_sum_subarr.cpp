#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   int max_sum = -100;
   int sum;
   for(int i = 0; i<n; i++){
        int count = 0;
            sum = 0;
          while(count<=n-i-1){
            sum = 0;
            for(int j = i; j<=count+i; j++)
            {
                sum+= arr[j];
            }

            if(max_sum<sum){
                max_sum = sum;
                
            }
            count++;
            cout<<endl;
          }
}

cout<<max_sum;


return 0;
}
