#include <iostream>

int main(){
    for(int i=1; i<101; ++i)
    {
        for(int j=1; j<11; ++j)
        {
            if(i == 10*j+1)
            {
                std::cout << "\n";
            }
        }
        std::cout<<i << "\t";
    }
    return 0;
}

/* 강사님 코드
using namespace std;

int main() {
    for(int i=1; i<=100; i++){
        cout << i;
        if(i % 10 == 0)
            cout << '\n';
        else
            cout << '\t';
    }
}

*/