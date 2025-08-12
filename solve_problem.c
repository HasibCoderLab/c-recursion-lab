//  ============================================================
//                    📌 Practice Problems
//                    Topic : C Programming - Recursion
//
// ============================================================

// 👉👉  🔹Qu -1 🔹 print "Hello Wrold " 5 times

#include <stdio.h>
void print_HW(int number);
int main()
{
    print_HW(5);
    return 0;
}

void print_HW(int number)
{
    if (number == 0)
    {
        return;
    }

    printf("Hello World \n");
    print_HW(number - 1);
}
