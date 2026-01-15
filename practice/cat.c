#include <stdio.h>

const false = 0;
const true = 1;
const badVal = -1;

int isUpper(char letter){
    int smallA = 'a';
    int smallZ = 'z';
    int bigA = 'A';
    int bigZ = 'Z';
    
    if(letter >= smallA && letter<= smallZ){
        return false;
    }
    if(letter >= bigA && letter <= bigZ){
        return true;
    }
    if(letter <= smallA || letter >= bigZ){
        return badVal;
    }
}

int returnVal(int val){
    return val;
}

int main(){
    int val = isUpper('a');

    printf("%d",val);
    
    return 0;
}