#ifndef EVGENII_ONEGIN_STR_MBL_H
#define EVGENII_ONEGIN_STR_MBL_H

#include <corecrt_wstdio.h>
#include <stdlib.h>
#include <string.h>

int mbl_len(char *s);
char *mbl_cat(char *base, char *addable);
char *mbl_ncat(char* base, char* addable, int len);
char *mbl_copy(char* from, char* to);
char *mbl_ncopy(char* from, char* to, int count);
char* mbl_chr_srch(char* str, char what);
//int mbl_chr_count(char* str, char what);
//int mbl_str_srch(char* str, int from, char* what);
//bool mbl_eq(char* str1, char* str2);
//void mbl_form_str(char* from, char* to, int start, int len);
//void mbl_clear_from(char* str);
//int mbl_str_count(char* str, int from, char* what);
//void mbl_clear_input();
int mbl_put_str(char* str, FILE *fp);
void mbl_fgets(char *str, FILE *fp);
char* mbl_dup(char *str);

#endif //EVGENII_ONEGIN_STR_MBL_H
