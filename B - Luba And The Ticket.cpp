#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int a[6];
    for(int i = 0; i < 6; i++)
    a[i] =(int)s[i]-'0';

    sort(a, a + 3);
    sort(a + 3, a + 6);

    int sum0 = a[0] + a[1] + a[2];
    int sum1 = a[3] + a[4] + a[5];

    if(sum0 > sum1)
    {
        swap(sum0, sum1);
        for(int i = 0; i < 3; i++)
        swap(a[i], a[i + 3]);
    }

    int c = 0;
    int i = 0;
    int j = 5;
    while(sum0 < sum1)
    {
        c++;
        if(9-a[i]>a[j])
        {
            sum0 +=9-a[i];
            i++;
        }
        else
        {
            sum1 -= a[j];
            j--;
        }
    }
    cout << c << endl;
}

