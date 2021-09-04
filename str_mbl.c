#include "module.h"
//#define DEBUG

int mbl_put_str(char *str, FILE *fp){
    #ifdef DEBUG
    return puts(str); //TODO
    #endif

    assert(str != NULL);
    assert(fp != NULL);

    for (; *str; str++){
        putc(*str, fp);

    }
    putc('\n', fp);
    return  0;

}

int mbl_len(char *start) {
    #ifdef DEBUG
    return strlen(start);
    #endif

    assert(start != NULL);

    char *now = start;

    for(; *now; now++) {}
    return(now - start);

}

char *mbl_cat(char* base, char* addable) {
    #ifdef DEBUG
    return strcat(base, addable);
    #endif

    assert(base != NULL);
    assert(addable != NULL);

    for(; *base; base++) {}

    for(; *addable; addable++) {
        *(base) = *(addable);
        base++;

    }
    return base;

}

char *mbl_ncat(char* base, char* addable, int len) {
    #ifdef DEBUG
    return strncat(base, addable, len);
    #endif

    assert(base != NULL);
    assert(addable != NULL);
    assert(len >= 0);

    char *start = addable;
    for(; *base; base++) {}

    for(; *addable && (addable - start) < len; addable++) {
        *(base) = *(addable);
        base++;

    }
    return base;

}

char *mbl_copy(char* from, char* to) {
    #ifdef DEBUG
    return strcpy(from, to);
    #endif

    assert(from != NULL);
    assert(to != NULL);

    for(; *from; from++){
        *to = *from;
        to++;

    }
    *to = '\0';
    return to;

}

char *mbl_ncopy(char* from, char* to, int count) {
    #ifdef DEBUG
    return strncat(from, to, count);
    #endif

    assert(from != NULL);
    assert(to != NULL);
    assert(count >= 0);

    char *start = from;
    for(; *from && ((from - start) < count); from++){
        *to = *from;
        to++;

    }
    *to = '\0';
    return to;

}

char *mbl_chr_srch(char* str, char what) {
    #ifdef DEBUG
    return strchr(str, what);
    #endif
    assert(what != NULL);
    assert(str != NULL);

    char *w = str;

    for(; *w && (*w != what); w++){}
    return w;

}

/*
int mbl_chr_count(char* str, char what) {
    assert(str != NULL);

    int count = 0;
    char *str_buf = mbl_chr_srch(str, what);

    for(count = 0; *str_buf; count++){
        str_buf = mbl_chr_srch(str, what);
        str = str_buf + 1;

    }
    return count;

}
*/

char *mbl_fgets(char *str, int count, FILE *fp){
    #ifdef DEBUG
    return fgets(str, count, fp);
    #endif
    assert(str != NULL);
    assert(fp != NULL);
    assert(count >= 0);

    char ch = getc(fp);

    for(int i = 0; ch != '\n' &&ch != '\0' && ch != EOF && i < count; i++) {
        *str = ch;
        ch = getc(fp);
        str++;

    }
    return str;

}

char *mbl_dup(char *str){
    #ifdef DEBUG
    return strdup(str);
    #endif
    assert(str != NULL);

    char *copy = {};

    copy = (char*) malloc(Standart_array_size * sizeof(char));
    mbl_copy(str, copy);

    return copy;

}
