#include<iostream>
using namespace std;

int main(){

    int val;
    cin>>val;


    int n;
    cin>>n; 

    int m;
    cin>>m;


    int arr[n][m];

    cout<<"Give sorted array"<<endl;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0;j<m; j++)
        {
           cin>> arr[i][j];
        }   
    }

// //normal way of doing it
// for(int i = 0; i<n; i++)
// {
//     for(int j = 0; j<m; j++)
//     {   

//         if(val>arr[i][j]){
//             cout<<"element not found";
//             break;
//         }
//         if(val==arr[i][j])
//         {
//            cout<<"element found";
//         }
//     }
// }



//sorted_array way

int r = 0; 
int c = m-1;
bool found = false;
while(r<n && c>=0){
    if(arr[r][c] == val){
        found = true;
        break;
    }

    if(arr[r][c] > val){
       c--;
    }

    if(arr[r][c] < val){
        r++;
    }
}

cout<<found;
return 0;
}