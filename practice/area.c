#include <stdio.h>
int getArea(int radius){
    return (radius*radius)*3.142;
}
int main(){
    int result=getArea(7);
    printf("\nThe area is:%d",result);
    return 0;

}