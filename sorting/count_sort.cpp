#include<bits/stdc++.h>
using namespace std;

void count_sort(int* arr, int m){
    
    int greatest = 0;

    for(int i=0; i<m; i++)
    {
        if(arr[i]>greatest)
        {
            greatest = arr[i];
        }
    }
    vector<int> count(greatest+1,0);

    for(int i=0; i<m; i++){
        count[arr[i]]++;

    }

    int j=0;
    int i=0;
    while(i<m && j<count.size()){
        while(count[j]!=0)
        {
            arr[i] = j;
            i++;
            count[j]--;
        }
        j++;
    }

return;
}


int main(){
   
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int m = sizeof(arr)/sizeof(int);
    count_sort(arr, m);
    
    for(int i=0; i<m;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}