#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int cnt = 0;
        for(int i=n; i>0; i/=2)
        {
            if(i%2 == 1)
            {
                cnt++;
            }   
        }
        if(cnt%2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }  
    }
    return 0;
}
