#include<stdio.h> 

#include<string.h> 

int main()

{
    char str[20]; 
    int p,num[256]={0};     
    printf("��J�@�ӳs���ơG");  
    scanf("%s",str);  
    for(p=0;p<strlen(str);p++) 
    num[(int)str[p]]++; 
    for(p=0;p<256;p++) 
    if(num[p]!=0)
    printf("�r��%c�X�{%d��\n",(char)p,num[p]);
}
