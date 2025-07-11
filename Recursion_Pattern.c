#include <stdio.h>
void print_tri(int n);
void main(){
    int h;
    printf("Height :\n");
    scanf("%d",&h);
    print_tri(h); 
}

void print_tri(int n)
{
    if (n<=0)
    {
        return;
    }
    print_tri(n-1);
    for(int i=0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
        
}
