#include<stdio.h> 

#include<string.h> 

int main()

{
    char str[20]; 
    int p,num[256]={0};     
    printf("輸入一個連串整數：");  
    scanf("%s",str);  
    for(p=0;p<strlen(str);p++) 
    num[(int)str[p]]++; 
    for(p=0;p<256;p++) 
    if(num[p]!=0)
    printf("字符%c出現%d次\n",(char)p,num[p]);
}
