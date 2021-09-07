#include<stdio.h>
#include<string.h>
int is_anagram(char* str1, char* str2){
    if(strlen(str1)==strspn(str1,str2) && strlen(str1)==strspn(str2,str1) && strlen(str1)==strlen(str2))
    	return 1;
    return 0;
}
int main(){
    char* str1 = "stream";
    char* str2 = "master";
    if(is_anagram(str1,str2))
    printf("%s and %s  are anagram to each other",str1,str2);
    else
    printf("%s and %s  are not anagram to each other",str1,str2);
    return 0;
}

