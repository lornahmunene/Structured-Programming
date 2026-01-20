#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for (i=0;i<n;i++){
        printf("Enter Elements %d:",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Sum of elements:");
    int sum=0;

    for(i=0;i<n;i++){
        
        sum+=arr[i];
        
    }
    printf("%d",sum);
  
    
}