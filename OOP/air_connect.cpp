#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int t,n;
    vector<pair<int, int>> arr;
    cin>>t;

    cout<<fixed;
    cout<<setprecision(6);

    while(t--){
        cin>>n;
        pair<int, int> temp;
        for(int i=0; i<n; i++){
            cin>>temp.first;
            cin>>temp.second;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end());
        double op = 0;
        for(int i=1; i<arr.size(); i++){
            double dist1 = abs(arr[i - 1].first - arr[i].first) + abs(arr[i - 1].second - arr[i].second);
            double dist2 = sqrt((arr[i - 1].first - arr[i].first) * (arr[i - 1].first - arr[i].first) +
                                (arr[i - 1].second - arr[i].second) * (arr[i - 1].second - arr[i].second));

            // cout<<dist1<<" "<<dist2<<endl;

            if(dist1 == 1){
                continue;
            }

            if(dist1 < dist2){
                op += dist1;
            }else{
                op += dist2;
            }
        }

        cout<<op << endl;
    }
}