#include<iostream>
using namespace std;
int binaryCounter(int n){
    int count = 1;
    while (n>1)
    {
        count++;
        n = n/2;
    }
    return count;
}

int main(){
    cout<<binaryCounter(10);

    return 0;
}