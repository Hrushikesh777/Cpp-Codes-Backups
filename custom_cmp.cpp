#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cus_cmp(int& a, int b){
    string str_a = to_string(a);  
    string str_b = to_string(b);
    int i = 0, j = 0;

    while(i != str_a.length() || j != str_b.length()){
        if(str_a[i] < str_b[j]){
            return false;
        }else if(str_a[i] > str_b[j]){
            return true;
        }else{
            if(i + 1 < str_a.length()){
                i++;
            }
            if(j + 1 < str_b.length()){
                j++;
            }
        }
    }  

    return true;
}

string largestNumber(vector<int> &A) {
    string op = "";
    sort(A.begin(), A.end(), cus_cmp);
    for(auto x : A){
        cout<<x<<"";
        op += to_string(x);
    }
    cout<<endl;

    return op;
}


int main() {
	// Your code goes here;

	return 0;
}