#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class parkingLot{
    int width;
    int height;
    int **lot;
    vector<block> blocks;
public:
    static bool isFull;
    void generateLot(int w, int h){
        if(w == 0 || h == 0){
            throw new invalid_argument("weight and height should not be zero");
            return;
        }
        width = w;
        height = h;
        lot = new int*[h];
        for(int i = 0; i < h; i++){
            lot[i] = new int[w];
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                lot[i][j] = 0;
            }
        }
    }

    void addVehical(vehical v){
        if(parkingLot::isFull == true){
            cout<<"parking lot is full. Cant add vehical."<<endl;
        }

        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                if(lot[i][j] == 0){
                    block b(v, i, j);
                    blocks.push_back(b);
                }
            }
        }

        if(blocks.size() == (height * width)){
            parkingLot::isFull = true;
        }
    }

    void removeVehical(int i, int j){
        if(j >= height && i >= width && i < 0 && j < 0){
            cout<<"Invalid co-ordinates."<<endl;
        }

        for(int i =0; i < blocks.size(); i++){
            if(blocks[i].i == i && blocks[i].j == j){
                blocks.erase(blocks.begin() + i);
                break;
            }
        }
    }

    void displayPlot(){
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                cout<<lot[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

class vehical{
    string name;
public:
    vehical(){}
    vehical(string name){
        this->name = name;
    }
};

class block{
    vehical v;
    int i;
    int j;
    friend class parkingLot;
public:
    block(vehical v, int i, int j){
        this->v = v;
        this->i = i;
        this->j = j;
    }
};

int main(){
    parkingLot p;

    return 0;
}
