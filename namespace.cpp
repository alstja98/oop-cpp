#include <iostream>
using namespace std; //namespace를 지정해두면 std:: 를 쓸 필요가 없음

int main(){
    cout << "Enter the width >>";
    
    int width;
    cin >> width;

    cout << "Enter the height >>";

    int height;
    cin >> height;

    int area = width*height;
    cout << "The area is " << area << "\n";
}