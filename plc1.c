#include <stdio.h> //..1.if ,else if ,else statment
//..2. loops->do while,while, for loop.
// 3.Type casting->converting one data into another data type (type)value->(int)a
// 4.function
//  5.recursion
// 6.Array
// 7. Pointer
// 8.call by value and call by referance
// 7.passing array as function
// 10. string
// 11.structure->user difine datatype
// 12.typedef->is keyword is used to assign alternative name to the datatype
// 13.union->union simmilar to the structure
// 14.ststic variable
// 15.void pointr->void pointer is general purpuse a pointer,is not derectaly derefrance
// 16. Dangling pointer->dangling means latakana(free)

// int main()
// {
    // int i=0;
    // while(i<10){
    //     printf("%d\n",i);
    //     i=i+1;
    // }
    // for(int i=0; i<10; i++){
    // printf("%d\n",i);
    // }

//     int a = 8;
//     float b = 9;
//     printf("the value is %d", (int)b);
//     int ys(int a, int b)
//     { //..>declare

//         return a + b;
//     }
// }
// int main(){
// int a=2;
// int b=4;             //..>difine
// // int c=ys(a,b);       //..>call
// printf("%d\n",c);
//     return 0;
// }
// int sum(){
//     int a,b,c;
//     printf("Enter value of a \n");
//     scanf("%d",&a);
//     printf("Enter the value of b\n");
//     scanf("%d",&b);
//     c=a+b;
//     return c;
// }
// int main(){
// printf("%d\n",sum());
//     return 0;
// }

// void multi(int a,int b){
//     int ys;
//     ys=a*b;
//     printf("the multiplication is %d\n",ys);
// }
// int main(){
//     multi(5,8);
//     return 0;
// }

// .....for table.....
// int main(){
// int no;
// printf("Enter the no \n");
// scanf("%d",&no);
// printf("the no is %d",no);
// printf("%d x 1= %d\n",no,no*1);
// printf("%d x 1= %d\n",no,no*2);
// printf("%d x 1= %d\n",no,no*3);
// printf("%d x 1= %d\n",no,no*4);
// int no;
// printf("Enter the no \n");
// scanf("%d",&no);
// printf("the no is %d",no);
// for(int i=0; i<11 ;i++){
//     printf("%d x %d= %d\n",no,i,no*i);
// }
// int a;
// printf("Enter the no \n");
// scanf("%")
//     return 0;
// }

// ..5.Recursion..>
// int factorial(int number){
//     if (number==1|| number==0)
//     {
//        return 1;
//     }
//     else{
//         return number*factorial(number-1);
//     }
// }
// int main(){
//     int no;
//     printf("Enter the value \n");
//     scanf("%d",&no);
//     printf("the factorial of %d is %d\n",no,factorial(no));
//     return 0;
// }

// 6.Array..>collection of data type
// int main(){  //..>one D array
//     int marks[9],sum=0;
//     printf("Enter the marks \n");
//     for (int  i = 0; i < 10; i++)
//     {
//         printf("the marks is %d ",i+1);
//         scanf("%d",&marks[i]);
//         sum +=marks[i];
//     }
//     int average=sum/10;
//     printf("the marks of student is %d",average);
// return 0;
// }
// int main(){  ..Two D Array
//     int matrix[3][3];
//     printf("the no print up to 1to 9 \n\n");
//     for (int i = 0; i <3; i++)
//     {
//         for (int  j = 0; j < 3; j++)
//         {
//            printf("Enter the no");
//            scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("\n\n\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <3 ; j++)
//         {
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n\n");
//     return 0;

// // .....7.Pointer ..>store the address of another variable
// int main(){
//     int a=8;
//     int *ys=&a;
//     int *kl=NULL;
//     printf("the address of a is %p\n",&a);
//     printf("the adress of pointer is %p\n ",&ys);
//     printf("the pointer of a is %d\n",a);
//     printf("the pointer of kl is %d\n",kl);
//     printf("the  pointer ys  is %d\n ",*ys);
//     return 0;
// }

// 8.Array and pointer
// int main(){
//     int arr[]={1,2,3,4,5};
//     int *ys=arr;
//     printf("adress of array %d\n",&arr[1]);
//     printf("adress of array 1 %d\n",arr+1);
//     printf("the address of array 2 is %d\n ",&arr[2]);
//     printf("the address of the array 2 is %d\n ",arr+2);

//     printf("the value of array 1 is %d\n ",arr[1]);
//     printf("the value of array 1 is %d\n ",*(&arr[1]));
//     printf("the value of array 5 is %d\n ",arr[4]);
//     printf("the value of array 5 is %d\n ",*(&arr[4]));
//     printf("the value of array 5 is %d\n ",*(arr+1));
//     return 0;
// }

// 8....call by value ..>function is copied into argument
// .....call by referance..>
// void swap(int* x,int* y){
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// void main(){
//     int a=3,b=5;
//     swap(&a,&b);
//     printf("the value of a %d\n",a);
//     printf("the value of b %d\n",b);
// }

