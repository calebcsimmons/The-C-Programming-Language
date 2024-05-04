#include <stdio.h>

int main() {
    int c;

    printf("Enter some text (press Ctrl+D or Ctrl+Z followed by Enter to end):\n");


    while ((c = getchar()) != EOF) {
        printf("getchar() != EOF evaluates to: %d\n", c != EOF);
    }

    printf("End of input reached. getchar() != EOF evaluates to: %d\n", c != EOF);

    return 0;
}
