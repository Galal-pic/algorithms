#include <bits/stdc++.h>
using namespace std;
int fun(int i)
{
    if(i>100)
        return i-10;
    else
        return  fun(fun(i+11));
}
int main()
{
    cout<< fun(95);
    return 0;
}
