// MIHIR OJHA (20205097)
// ECE - B
#include <bits/stdc++.h>

using namespace std;
/*TOWER OF HANOI
    we have three rods and n number of tiles to move from source 
    to festination using the helper rod.
*/


//n=3
void towerOfHanoi(int n, char source, char destination, char helper)
{
    if(n==0)
    {
        return;
    }

    //Moving stack of 2 to B rod 
    towerOfHanoi(n-1,source,helper,destination);
    cout<<"Moving from "<<source << " to "<<destination << endl;
    //Moving 2 tiles from B to C after the biggest tile is transferred to the last rod. 
    towerOfHanoi(n-1,helper,destination,source);
}
    int main()
{

    int numberOfTiles;
    cin >> numberOfTiles;
    towerOfHanoi(numberOfTiles,'A','B','C');
}