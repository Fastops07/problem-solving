#include <stdio.h>
#include <stdbool.h>
int contains(char ransom_char, char *magazine)
{
    int i = 0;
    while(magazine[i])
    {
        if(magazine[i] == ransom_char)
            return true;
    i++;
    }
    return false;
}

bool canConstruct(char* ransomNote, char* magazine) {
   int i = 0; 
   while(ransomNote[i])
   {
    if(!contains(ransomNote[i], magazine))
        return false;
    i++;
   }
   return true;
}
int main(){
    printf("%d", canConstruct("a","b"));
}