#include <iostream>
#include <unordered_set>
using namespace std;

class parkingLot
{
    int width;
    int height;
    int **lot;
    unordered_set<block *> blocks;

public:
    static bool isFull;
    // parkingLot(){};
    void generateLot(int w, int h)
    {
        if (w == 0 || h == 0)
        {
            throw new invalid_argument("weight and height should not be zero");
            return;
        }
        width = w;
        height = h;
        lot = new int *[h];
        for (int i = 0; i < h; i++)
        {
            lot[i] = new int[w];
        }

        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                lot[i][j] = 0;
            }
        }
    }

    void addVehical(vehical v)
    {
        if (parkingLot::isFull == true)
        {
            cout << "parking lot is full. Cant add vehical." << endl;
        }

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (lot[i][j] == 0)
                {
                    block *temp = new block(v, i, j);
                    blocks.insert(temp);
                }
            }
        }

        if (blocks.size() == (height * width))
        {
            parkingLot::isFull = true;
        }
    }

    void removeVehical(int i, int j)
    {
        if (j >= height && i >= width && i < 0 && j < 0)
        {
            cout << "Invalid co-ordinates." << endl;
        }

        for (block *b : blocks)
        {
            if (b->i == i && b->j == j)
            {
                delete b;
                blocks.erase(b);
                break;
            }
        }
    }

    void displayPlot()
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cout << lot[i][j] << " ";
            }
            cout << endl;
        }
    }
};

class vehical
{
    string name;

public:
    vehical() {}
    vehical(string name)
    {
        this->name = name;
    }
};

class block
{
    vehical v;
    int i;
    int j;
    friend class parkingLot;

public:
    block(vehical v, int i, int j)
    {
        this->v = v;
        this->i = i;
        this->j = j;
    }
};

bool parkingLot::isFull = false;

int main()
{
    parkingLot p;
    p.generateLot(10, 10);
    // p.displayPlot();
    return 0;
}