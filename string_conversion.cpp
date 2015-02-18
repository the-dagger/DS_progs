#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
char convert(char*);
main()
{char str[50];
cout<<"Enter the string in lowercarse\n";
gets(str);
convert(str);
}
char convert(char s[])
{
    int i=0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='e')
        s[i]='i';
        s[i]=toupper(s[i]);
    }
cout<<"The modified string is "<<s;
}
