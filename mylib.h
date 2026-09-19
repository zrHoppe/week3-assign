int cstrlen(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++; // move p proxima direcao
    }
    return length;
}

char *cstrcpy(char *dest, char *src) {
    //1-1 lendo 
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    // anul
    *dest = '\0';
    return dest;
}

char *cstrcat(char *dest, char *src) {
    char *start = dest;
    
    //mover o contador
    while (*dest != '\0') {
        dest++;
    }
    
    //copiar o src
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    *dest = '\0';
    
    return start;
}

char *cstrchr(char *str, int c) {
    char match = (char)c;
    
    while (*str != '\0') {
        if (*str == match) {
            return str;
        }
        str++;
    }

    if (match == '\0') {
        return str; 
    }
    
    return (char *)0;
}

int cstrcmp(char *s1, char *s2) {
    //Loop
    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}