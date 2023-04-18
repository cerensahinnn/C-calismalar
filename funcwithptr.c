#include <stdio.h>



float func1(int *);
float func2(int *);
int main()
{
    int *aptr, a;
    aptr= &a;
    scanf("%d",&*aptr);
    func1(aptr);
    printf("first value is: %d \n",*aptr);
    func2(aptr);
    printf("last value is: %d",*aptr);
    return 0;
}
 
    float func1(int *ptr)
{
     *ptr= *ptr/2;
     return 0;
}
    float func2(int *ptr)
{
    *ptr= *ptr/3;
    return 0;
}
     
