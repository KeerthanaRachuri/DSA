#include<bits/stdc++.h>
using namespace std;

void merge(int* arr, int l, int mid, int r)
{
 int n1 = mid-l+1;
 int n2= r-mid-1;

 int a[n1];
 int b[n2];


 for(int i=0;i<n1;i++){
    a[i]=arr[l+i];
    
 }

 
 for(int i=0;i<n2;i++){
    b[i]=arr[mid+1+i];
 }

 int i=0;
 int j=0;
 while(i<n1 && j<n2)
 {
    if(a[i]<b[j])
    {
        arr[l+i+j]=a[i];
        i++;
    }

    else if(a[i]==b[j]){
        arr[l+i+j] = a[i];
        i++;
        j++;
    }

    else
    {
        arr[l+i+j]=b[j];
        j++;
    }

 }

 while(i<n1){
    arr[l+i+j] = a[i];
    i++;
 }
  while(j<n2){
    arr[l+i+j] = b[j];
    j++;
 }


return;
}


void merge_sort(int* arr, int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);
        merge(arr, l, mid, r);

    }
    return;
}

int main(){

    int arr[] = { 3, 5, 6, 9, 1, 7 , 2, 8};
    int n=8;
    merge_sort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
