#include <stdio.h>

#define PI 3.1415926535

float circlePerimeter(float radius){
    return 2 * PI * radius;
}

float circleArea(float radius){
    return PI * (radius * radius);
}

int main(){
    int radius = 5;
    printf("Radius: %d\tPerimeter: %.2f \tArea: %.2f",radius,circlePerimeter(radius),circleArea(radius));
    return 0;   
}