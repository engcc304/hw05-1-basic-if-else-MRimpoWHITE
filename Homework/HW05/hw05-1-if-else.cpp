/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น

    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/

#include<stdio.h>

int main() {
    char ip[4];

    printf("Input: ");
    
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &ip[i]);
    }

    printf("Result: %c %c %c %c", ip[3], ip[2], ip[1], ip[0]);

    return 0;
}