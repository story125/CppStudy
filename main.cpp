#include <iostream>
using namespace std;


int main(int argc, char* argv[]) {

    int *pData = new int;
    int *pnewData = new int(10);
    *pData = 5;
    cout<<*pData<<endl;
    cout<<*pnewData<<endl;

    delete pData;
    delete pnewData;

    return 0;
}
