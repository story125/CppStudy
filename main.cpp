#include <iostream>
using namespace std;

void initializeValue(int **starNum,int ROW,int COLS)
{
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COLS;j++){
            starNum[i][j] = 0;
        }

    }
}

int main(void)
{
    int input;
    cout<< "Insert Number:";
    cin>>input;
    int **starNum = new int*[input];
    for(int i=0;i<input;i++){
        starNum[i] = new int[input];
    }
    initializeValue(starNum,input,input);

    for(int i=0;i<input;i++){
        delete[] starNum[i];
    }
    delete[] starNum;
    return 0;

}


