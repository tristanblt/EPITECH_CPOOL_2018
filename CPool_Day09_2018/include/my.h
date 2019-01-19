/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** my prototypes
*/

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_getnbr_base(char const *str, char const *base);
int my_putnbr_base(int nbr, char const *base);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);
char *my_strdup(char const *str);
int calc_charge(char const *str, int *i);
int find_n_base(char const *base, char c);
int my_compute_power_rec2(int nb, int p);
int next_getnbr(int length, int j, char const *str, int charge);
int power_c(int n);
int next_put_str(long power, int temp, int nb, int c_start);
void is_printable(char c, int k, int size);
int print_memorycase(int j, char const *str, int i);
void print_memoryline(char const *str, int line);
void next_sort(int c, int *min, int *minid, int i);
int is_alphanum(char c);
int is_lowalpha(char c);
char *next_strstr(char *str, char const *to_find, int i, int *j);
int c_maxl(char const *str);
int c_nw(char const *str);
int is_alpha(char c);
char *my_str_to_alpha(char *str, char const *to_find);
