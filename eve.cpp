#include <iostream>
using namespace std;
int main(){
    int number;
    int min,max;
    cin >> min;
    cin >> max;
    for(number = min+1;number < max; number++)
         if(number % 2 ==0)
             cout<<number<<"\t";
    
    return 0;
}

