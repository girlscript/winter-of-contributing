#include <stdio.h>
#include <string.h>
 
union Book{
   int BookId;
   float B_price;
   char B_title[20];
};
 
int main( ) {

   union Book b1;        

   b1.BookId=464;
   printf( "b1.bookId : %d\n",b1.BookId);
   
   b1.B_price = 220.5;
   printf( "b1.B_price : %f\n", b1.B_price);
   
   strcpy( b1.B_title, "C Programming");
   printf( "b1.B_title : %s\n", b1.B_title);

   return 0;
}