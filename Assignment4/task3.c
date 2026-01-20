#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    int i,j;
    for (i=0;i<n;i++){
        printf("Enter Elements %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Unique Elements are:");

    for (i=0;i<n;i++){
        int count=0;
        for (j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++; 
            }
        }
        if (count==1){
            printf("%d ",arr[i]);
        }
    };



}