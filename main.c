#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size ,odd=0,even=0 ;
    printf("Enter size of array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0 ;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<size;i++){
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("number of even: %d\n",even);
    printf("number of ood: %d",odd);
    return 0;
}
