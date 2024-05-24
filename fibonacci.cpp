// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int f(int N){
    if(N==0)
    return 0;
    return N+f(N-1);
}
    
int main() {
    int n;
    cin>>n;
   cout<<f(n)<<endl;
   
    return 0;
}