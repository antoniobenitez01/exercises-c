#include <stdio.h>
#include <string.h>

void reverse_string(char* str){
    int index = 0;
    int lastIndex = strlen(str) - 1;

    while(index < lastIndex){
        char temp = str[index];
        str[index] = str[lastIndex];
        str[lastIndex] = temp;
        index++;
        lastIndex--;
    }
    printf("%s\n",str);
}

int main(){
    char caracters[] = "XML";
    reverse_string(caracters);
    return 0;
}