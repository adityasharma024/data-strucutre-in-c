#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        sort(A, A + n);
        bool flag=0;
        for (int i = 0; i < n; i++)
        {

            if (A[i] == A[i + 1])
            {
                flag = 1;
            }
            if(A[i]!=A[i+1]){
                flag=0;
            }
            break;
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        if( flag==0){
            cout<<"YES"<<endl;
        }
    }
}