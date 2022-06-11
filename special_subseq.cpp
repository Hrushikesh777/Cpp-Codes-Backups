#include <iostream>
#include <cmath>
#include <set>
#include <bitset>
using namespace std;
set<string> st;

void make_seq(string temp, int k)
{
    if (k == temp.length())
    {
        return;
    }

    for (int i = k; i < temp.length(); i++)
    {
        temp[i] = toupper(temp[i]);
        // cout<<"in fun "<<temp<<endl;
        st.insert(temp);
        make_seq(temp, i + 1);
        temp[i] = tolower(temp[i]);
    }
    return;
}

int main()
{
    //code

    int t;
    cin >> t;

    while (t--)
    {
        st.clear();

        string str;
        cin >> str;

        for (int i = 1; i < pow(2, str.length()); i++)
        {
            string temp = "";
            bitset<12> bst(i);
            for (int i = 0; i < 12; i++)
            {
                if (bst[i])
                {
                    temp += str[i];
                }
            }
            // cout<<temp<<"\n";
            st.insert(temp);
            make_seq(temp, 0);
        }
        for (auto itr = st.begin(); itr != st.end(); itr++)
        {
            cout << *itr << "\n";
        }
    }
    return 0;
}