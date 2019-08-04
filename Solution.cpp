#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    int k;
    int arr[50];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int khara=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0 && arr[i]>=arr[k-1])
        {
            khara++;
        }
    }
    cout <<khara<<endl;
    return 0;
}
