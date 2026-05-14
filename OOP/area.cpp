#include <iostream>
using namespace std;

    float getArea(int radius)
    {
        float area=3.14*radius*radius;
        return area;
    };

int main(){
    int radius;
    cout<<"Enter the radius of the circle";
    cin>>radius;
    float area1 = getArea(radius);
    cout<<"The area is :"<< getArea;
}