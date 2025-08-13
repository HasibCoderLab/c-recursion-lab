//  ============================================================
//                    📌 Practice Problems
//                    Topic : C Programming - Recursion
//
// ============================================================

// 👉👉  🔹Qu -1️⃣ 🔹 print "Hello Wrold " 5 times

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

// 👉👉  🔹Qu - 2️⃣ 🔹 Some of first n  natural numbers

#include <stdio.h>
int sum (int n);
int main(){
     printf("Sum is : %d\n", sum(5)) ; // Function call
    return 0;
}

//  Function dafination
int sum(int n){
if(n== 1){ // base case
    return 1;
}

    int sumN1= sum (n - 1); // sum of  1 to n
    int sumN = sumN1 +n ; // sum of n
    return sumN;
}

//    📌  Factorial

#include <stdio.h>
int main(){
 int fac = 1;
 for (int i = 1 ; i<=10;i++ ){
    fac = fac *i;
    printf(" Factorial is %d\n" , fac);
 }
    return 0;
}

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

//    👉👉  🔹🔹Qu -  4️⃣   Write a fucntion convart  celsius to fahrenheit ..
#include <stdio.h>
float Con_Temp( float cel);
int main(){
 float feh =  Con_Temp(0);
 printf("celsius is %f\n" , feh);

    return 0;
}

float  Con_Temp( float cel){
   float feh = cel * (9.0 / 5.0) +32 ;
   return feh ; 
}


// #include <stdio.h>
// int main(){

//     return 0;
// }



//   Number Emoji     👉👉  🔹Qu -🔹 
//  5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟    
// 1️⃣1️⃣ 1️⃣2️⃣ 1️⃣3️⃣ 1️⃣4️⃣ 1️⃣5️⃣ 1️⃣6️⃣ 1️⃣7️⃣ 1️⃣8️⃣ 1️⃣9️⃣ 2️⃣0️⃣
// 2️⃣1️⃣ 2️⃣2️⃣ 2️⃣3️⃣ 2️⃣4️⃣ 2️⃣5️⃣ 2️⃣6️⃣ 2️⃣7️⃣ 2️⃣8️⃣ 2️⃣9️⃣ 3️⃣0️⃣