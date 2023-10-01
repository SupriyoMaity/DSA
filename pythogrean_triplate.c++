#include <iostream>
#include <cmath>
using namespace std;
bool Pythagorean_Triplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if(a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(Pythagorean_Triplet(x, y, z)){
        cout<<"it is pythogorean_triplate";
    }
    else{
        cout<<"not pythogorean triplate";
    }

    return 0;
}