#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[61];
    arr[0]=0; arr[1]=0; arr[2]=1;
    for(int i=3; i<61; i++){arr[i]=(arr[i-1]+arr[i-2])%10;}
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int n,k;
        cin>>n;
        k=log2(n);
        k=pow(2,k);
        k %= 60;
        k = k?k:1;
        cout<<arr[k]<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[61]={0, 0, 1, 1, 2, 3, 5, 8, 3, 1, 4, 5, 9, 4, 3, 7, 0, 7, 7, 4, 1, 5, 6, 1, 7, 8, 5, 3, 8, 1, 9, 0, 9, 9, 8, 7, 5, 2, 7, 9, 6, 5, 1, 6, 7, 3, 0, 3, 3, 6, 9, 5, 4, 9, 3, 2, 5, 7, 2, 9, 1};
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int loc = 0;
        long long int loop=0;
        while(n-1)
        {
            n/=2;
            loop++;
        }
        loc=pow(2,loop);
        loc %= 60;
        loc = loc?loc:1;
        cout<<arr[loc]<<endl;
    }
}