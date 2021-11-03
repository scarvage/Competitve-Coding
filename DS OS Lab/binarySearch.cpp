// MIHIR OJHA (20205097)
// ECE - B

#include <bits/stdc++.h>

using namespace std;
int binarySearch(int arr[],int low,int high,int key)
{
    int mid = low + (high-low)/2;

    if(low>high)
    {
        return -1;
    }
    if(arr[mid] == key)
    {
        return mid; 
    }
    else if(arr[mid]>key)
    {
        return binarySearch(arr,low,mid-1,key);
    }else
    {
        return binarySearch(Arr,mid+1,high,key);
    }
}
int main() {

    //Size of array
    int n;
    cin>>n;

    //indexing
    int low=0;
    int high = n-1;

    //taking in elements of array
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //taking input of the number to find
    int key;
    cin>> key;

    // sorting the array as binary search only applicable on sorted arrays
    int size = size(arr)
    sort(arr,arr+size);

    int ans = binarySearch(arr,low,high,key);


    if (ans!=-1)
    {
        cout<<"The number is present in the Array";
    }else
    {
        cout<<"The number is not present";
    }
   
}