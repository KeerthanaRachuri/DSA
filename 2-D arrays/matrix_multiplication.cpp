#include<iostream>
using namespace std;


signed main(){
    int n;
    cin>>n; 

    int m;
    cin>>m;


    int p;
    cin>>p;

    int arr[n][m];
    int brr[m][p];
    int mul[n][p];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0;j<m; j++)
        {
           cin>> arr[i][j];
        }   
    }


    cout<<endl;

    
     for(int i = 0; i<n; i++)
    {
        for(int j = 0;j<m; j++)
        {
           cin>> brr[i][j];
        }   
    }
     
       for(int i = 0; i<n; i++)
    {
        for(int j = 0;j<p; j++)
        {
           mul[i][j] = 0;
        }   
    }
     

    //matrix_multiplication

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<p; j++)
        {
            for(int k = 0; k<m; k++)
            {
              mul[i][j] += arr[i][k]*brr[k][p];
            }
           
        }

    }
   for(int i = 0; i<n; i++)
    {
        for(int j = 0;j<p; j++)
        {
           cout<< mul[i][j]<<" ";
        }   
        cout<<endl;
    }

 
return 0;
}

