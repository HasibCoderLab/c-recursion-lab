//  ============================================================
//                    📌 Practice Problems
//                    Topic : C Programming - Recursion
//
// ============================================================

// 👉👉  🔹Qu -1️⃣ 🔹 print "Hello Wrold " 5 times

// #include <stdio.h>
// void print_HW(int number);
// int main()
// {
//     print_HW(5);
//     return 0;
// }

// void print_HW(int number)
// {
//     if (number == 0)
//     {
//         return;
//     }

//     printf("Hello World \n");
//     print_HW(number - 1);
// }

// 👉👉  🔹Qu - 2️⃣ 🔹 Some of first n  natural numbers

// #include <stdio.h>
// int sum (int n);
// int main(){
//      printf("Sum is : %d\n", sum(5)) ; // Function call
//     return 0;
// }

//  Function dafination
// int sum(int n){
// if(n== 1){ // base case
//     return 1;
// }

//     int sumN1= sum (n - 1); // sum of  1 to n
//     int sumN = sumN1 +n ; // sum of n
//     return sumN;
// }

//    📌  Factorial

// #include <stdio.h>
// int main(){
//  int fac = 1;
//  for (int i = 1 ; i<=10;i++ ){
//     fac = fac *i;
//     printf(" Factorial is %d\n" , fac);
//  }
//     return 0;
// }

//  👉👉  🔹Qu -3️⃣🔹  Factorial of n

#include <stdio.h>
int fact (int n);
int main(){
  printf(" Factorial is : %d\n" , fact(5));
    return 0;
}
// Function Defination
int fact(int n){
   if(n == 1){  // base case 
      return 1;
   }
   int factN1 =  fact (n -1);  // Factoria of  1 to n ;
   int factN = factN1 * n ;    // Factorial of n ;
   return factN;
}

// #include <stdio.h>
// int main(){

//     return 0;
// }
