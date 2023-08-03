#include<iostream>
using namespace std;

class person{
    string test;
    public:
    string name;
    int age;
    bool working;
    
    //defining functions 
    void getinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<working<<endl;
        cout<<test<<endl;
    }

    void setname(string s){
         name = s;
    }

     void getname(person &a)
     {
       cout<<a.name<<endl;
     }
   

    //default constructor
    person(){
    }
    //parametarised constructor
    person(string s, int a, bool b){
      name = s;
      age = a;
      working = b;

    }

   ~person(){
    cout<<"Destructor called"<<endl;
    }

};

int main(){
    person a;
    person b("rushill", 19, 1);
    cout<<b.working<<endl;
    b.getinfo();

    return 0;


//inheritance - 5 types
// Single Inheritance.
// Multiple Inheritance.
// Multilevel Inheritance.
// Hierarchical Inheritance.
// Hybrid Inheritance.


//polymorphism - 2 types


}


