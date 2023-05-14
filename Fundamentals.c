/*Networking 
------------
1.check power of 2.*/
//Sol:
#include<stdio.h>
int check(int n)
{
    int c;
    while(n>0)
    {
        n=n&(n-1);
        c++;
    }
    return c;
}
int main(){
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    int result=check(n);
    if(result==1){
        printf("%d is power of 2",n);
    }
    else{
         printf("%d is not power of 2",n);
    }
}

/*2.Frequency of every Alphabet in a String.*/
//Sol:
#include<stdio.h>
#include<string.h>
int main()
{
    
    char str[100],c;
    int count;
    printf("Enter the String : ");
    gets(str);
    for(c='a';c<='z' ;c++)
    {
        count=0;
        for(int i=0;str[i]!=NULL;i++)
        {
            if(c==str[i]){
             count++;}
        }
        if(count>0)
        {
            printf("%c ----> %d\n",c,count);
        }
     
    }
    
    
}

/*Number of 1's in binary String
------------------------------*/
//Sol:
#include<stdio.h>
#include<string.h>
int main()
{
    char binary[100];
    int count;
    printf("Enter Binary BIT: ");
    gets(binary);
    for(int i=0;binary[i]!=NULL;i++)
    {
        if(binary[i]=='1')
        {
            count++;
        }
    }
    printf("No of 1's present in the bit is/are %d",count);
    
}

/*1's count in alternative position
-----------------------------------*/
//Sol:
// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int count1,count2,count3,flag=0;
       printf("Enter the binary string--> ");
    gets(input);
    int len=strlen(input);
    for(int i=0;i<len;i+=2)
    {
        if(input[i]=='1'){
        count1++;
        }
    }
    for(int i=1;i<len;)
    {
        flag++;
        if(input[i]=='1'){
        count2++;
        }
        if(flag%2!=0)
        {
            i+=1;
        }
        else{
            i+=3;
        }
    }
   //printf("%d",count2);
   flag=0;
     for(int i=3;i<len;)
    {
        flag++;
        if(input[i]=='1'){
        count3++;
        }
        if(flag%4==0)
        {
            i+=5;
        }
        else{
            i+=1;
        }
    }
  printf("Number of 1 at alternate one position-->%d\n",count1);
    printf("Number of 1 at alternate two position-->%d\n",count2);
    printf("Number of 1 at alternate four position-->%d\n",count3);
    
}

/*Input a string of 0 and 1.
a. Divide it into segments of equal length.
b. If the string length is not an exact multiple of segment length then use left
padding with 0s.
c. Now count number of 1’s present in each segment.
Sample Input-output:
Input: 1000111010
Segment length:4
Output:
Segment 1: 0010 <Bold indicates padding with 0>
Segment 2: 0011
Segment 3: 1010

Frequency:
Segment 1: 1
Segment 2: 2
Segment 3: 2
-----------------------------------------------*/
//Sol:

#include <stdio.h>
#include<string.h>
int main()
{
    char string[100];
    printf("Enter the String : ");
    gets(string);
    int length=strlen(string);
    int sl;
    printf("Enter Segment Length ");
    scanf("%d",&sl);
    int sc=length/sl;
    if(length%sl!=0)
    {
        sc++;
    }
    printf("Given String : %s\n",string);
    printf("Given Segment length %d\n",sl);
    for(int i=0;i<sc;i++)
    {
        printf("\nSegment %d : ",i+1);
        for(int j=0;j<sl;j++)
        {
            int index=i* sl +j;
            if(index<length)
            {
                printf("%c",string[index]);
            }
            else{
                printf("0");
            }
        }
    }
    
    int count;
    for(int i=0;i<sc;i++)
    {
        count=0;
        //printf("\nSegment %d : ",i+1);
        for(int j=0;j<sl;j++)
        {
            int index=i* sl +j;
            if(index<length && string[index]=='1')
            {
                //printf("%c",string[index]);
                count++;
            }
           
        }
        
        printf("\nSegment %d:->%d",i+1,count);}
    
    
}
