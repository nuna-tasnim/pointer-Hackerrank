#include<iostream>
#include <cstdlib>
using namespace std;
void update(int *a,int *b) {
    int temp1=0;int temp2=0;
    temp1=abs(*a-*b);
    temp2=*a+*b;
    *a=temp2;
    *b=temp1;


}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(&a, &b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
