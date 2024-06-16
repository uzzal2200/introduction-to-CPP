#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,s;
    cin>>a>>s;
    int mn=min(a,s);

    int mx=max(a,s);
    cout<<mn<<" "<<mx;
}