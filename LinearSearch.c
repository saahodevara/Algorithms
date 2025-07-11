#include<stdio.h>
int main(void)
{
    int arr[]={2,5,11,54,87,32};
    int key,i;
    printf("enter the number to be searched :");
    scanf("%d",&key);
    for (i=0; i<6; i++)
    {
        if (arr[i]==key)
        {
           printf("Found the key ");
            return 0;
        }
    }
    printf("Key not found ");
}
