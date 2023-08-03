#include<iostream>
using namespace std;

signed main(){

    int n;
    cin>>n;

    int m;
    cin>>m;

    int arr[n][m];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
        cin>>arr[i][j];
        }
        cout<<endl;
    }


    int row_start = 0;
    int row_end = n-1;
    int column_start = 0;
    int  column_end = m-1;

  while(row_start<=row_end && column_start<=column_end){
       //row_start gets printed
       for(int col = column_start; col<=column_end; col++){
        cout<< arr[row_start][col];
       }
       row_start++;

       //end_column gets printed
       for(int row = row_start; row<=row_end; row++){
        cout<< arr[row][column_end];
       }

       column_end--;

       //end_row gets printed
       for(int col = column_end; col>= column_start; col--){
        cout<< arr[row_end][col];
       }

       row_end--;

       //first column gets printed

       for(int row = row_end; row>= row_start; row--){
        cout<< arr[row][column_start];
       }

       column_start++;

  }
return 0;
}
