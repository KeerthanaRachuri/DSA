#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr, n);
    //cin.ignore();

    int count = 0;
    int max_count = 0;
    int i = 0;
    while(1)
    {
        if(arr[i] == ' '|| arr[i] =='\0')
        {
            if(count>max_count){
                max_count = count;
            }
            count = 0; 
        }
        else{
        count++;
        }

        if(arr[i] == '\0'){
            break;
        }
      i++;
    }

    cout<<max_count;

    return 0;
}