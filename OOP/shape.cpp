#include <iostream>
using namespace std;
class Shape{
    protected:
    int x,y;
    public:
    Shape(int _x, int _y){
        x=_x;
        y=_y;
    }
    void printInfo(){
        cout<<"coordinates: ("<<x<<","<<y<<")"<<endl;
    }
    virtual void draw(){
        cout<<"Drawing a shape at ("<<x<<","<<y<<")"<<endl;
    };
};
class Circle: public Shape{
    private:
    int radius;
    public:
    Circle():Shape(0,0){
        radius=1;
    }
    Circle(int _x, int _y, int _r):Shape(_x,_y){
        radius=_r;
    }
    void draw() override{
        cout<<"Drawing a circle at ("<<x<<","<<y<<") with radius "<<radius<<endl;
    }
};
class Rectangle: public Shape{
    private:
    int width, height;
    public:
    Rectangle():Shape(0,0){
        width=1;
        height=1;
    }
    Rectangle(int _x, int _y, int _w, int _h):Shape(_x,_y){
        width=_w;
        height=_h;
    }
    void draw() override{
        cout<<"Drawing a rectangle at ("<<x<<","<<y<<") with width "<<width<<" and height "<<height<<endl;
    }
};
int main(){
    // Circle c=Circle();
    // Circle *ptr=&c;
    // ptr->draw();
    // return 0;
    // Rectangle r1(2,3,4,5);
    // r1.draw();
    // Circle c1(5,10,3);
    // c1.draw();
    // Shape *ptr1=new Circle();
    // Shape *ptr2=new Rectangle();
    // ptr1->draw();
    // ptr2->draw();
    // delete ptr1;
    // delete ptr2;


    return 0;
}
