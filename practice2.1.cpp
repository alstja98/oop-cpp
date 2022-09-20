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