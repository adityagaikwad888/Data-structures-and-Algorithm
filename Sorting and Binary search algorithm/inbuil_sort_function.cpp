// all header file in cpp are included in one header file names  stdc++.h
#include <stdc++.h>
using namespace std;

int main()
{  
    int n; 
    cin>>n;

    int a[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    // sort(v.begin(),v.end(),greater<int>());    // this function sort a vector in decreasing order
    for (int i = 0; i < n ; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}