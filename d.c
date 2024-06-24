#include <stdio.h>
#include <stdlib.h>

int main(){
    // this is a comment yo
    /*
              \n it does mean new line خط جديد
              \t it does mean new tab

    */
    printf("I\n love\n Asena!\n ");
    printf("she\n is\n really\n beautifull!\n");
    printf("123\n");
    printf("1\t2\t3\t\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9");
    return 0 ;
}
int main(){
    //variable
    int x;  //decalaration
    x = 123; //intialization
    int y = 321; //declaration + intialization

    int age = 18; //integer
    float gpa = 2.05; //floating point number 
    char grade ='C'; //single character 
    char name[] ="Bro/Sis"; //array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your aaverge grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);

    return 0;
    }
int  main(){

    char a ='C';  //single character %c
    char b[] = "Bro/Sis"; //array of characters %s
    float c = 3.141592; //(4 bytes) 6 - 7 digits %f
    double d = 3.141592653589793; //(8 bytes) 15 - 16 digits %lf
    char f = 100; //(1 byte) [-128 to +277] %d or %c
    unsigned char g = 255; //(1 byte) [0 to +255] %d or %c
    short int h = 32767; //(2 bytes) [-32,768 to +32,768] %d 
    unsigned short int i = 65535; //(2 bytes) [0 to +65,535] %d 
   int j = 2147483647; //(4 bytes) [-2,147,483,647 to +2,147,483,647] %d 
   unsigned int k = 4294967295L; //(4 bytes) [0 to +4,294,967,295] %u
   long long int l =9457583164180526896; //(8 bytes) [-9 quintillion to +9 quintillion] %lld
   unsigned long long int m =1825608976125476907U; //(8 bytes) [0 to +18 quintillion] %llu  
   printf("%c\n",a);
 printf("%s\n",b);
 printf("%f\n",c);
 printf("%lf\n",d);
 printf("%d\n",f);
  printf("%c\n",f);
 printf("%d\n",g); 
 printf("%c\n",g);
 printf("%d\n",h);
 printf("%d\n",i);
 printf("%d\n",j);
 printf("%u\n",k);
 printf("%lld\n",l);
  printf("%llu\n",m);
/*
format specifier % = defines and formats a type of data to be displayed

%c = character
%s = array of characters 8(string)
%f = float 
%lf =double
%d = integer

%.1 = decimal percision
%1 = minimum filed width
%- =left align
*/

float item1 =5.75;
float item2 =10.00;
float item3 =100.99;

printf("item 1: $%.2f\n",item1); 
printf("item 2: $%.2f\n",item2); 
printf("item 3: $%.2f\n",item3); 

return 0;
}

  int main(){
    //constant = fixed value that can not be altered by the program during its execution 

    const float PI =3.14159;
    printf("%f",PI);

    


    return 0;
}

int main(){
  /*
  arithmetic operators
  + (addition)
  - (subtraction)
  * (multiplication)
  / (division)
  % (modulus)
  ++ (increment)
  -- (decrement)
  */
 int x = 5 ;
 int y = 2 ;
 int z = x + y ;
 int t = x - y ;
 int e = x * y ;
 float o = x / (float) y ;
 int a = x % y ;
 printf("%f",o);
 printf("%d",z);
 printf("%d",t);
 printf("%d",e);
printf("%d",a);
 return 0;
}

int main();{
//  x= x + 1 its the same  x+=x
//  x= x - 1 its the same  x-=x
//  x= x * 1 its the same  x*=x
//  x= x / 1 its the same  x/=x

  int x=10;

  x= x+2;
  // x+=2;
  x= x-3;
  // x-=3;
  x= x*4;
  // x*=4;
  x= x/5;
  // x/=5;
  x= x%2;
  // x%=2

  printf("%d\n",x);

  return 0 ;
}

int main(){

  printf("I love Asena so much");

  char name[25]; //bytes
  int age  ;

  printf("\n What is your name ?\n");
  scanf("%s",&name); // we use scanf to enter INPUTs
  fgetc(name, 25, stdin);// the function fgetc it work the same work of the function scanf (enter INPUTs)
  printf("\n How old are you?");
  scanf("%d",&age); // we use scanf to enter INPUT

  printf("\n Hello %s,how are you?",name);
  printf("\n You are %d years old",age);


  return 0;
}