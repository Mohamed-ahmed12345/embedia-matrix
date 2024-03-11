
int cti (const char *string)
{
    int i=0,op=0;
    while (*(string+i)!='\0') //exit in the end of function
    {
        if ((string[i]-'0')<=9) // check it is a number or letter
        {
            op=op*10+(string[i]- '0' ); //convert askii to sum of num*10
            i++;
        }
        else break;
    }
    return op;
}
int getpower (int x,int y,int*z,int w)
{
    int pow=1;
    for (int i=1; i<=x; i++)
        pow*=y;
    if (w==pow) *z+=1;
    return pow;
}
void embediacheck (int counter)
{
    if (counter==3)
        printf ("embedia matrix");
    else printf ("not embedia matrix");


}

