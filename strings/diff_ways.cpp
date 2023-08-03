#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(){

    //declaring a string
    string str;
    str = "rushill";
    cout<<str<<endl;


   //declaring a string with repeated character
    string str1(6,'n');
    cout<<str1<<endl;

   //declaring a sentence using a string
    string str2;
    getline(cin, str2);
    cout<<str2<<endl;

   // appending
   string s1 = "fam";
   string s2 = "ily";
   s1.append(s2);//s1 =s1+s2
   cout<<s1<<endl;

   //clear
   s1.clear();
   cout<<s1<<endl;
   //empty
   if(s1.empty()){
    cout<<"s1 is empty"<<endl;

    //compare
    s1 = "abc";
    string s3 = "xyz";

    cout<<s1.compare(s3)<<endl;
   }

   //erase

   string s4 = "nicompoop";
   s4.erase(4,5);
   cout<<s4<<endl;

   //find
   string s5 = "nicompoop";
   cout<<s5.find("poop")<<endl;

   //insert
   s5.insert(5, "lol");
   cout<<s5<<endl;


   //string to integer
   string s6 = "786";
   int x = stoi(s6);
   cout<<x<<endl;

   //to string
   int y = 786;
   string s7;
   s7 = to_string(y);
   cout<<s7<<endl;
   

   //string sorting
   string s8="cwseyhfguksifyhise";
   sort(s8.begin(), s8.end());
   cout<<s8<<endl;
   return 0;



}