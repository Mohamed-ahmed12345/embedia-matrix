#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{
    int num,base,power,result,counter=0;
    char arr[rows][coloums][10]=
    {
        {"3","2","2"},
        {"8","9","25"},
        {"2","3","5"}
    };
// converting string to intger and print intger number
    for (int i=0; i<1; i++)
    {
        for(int k=0; k<coloums; k++)
        {
            power=cti(arr[i][k]);
            num= cti(arr[i+1][k]);
            base= cti(arr[i+2][k]);
            result=getpower(power,base,&counter,num);
printf("power= %i number= %i\n",result,num);
        }
    }
    embediacheck(counter);
    return 0;
}
