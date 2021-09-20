#include "module.h"

extern bool test;

int mbl_put_str(char* str, FILE *fp) {
    if (test) {
        return puts(str);

    }

    assert(str != NULL);
    assert(fp != NULL);

    for (; *str; str++) {
        putc(*str, fp);

    }
    putc('\n', fp);
    return  0;

}

int mbl_len(char* start) {
    if (test) {
        return strlen(start);

    }

    assert(start != NULL);

    char *now = start;

    for (; *now; now++) {}
    return(now - start);

}

char *mbl_cat(char* base, char* addable) {
    if (test) {
        return strcat(base, addable);

    }

    assert(base != NULL);
    assert(addable != NULL);

    for (; *base; base++) {}

    for (; *addable; addable++) {
        *(base) = *(addable);
        base++;

    }
    return base;

}

char *mbl_ncat(char* base, char* addable, int len) {
    if (test) {
        return strncat(base, addable, len);

    }

    assert(base != NULL);
    assert(addable != NULL);
    assert(len >= 0);

    char *start = addable;
    for (; *base; base++) {}

    for (; *addable && (addable - start) < len; addable++) {
        *(base) = *(addable);
        base++;

    }
    return base;

}

char *mbl_copy(char* from, char* to) {
    if (test) {
        return strcpy(from, to);

    }
    assert(from != NULL);
    assert(to != NULL);

    for (; *from; from++) {
        *to = *from;
        to++;

    }
    *to = '\0';
    return to;

}

char *mbl_ncopy(char* from, char* to, int count) {
    if (test) {
        return strncat(from, to, count);

    }
    assert(from != NULL);
    assert(to != NULL);
    assert(count >= 0);

    char *start = from;
    for (; *from && ((from - start) < count); from++) {
        *to = *from;
        to++;

    }
    *to = '\0';
    return to;

}

char *mbl_chr_srch(char* str, char what) {
    if (test){
        return strchr(str, what);

    }
    assert(what != NULL);
    assert(str != NULL);

    char *w = str;

    for(; *w && (*w != what); w++) {}
    return w;

}

char *mbl_fgets(char *str, int count, FILE *fp) {
    if (test) {
        return fgets(str, count, fp);

    }
    assert(str != NULL);
    assert(fp != NULL);
    assert(count >= 0);

    char ch = getc(fp);

    for (int i = 0; ch != '\n' &&ch != '\0' && ch != EOF && i < count; i++) {
        *str = ch;
        ch = getc(fp);
        str++;

    }
    return str;

}

char *mbl_dup(char *str) {
    if (test) {
        return strdup(str);

    }
    assert(str != NULL);

    char *copy = {};

    copy = (char*)calloc(Standart_array_size, sizeof(char));
    mbl_copy(str, copy);

    return copy;

}