// 9.passimg array as function
//
// int ys(int array[]){
// for (int i = 0; i < 5; i++)
// {
//     printf("the value %d is %d\n",i,array[i]);
// }
// // array[0]=444;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     printf("print the value %d\n",arr[0]);
//     ys(arr);
//     ys(arr);
//     return 0;
// }//....
// void ys(int *ptr){
// for(int i=0; i<5;i++){
//     printf("the value %dis %d\n ",i,*(ptr+i));
// }
// *(ptr+2)=885;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     ys(arr);
//     ys(arr);
//     return 0;
// }
// int ys(int array[2][2]){
//     for (int i = 0; i < 2; i++)
//     {
//       for (int  j = 0; j< 2; j++)
//       {
//         printf("the value i is %d then j is %d and array is %d\n" ,i,j,array[i][j]);
//       }
//     }
// }
// int main(){
//     int arr[][2]={{1,2},{3,4}};
// ys(arr);
//     return 0;
// }

// ...10.String  ...................
// void ys(char str[]){
//   int i=0;
//   while (str[i]!='\0')
//   {
//     printf("%c",str[i]);
//     i++;
//   }

// }
// int main(){
//   char str[]={'y','u','v','r','a','j','\0'};
// //   char str[]="yuvraj";         //..>string likhane ke liye
// //   char str[56];
//   gets(str);                       //..>string input karne ke liye
//   ys(str);
//   return 0;
// }

// //11.structure ->user difine datatype ....
// #include<string.h>
// struct student
// {
//   int id;
//   int marks;
//   char fav_char;
// } shubham,aniket,omkar;
// int main(){
// // struct student shubham,aniket,omkar;
// shubham.id=5;
// aniket.id=6;
// omkar.id=7;
// shubham.marks=86;
// aniket.marks=56;
// omkar.marks=82;
// shubham.fav_char='a';
// aniket.fav_char='g';
// omkar.fav_char='h';
// printf("the shubha id is %d\n",shubham.id);
// printf("the aniket marks is %d\n",aniket.marks);
//   return 0;
// }

// 12.static variable->{stntax=static datatype variable= value(value is by default zero)}
// int ys(){
//   static int i=0;
//   i++;
//   return i;
// }
// int main(){
//  printf("the first value is %d\n",ys());
//  printf("the second value is %d\n",ys());
//   return 0;
// }
// int ys(int b1){
//   static int aniket;
//   printf("the value is %d\n",aniket);
//   aniket++;
//   return aniket+b1;
// }
// int main(){
//   int b=78;
//   int shubham=ys(b);
//   shubham=ys(b);
//   ys(b);
//   // ys();
//   // ys();
//   int *ptr=&
//   shubham;
//   return 0;
// }

// Dynamic memory alocation
// #include <stdlib.h>
    // int main()
    // {
    //   int *ptr;
    //   int n;
    //   printf("Enter the no \n");
    //   scanf("%d", &n);

    //   ptr = (int *)malloc(n * sizeof(int));
    //   for (int i = 0; i < n; i++)
    //   {
    //     printf("Enter the no %d\n", i);
    //     scanf("%d", &ptr[i]);
    //   }
    // for (int i = 0; i < n; i++)
    // {
    //   printf("the value is %d at this array %d\n",i,ptr[i]);
    // }
    //   return 0;
    // }
    // use of calloc.
    // int main(){
    //   int *ys ;
    //   int n;
    //   printf("Enter the size of array \n");
    //   scanf("%d",&n);
    //   ys=(int *)calloc(n,sizeof(int));
    //   for (int i = 0; i < n; i++)
    //   {
    //     printf("Enter the array %d\n",i);
    //     scanf("%d",&ys[i]);
    //   }
    //   for (int i = 0; i < n; i++)
    //   {
    // printf("the value is %d at array %d\n ",i,ys[i]);
    //   }
    //   return 0;
    // }
    // use of realloc....
    // int main()
    // {
    //   int *ys;
    //   int n;
    //   printf("Enter the size of array \n");
    //   scanf("%d", &n);
    //   ys = (int *)realloc(ys, n * sizeof(int));
    //   for (int i = 0; i < n; i++)
    //   {
    //     printf("Enter the value of the array %d\n", i);
    //     scanf("%d", &ys[i]);
    //   }
    //   for (int i = 0; i < n; i++)
    //   {
    //     printf("the value of is %d at array %d\n",i,ys[i]);
    //   }
    //   free(ys);
    //   return 0;
    // }

    // void pointer->void pointer is genral purpuse pointer ,in this pointer is not derectaly derefrance
    // int main(){
    //   int a=45;
    //   float b=85.2;
    //   void *ptr;
    //   // ptr=&a;
    //   ptr=&b;
    //   printf("the value of a is %d\n",*(( int *)ptr));
    //   // printf("the value of b is %f\n",*((float *)ptr));
    //   return 0;
    // }

    // NULL pointer->is the pointer is NULL & can not be dereferanced
    // int main(){
    //     int a=8;
    //     int *ptr=NULL;
    //     printf("the value is %d\n",*ptr);
    //     return 0;
    // }
    // .....DANGLING POINTER
    // int *ys(){
    //     int a,b;
    //     a=5;
    //     b=8;
    //     return &a;
    // }
    // int main(){
    // int *ptr=(int *)malloc(5 * sizeof(int));//de alocation of memooray block(free).ptr is dangling pointer
    // ptr[0]=87;
    // ptr[1]=59;
    // ptr[2]=65;
    // free(ptr);

    // int *ptr=ys();
    // printf("%d",*ptr);//returning local variable(RETURNING &(ADRESS) of variable.ptr is dangling pointer

    // int *ptr;  //variable is out of the scope .ptr is dangling pointer
    // {
    //     int a=9;
    //     ptr=&a;
    // }
    //     return 0;
    // }
