#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        int arr[n];
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<"FIRST"<<endl;
      
    
        while(1){
            //our move
        int temp = 0;
        int index_1;
        int opp_move;
        for(int i=0; i<n; i++){
            if(arr[i]>temp){
             temp = arr[i];
             index_1 = i;
            }
        }
        cout<<index_1<<flush;

        //opponents move
        cin>>opp_move;

        if(opp_move ==0 || opp_move == -1){
          break;
        }
        else {
       int d = min(temp, arr[opp_move]);
       arr[index_1]-= d;
       arr[opp_move]-= d;
        }


        }

    }

    return 0;
}