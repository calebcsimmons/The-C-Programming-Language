// Will fold inputted lines if they reach n length
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 10

void fold(const char *text) {
    int i, j;
    int length = strlen(text);

    for (i = 0; i < length; i += MAX_LINE_LENGTH) {
        for (j = i; j < i + MAX_LINE_LENGTH && j < length; j++) {
            printf("%c", text[j]);
        }
        printf("\n");
    }
}

int main() {
    char input_line[100];
    printf("Enter a line of text: ");
    fgets(input_line, sizeof(input_line), stdin);
    fold(input_line);
    return 0;
}
