#include <bits/stdc++.h> 
using namespace std; 
int countDigit(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
int main(void) 
{ 
    long n;
    cin>>n;
    cout<< countDigit(n); 
    return 0; 
} 
  
