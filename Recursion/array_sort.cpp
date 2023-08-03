#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> v, int val){
  if(v.size()==0 || v[v.size()-1]<= val){
    v.push_back(val);
    return;
  }

   int temp = v[v.size()-1];
   v.pop_back();
   insert(v, val);
   v.push_back(temp);
}

void sort(vector<int> arr){
    //base condition
    if(arr.size()==1){
        return;
    }

  //hypothesis
  int val = arr[arr.size()-1];
  arr.pop_back();
  sort(arr);
  
  insert(arr, val);

return;
 
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int a;
    for(int i = 0; i<n;i++){
        cin>>a;
        arr.push_back(a);
    }

   
   sort(arr);

for(int i=0; i<n; i++){
    cout<<arr[i]<<endl;
}



     
    return 0;


}



