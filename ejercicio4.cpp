#include <iostream>
using std::cout;

int main() {
    int l=3;
    int r=5;
    while (l<9){
        for (int i=1;i<l;i++){
            cout<<i;
        }
        for (int i=0;i<r;i++){
            cout<<"*";
        }
        cout<<"\n";
        l++;
        r--;
    }


    return 0;
}
