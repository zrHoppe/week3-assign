#include <stdio.h>
#include "mylib.h"

int main() {
    char dest1[50];
    char dest2[50] = "Computer";
    char *src = " Science";
    char search_str[] = "University";
    
    printf("1. cstrlen test:\n");
    printf("Length of '%s' is %d\n\n", dest2, cstrlen(dest2));
    
    printf("2. cstrcpy test:\n");
    cstrcpy(dest1, "Hello World");
    printf("Copied string: %s\n\n", dest1);
    
    printf("3. cstrcat test:\n");
    cstrcat(dest2, src);
    printf("Concatenated string: %s\n\n", dest2);
    
    printf("4. cstrchr test:\n");
    char *match = cstrchr(search_str, 'v');
    if (match != (char *)0) {
        printf("Character 'v' found in '%s'. Substring from match: %s\n\n", search_str, match);
    } else {
        printf("Character not found.\n\n");
    }
    
    printf("5. cstrcmp test:\n");
    int cmp1 = cstrcmp("Apple", "Apple");
    int cmp2 = cstrcmp("Apple", "Banana");
    printf("Comparing 'Apple' and 'Apple': %d\n", cmp1);
    printf("Comparing 'Apple' and 'Banana': %d\n", cmp2);

    return 0;
}