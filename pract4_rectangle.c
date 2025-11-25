#include <stdio.h>

int perimeter(int width, int height){
    return width + height;
}

int area(int width, int height){
    return width * height;
}

int main(){
    int width = 5;
    int height = 5;
    printf("Width: %d\tHeight: %d\n",width,height);
    printf("Perimeter:%d\tArea:%d",perimeter(width,height),area(width,height));
    return 0;
}