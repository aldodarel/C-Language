#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Person;

int compareAge(const void* a, const void* b) {
    const Person* personA = (const Person*)a;
    const Person* personB = (const Person*)b;
    return personA->age - personB->age;
}

int main() {
    Person people[] = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}, {"David", 28}};
    int n = sizeof(people) / sizeof(people[0]);

    qsort(people, n, sizeof(Person), compareAge);

    printf("Sorted by age:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d years old\n", people[i].name, people[i].age);
    }

    return 0;
}
