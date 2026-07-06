// FACTORIAL USING RECURSION

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int func(int n){
   if(n==1 || n==0){
    return 1;
   } 
   
    return n*func(n-1);
   
    
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
   cout<< func(n);
    return 0;
}