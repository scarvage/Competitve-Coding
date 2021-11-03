// MIHIR OJHA (20205097)
// ECE - B
#include <bits/stdc++.h>

using namespace std;
#define ll long long

int linearSearch(int arr[],int l,int n,int key)
{
    //if index goes out of size
    if (n<l)
    {
        return -1;
    }
    //if the key is found
    if(arr[l]==key)
    {
        return l;
    }
    //incrementing the value of index and again following the step
    return linearSearch(arr,l+1,n,key);
    
}


int main() {
    //Size of array
    int n;
    cin>>n;

    //indexing set to 0
    int l=0;

    //taking in elements of array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //taking input of the number to find
    int key;
    cin>> key;
    

    int ans = linearSearch(arr,l,n,key);

    if (ans!=-1)
    {
        cout<<"The number is present in the Array";
    }else
    {
        cout<<"The number is not present";
    }
    
}