#include<iostream>
#include<utility>
using namespace std;
void my_swap(int *a,int *s)
{
    int temp=*a;
    *a=*s;
    *s=temp;
}
int main()
{
    int a,s;
    cin>>a>>s;
    swap(a,s);
    cout<<a<<" "<<s;
    return 0;
}