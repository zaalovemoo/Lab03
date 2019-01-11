#include <iostream>
using namespace std;
int main()
{
    double x=6,sum=0;
    while(x<20){
    sum=1/x+sum;
    x++;
    }
    cout<<sum;
    return 0;
}
