#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#define MAX_LINE_LEN 1024
typedef struct {
    int id;
    wchar_t surname[50];
    wchar_t name[50];
} group;

int compare(const void *a, const void *b) {
    if (!setlocale(LC_ALL, "uk_UA.UTF-8")) {
    setlocale(LC_COLLATE, "uk_UA.UTF-8");
}
    const group *s1 = (const group *)a;
    const group *s2 = (const group *)b;

    int res = wcscoll(s1->name, s2->name);
    if (res != 0) {
        return res;
    }
    return wcscoll(s1->surname, s2->surname);
}

int main(){
    setlocale(LC_ALL, "");

    group g;
    group group_list[30];
    wchar_t buffer[MAX_LINE_LEN];
    int count = 0;
    for(int i = 0; fgetws(buffer, MAX_LINE_LEN, stdin) != NULL; i++){
        swscanf(buffer, L"%d %50ls %50ls", &g.id, g.surname, g.name);
        group_list[i] = g;
        count++;
    }
    qsort(group_list, count, sizeof(group), compare);
    for (int j = 0; j < count; j++) {
        wprintf(L"%d\t%ls\t%ls\n", group_list[j].id, group_list[j].name, group_list[j].surname);
    }
    int unique_names = 1; 
    for (int j = 1; j < count; j++) {

        if (wcscmp(group_list[j].name, group_list[j - 1].name) != 0) {
            unique_names++;
    }}
    wprintf(L"Кількість унікальних імен: %d\n", unique_names);    size_t total_surname_len = 0; 

    for (int j = 0; j < count; j++) {
        total_surname_len += wcslen(group_list[j].surname);
    }

    double avg_surname_len = (double)total_surname_len / count;
    wprintf(L"Середня довжина прізвищ: %.2f\n", avg_surname_len);
    return 0;
}

