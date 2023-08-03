#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    s = "FDJSGFSGFSGR";
    transform(s.begin(), s.end(), s.begin(), ::tolower);//toupper for upper
    cout<<s<<endl;

    return 0;

}