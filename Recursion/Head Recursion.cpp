#include <bits/stdc++.h>
using namespace std;
void fun(int i)
{
    if(i>0)
    {
        fun(i-1);
        cout<<i<<endl;
    }
}
int main()
{
    fun(5);
    return 0;
}
