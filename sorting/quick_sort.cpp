#include<bits/stdc++.h>
using namespace std;
//timecomplexity = 0(n^2);

void swap(int* arr, int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    return;
}

int partition(int* arr, int l, int r){
    int pivot = arr[r];

    int i=l-1;
    for(int j=l; j<r; j++){
       if(arr[j]<arr[r])
       {   

            i++;
            swap(arr, i, j);
       }
       
    }
    swap(arr, i+1,r);

    return i+1;
}

// int partition(int* arr, int l, int r)
// {
    
//     int j=l;
//     int pivot = arr[r];
//     deque<int> d;
//     d.push_front(pivot);
//     int ans;

//     while(j<=r-l)
//     {
//         if(arr[j]<pivot){
//             d.push_front(arr[j]);
           
//         }
//         else
//         {
//             d.push_back(arr[j]);
            
//         }
//         j++;
//     }

//     for(int i=l; i<=r; i++){
//         arr[i] = d.front();
//         if(d.front() == pivot)
//         {
//             ans = i;
//         }
//         d.pop_front();
//     }
    
// return ans;

// }
void quick_sort(int* arr, int l, int r){
    if(l<r)
    {

        int pi = partition(arr,l,r);
        quick_sort(arr, l, pi-1);
        quick_sort(arr, pi+1, r);
    }
    return;
}
int main(){
   int arr[] = { 3, 5, 6, 9, 1, 7 , 2, 8};
    int n=8;
    quick_sort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


