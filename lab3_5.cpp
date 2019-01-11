#include <iostream>
using namespace std;
int main(){
    string text1,text2;
    int N;
    cout<<"Enter the first text";
    cin>>text1;
    cout<<"Enter the second text";
    cin>>text2;
    cout<<"Enter N";
    cin>>N;
    for(int count=0;count<N;count++){
        if (count%2==0){
            cout<<text1<<"  ";
        }
        else{
            cout<<text2<<"  ";
        }
    }


}