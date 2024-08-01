#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<int> a;
    set<int> b(a.begin(), a.end());
    int result = 0;

    while(b.count(result))
        ++result;

    return result;
}