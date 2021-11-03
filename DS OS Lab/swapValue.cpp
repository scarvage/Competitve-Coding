// MIHIR OJHA (20205097)
// ECE - B
#include <bits/stdc++.h>

using namespace std;
//using third variable 
void swapByValue(int x,int y)
{
    int temp;
    temp = x; // temp = 10
    x = y; // x = 20
    y = temp;//
} 
void swapByReference(int *x,int*y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

//without using third variable

void swapByVal(int x,int y) //10 20
{
    x+=y; // x = 30
    y = x-y; //y = 10
    x-=y; // x = 20 

}

void swapByRef(int *x,int *y)
{
    *x+=*y; // x = 30
    *y = *x-*y; //y = 10
    *x-=*y; // x = 20 

}

int main() {

    int x,y;
    cin>>x>>y;

cout<<"Before Swapping" <<"x = " << x << "y = "<<y <<endl;

    //using third variable
    swapByValue(x,y);
    swapByReference(&x,&y);

    //without using third variable
    swapByVal(x,y);
    swapByRef(&x,&y);

    cout<<"After Swapping" <<"x = " << x <<" "<< "y = "<<y<<endl;
}