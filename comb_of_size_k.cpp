#include <iostream>
#include <vector>
using namespace std;

void comb(vector<int> ele, int k, int i, int n, int arr[])
{
    // cout<<"ele is : "<<endl;
    // for(int i = 0; i < ele.size(); i++){
    //     cout << ele[i] << " ";
    // }
    // cout << endl;
    if (i > n)
    {
        return;
    }

    if (ele.size() == k)
    {
        for (int i = 0; i < ele.size(); i++)
        {
            cout << ele[i] << " ";
        }
        cout << endl;
        return;
    }
    else{
        if(ele.size() > k){
            return;
        }
        // comb(ele, k, i + 1, n, arr);
        // ele.push_back(arr[i]);
        // comb(ele, k, i + 1, n, arr);
        int flag = 0;
        for(int j=i; j<n; j++){
            // cout<<"j is : "<<j<<endl;
            if(flag == 1){
                ele.pop_back();
            }
            ele.push_back(arr[j]);
            flag = 1;
            comb(ele, k, j+1, n, arr);
        }
    }
}

int main()
{

    int arr[] = {10, 2, 3, 4, 5, 7, 8};
    int r = 4;
    int n = 7;
    vector<int> ele;
    comb(ele, r, 0, n, arr);
    return 0;
}