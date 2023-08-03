#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    

    int max_sum = -1000;
    int sum;
    
    for(int i = 0; i<n; i++)
    {  
          int j = i;
          sum = 0;
          while(j<n)
          {
            
            sum+= arr[j];

            if(max_sum<sum){
                max_sum = sum;
            }

            if(j==n-1)
            {
              for(int j = 0; j<i; j++){
                sum+= arr[j];
                if(max_sum<sum){
                    max_sum = sum;
                }
              }
            }
         j++;
            
          
         }

    }

    
    std::cout<<max_sum;
    return 0;
    }

