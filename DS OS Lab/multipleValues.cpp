// MIHIR OJHA (20205097)
// ECE - B
#include <bits/stdc++.h>

using namespace std;
//Returning multiple values from a single function
void returnMultiple(int x,int y,int*sum,int*diff)
{
    *sum = x+y;
    *diff = x-y;
}
int main() {

    int sum,diff;
    sum =0;
    diff = 0;

    returnMultiple(35 , 15 ,&sum,&diff);
    cout<<"Sum is : "<<sum<<endl;
    cout<<"Difference is : "<<diff<<endl;
}