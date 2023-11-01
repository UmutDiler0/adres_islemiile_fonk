#include <stdio.h>
#include <stdlib.h>

void kare(int *sonuc,int *y)
{
    *sonuc=*y**y;
}







int main()
{
    int x=4,sonucum;

    kare(&x,&sonucum);

    printf("%d",sonucum);







    return 0;
}
