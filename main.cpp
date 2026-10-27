#include<iostream>
using namespace std;
int func2() {
    cout<<"Function 2 called";
    return 0;
    }
int loopfunc() {
    for(int i=1;i<=5;i++) {
        cout<<i<<endl;
        return 0;
    }
    return 0;
}
int func() {
    cout<<"Function called";
    return 0;
}
int main() {
    cout<<"Hello World!";
    func();
    func2();
    loopfunc();
    return 0;
    // program will terminate here and the below code will not be executed
}