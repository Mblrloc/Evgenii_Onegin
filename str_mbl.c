#include "module.h"
// TODO asserts
// TODO Define Debug 1 -> стандартные функции : мои
int mbl_put_str(char* str, FILE *fp){
    for (; *str; str++){
        putc(*str, fp);

    }
    putc('\n', fp);
    return  0;

}

int mbl_len(char *start) {
    assert(start != NULL);

    char *now = start;

    for(; *now; now++) {}
    return(now - start);

}

void mbl_cat(char* base, char* addable) {
    assert(base != NULL);
    assert(addable != NULL);

    for(; *base; base++) {}

    for(; *addable; addable++) {
        *(base) = *(addable);
        base++;

    }

}

void mbl_ncat(char* base, char* addable, int len) {
    assert(base != NULL);
    assert(addable != NULL);

    char *start = addable;
    for(; *base; base++) {}

    for(; *addable && (addable - start) < len; addable++) {
        *(base) = *(addable);
        base++;

    }

}

void mbl_copy(char* from, char* to) {
    assert(from != NULL);
    assert(to != NULL);

    for(; *from; from++){
        *to = *from;
        to++;

    }
    *to = *from;

}

void mbl_ncopy(char* from, char* to, int count) {
    assert(from != NULL);
    assert(to != NULL);

    char *start = from;
    for(; *from && ((from - start) < count); from++){
        *to = *from;
        to++;

    }
    *to = '\0';

}
// TODO comply with standard functions
char* mbl_chr_srch(char* str, char what) {
    assert(what != NULL);
    assert(str != NULL);

    char *w = str;

    for(; *w && (*w != what); w++){}
    return w;

}

int mbl_chr_count(char* str, char what) {
    assert(str != NULL);

    int count = 0;
// TODO 2 вызова функции - в одну переменную
    for(count = 0; *mbl_chr_srch(str, what); count++){
        str = mbl_chr_srch(str, what) + 1;

    }
    return count;

}

void mbl_fgets(char *str, FILE *fp){
//TODO Сброс при новой строке и int count
    char ch = getc(fp);

    for(; ch != '\0' && ch != EOF ; str++) {
        *str = ch;
        ch = getc(fp);

    }
}

char *mbl_dup(char *str){
    char *copy[Standart_array_size] = {};
//TODO malloc
    mbl_copy(str, *copy);
    return *copy;

}


/*
int mbl_str_srch(char* str, int from, char* what) {
    assert(str != NULL);
    assert(str != NULL);

    int tek_pos = from;
    char buffer[Standart_array_size] = {};

    while(tek_pos != No_element) {
        tek_pos = mbl_chr_srch(str, tek_pos, *what);
        mbl_form_str(str, buffer, tek_pos, mbl_len(what));

        if (mbl_eq(what, buffer)){
            return tek_pos;

        }

    }
    return No_element;

}
*/

/*
int mbl_str_count(char* str, int from, char* what) {
    assert(str != NULL);
    assert(str != NULL);

    int tek_pos = from - 1, count = 0;
    char buffer[Standart_array_size] = {};

    while(tek_pos != No_element) {
        tek_pos++;
        tek_pos = mbl_chr_srch(str, *what);
        mbl_form_str(str, buffer, tek_pos, mbl_len(what));

        if (mbl_eq(what, buffer)){
            count++;

        }

    }
    return count;

}
*/
/*
void mbl_form_str(char* from, char* to, int start, int len) {
    //assert(start > start + len);
    assert(from != NULL);

    for (int i = start; (i < start + len) && (*(from + i) != NULL); i++) {
        *(to + i - start) = *(from + i);

    }
    mbl_clear_from(to);

}

bool mbl_eq(char* str1, char* str2) {

    assert(str1 != NULL);
    assert(str2 != NULL);

    int i = 0;

    for (i = 0; (*(str1 + i) != '\0') && (*(str2 + i) != '\0') && (*(str2 + i) == *(str1 + i)) ; i++) {}
    return (*(str2 + i) == *(str1 + i));

}

void mbl_clear_from(char* str) {
    *str = '\0';

}

void mbl_clear_input(){
    scanf("*[^\n]");
    scanf("%*c");

}
 */