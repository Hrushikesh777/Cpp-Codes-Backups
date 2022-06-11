#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> op;

void generate_comb(string temp, int weight, int n, int x, int y)
{
    // cout<<"temp is : "<<temp<<" "<<x<<" "<<y<<endl;
    if (temp.length() == n && weight == 0 && x == 0 && y == 0)
    {
        op.push_back(temp);
        cout << temp << endl;
        return;
    }

    if (weight == 0 && x > 0)
    {
        cout<<"if"<<endl;
        temp += "(";
        generate_comb(temp, weight + 1, n, x-1, y);
    }

    else if (weight > 0)
    {
        if (x > 0)
        {
            temp += "(";
            generate_comb(temp, weight + 1, n, x-1, y);
            temp.pop_back();
        }

        if (y > 0)
        {
            temp += ")";
            generate_comb(temp, weight - 1, n, x, y-1);
            temp.pop_back();
        }
    }
}

int main(){
    string temp = "";
    generate_comb(temp, 0, 2*3, 3, 3);

    for(auto it:op){
        cout<<it<<endl;
    }
    return 0;
}