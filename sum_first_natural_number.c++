#include <iostream>
using namespace std;
int sum_of_natural_numbers(int n)
{
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    // }
    // return sum;

    int sum = n * (n + 1) / 2;
    return sum;
}
int main()
{

    int n;
    cin >> n;

    int ans = sum_of_natural_numbers(n);
    cout << ans;

    return 0;
}