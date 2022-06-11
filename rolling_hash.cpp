#include <bits/stdc++.h>

using namespace std;

int main()
{
    string txt = "AABAACBAA", pat = "BAA";
    int hpat = 0, htxt = 0;
    int d = 26;
    int p = 5381;
    for (int i = 0; i < pat.size(); i++)
    {
        hpat = (hpat * d) % p;
        hpat = hpat + (pat[i] - 'A' + 1);
        // cout<<"hpat is -> "<<hpat<<endl;
    }

    /*
    B -> 2
    A -> 
    */

    // cout<<"f hpat is -> "<<hpat<<endl;

    int l = 0, r = 0;
    while (r < txt.size())
    {   
        // cout<<"l -> "<<l<<" r -> "<<r<<endl;
        htxt *= d;
        htxt = htxt + ((txt[r] - 'A' + 1) % p);
        // cout<<"htxt is -> "<<htxt<<endl;
        if (r - l + 1 == pat.size())
        {
            if (htxt == hpat)
                cout << "Match at " << l << endl;
            htxt = htxt - (int)((txt[l] - 'A' + 1) * pow(d, r - l)) % p;
            l++;
        }
        r++;
    }
    return 0;
}