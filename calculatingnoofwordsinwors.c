#include <stdio.h>

int main() {
    char word[100];
    int count = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
    
        if ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z')) {
            count++;
        }
    } printf("Number of alphabets in the given word: %d\n", count);

    return 0;
}
