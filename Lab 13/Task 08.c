#include<stdio.h>
int main()
{
    typedef struct box
    {
        int length;
        int width;
        int height;
    } a;
    a box1;
    int h=41;
    for(int i=0;i<3;i++)
    {
       scanf("%d",&box1.length);
       scanf("%d",&box1.width);
       scanf("%d",&box1.height);
       printf("%d %d %d\n",box1.length,box1.width,box1.height);
       printf("\n");
           if(box1.height<41)
    {
          int volume = box1.length*box1.width*box1.height;
          printf("%d\n",volume);
    }
    }
    return 0;
}
