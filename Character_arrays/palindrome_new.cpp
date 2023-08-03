#include<iostream>
using namespace std;

int main()
{
   int n;
   char arr[n+1];

   cin>>n;
   cin>>arr;

   //palindrome
   bool check = true;
   for(int i = 0; i<=n; i++){

      if(arr[i]!= arr[n-i-1]){
        check = false;
        break;
      }
   }
   if(check == true){
      cout<<"It is a palindrome";
   }

   return 0;
}
   
