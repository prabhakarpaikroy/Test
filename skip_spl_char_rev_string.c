/******************************************************************************

This Code will reverse the srting skipping spl character
ex:  input :A#b@c
     output : c#b@A

*******************************************************************************/

#include <stdio.h>
#include <string.h>
char*skip_spl_rev_str(char *input1 ,char *outarr)
{
    char *ptr = NULL;
    char *tmp = input1;
    int y=0; 
    int len = strlen(input1);
    ptr = (char*)malloc(len*sizeof(char));
    memset(ptr,'0',len);
    
    for(int x= len-1 ;x>= 0 ; x--)
    {
        if((tmp[x]>= 65 && tmp[x] <= 90)||(tmp[x]>=97 && tmp[x]<=122))
        {
            outarr[y]=tmp[x];   
            y++;
        }
        else
        {
            ptr[x] = tmp[x];
        }
    }
    int j =0;
    for(int i =0; i< len; i++)
    {
        if(ptr[i] == '0')
        {
            ptr[i] = outarr[j];
            j++;
        }
    }
    
    return ptr;
}

int main()
{
    //printf("Hello World");
    char *input1 = "A#e@Dc***HJDHADKDAK:HD!!!!!FFRRRR#####";
    char outarr[100] ={0};
    printf("output :%s ||   %s",skip_spl_rev_str(input1,outarr), outarr);
    return 0;
} 
