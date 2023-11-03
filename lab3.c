#include <stdio.h>

int vowels_count (char str[]){
    int count=0;
    char vowels[]= {'a', 'e', 'i', 'o', 'y', 'u'};

    for (int i = 0; i< strlen(str); i++){
        for (int j = 0; j< strlen(vowels); j++){
        if (str[i]==vowels[j]) count++;
        }
    }
     return count;
}

int main() {
    char string[1024];

    printf("Enter string: ");
    fgets(string, sizeof(string), stdin);

    int v_count = vowels_count(string);
    printf("Vowels number is %d\n", v_count);
    return 0;
}