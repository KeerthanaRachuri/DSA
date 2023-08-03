#include<bits/stdc++.h>
using namespace std;

void infix_postfix(string &s)
{
    stack<char> st;
    stack<char> a;
    int flag = 0;
    
   for(int i=0; i<s.length(); i++)