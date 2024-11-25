#include <stdio.h>

struct data
{
    char name[50];
    int age;
};

int main(){
    struct data d1 = {"Trial", 65};
    struct data d2 = {"Pranav", 19};

    struct data arr[2] = {d1, d2};

    printf("My name is %s and my age is %d\n", arr[0].name, arr[0].age);
    printf("My name is %s and my age is %d\n", arr[1].name, arr[1].age);
}