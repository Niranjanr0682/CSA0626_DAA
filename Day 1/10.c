// Write a program for to check whether a given String is Palindrome or  not using recursion

#include <stdio.h>  
#include <string.h>  

int isPalindrome(char str[])
    {int len = strlen(str);
    int rev = 0;
    for (int i = 0; i < len; i++)
        {if (str[i] != str[len - i - 1])
            {rev = 1;
            break;}}
    return !rev;}

int main()
    {char str1[30];
    printf("Enter a string: ");  
    scanf("%s", str1);
    if (isPalindrome(str1))  
        {printf("%s is a palindrome.\n", str1);}
    else   
        {printf("%s is not a palindrome string.\n", str1);}

    return 0;
}