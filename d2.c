#include <stdio.h>
#include <string.h>

int main() {
    char name[45];
    int age;

    printf("\nWhat's your name? ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character from the string if present
    name[strcspn(name, "\n")] = 0; 

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old.\n", age);

    return 0;
}
#include<math.h>
int main(){
     double A = sqrt(9);
     double B = pow(2 , 4);
     int C = round(3.14);
     int D = ceil(3.14);
     int E = floor(3.99) ;
     double F = fabs(-100);
     double G = log(3);
     double H = sin(45);
     double I = cos(45);
     double J = tan(45);

     printf("\n%lf", A);
     printf("\n%lf", B);
     printf("\n%d", C);
     printf("\n%d", D);
     printf("\n%d", E);
     printf("\n%lf", F);
     printf("\n%lf", G);
     printf("\n%lf", H);
     printf("\n%lf", I);
     printf("\n%lf", J);

     return 0 ;
}

int main(){
    const double PI = 3.14159 ;
    double radius ; 
    double circumference ; 
    double area ;   

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius ;
    area = PI * pow(radius , 2); //area = PI * radius * radius ;

    printf("\ncircumference: %lf ",circumference);
    printf("\narea: %lf ",area);
    return 0;
}

int main(){
    double A ;
    double B ;
    double C ;

    printf("Enter side A :");
    scanf("%lf",&A);

    printf("Enter side B :");
    scanf("%lf",&B);

    C = sqrt(pow(A,2)+pow(B,2)) ; // C = sqrt((A*A)+(B*B)) ;

    printf("Side C : %lf",C) ;

    return 0 ;
}

int main(){
    int age ; 

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
         printf("You are now signed up !");
    }
    else if (age == 0)
    {
        printf("You can't sign up! You were just born right now !");
    }
    else if (age < 0)
    {
        printf("You haven't born yet!");
    }
    else 
    {
        printf("You are too young to sign up!");
    }
   return 0 ; 
}

int main(){
    /*switch is a more efficient alternative 
    to using many "else if" statements allows
     a value to be tested for equality against 
     many cases*/

     char grade;
     printf("\nEnter a letter grade: ");
     scanf("%c", &grade);

     /*
     if (grade == 'A')
     {
        printf("perfect!\n");
     }
     else if (grade == 'B')
     {
        printf("You did great!\n");
     }
     else if (grade == 'C')
     {
        printf("You did okay!\n");
     }
     else if (grade == 'D')
     {
        printf("At least it's not an F!\n");
     }
     else if (grade == 'F')
     {
        printf("You failed!\n");
     }
     */
    switch (grade)
    {
    case 'A' :
              printf("perfect!\n");
        break;
    case 'B' :
              printf("You did great!\n");
        break;
    case 'C' :
              printf("You did okay!\n");
        break;
    case 'D' :
              printf("At least it's not an F!\n");
        break;
    case 'F' :
              printf("You failed!\n");
        break;
    
    default:
             printf("PLEASE enter only valid grades");
        break;
    }
 return 0 ;
}

#include<ctype.h>

int main(){
     char unit ; 
     float temp ;

     printf("\nIs the temperature in (F) OR (C)?:");
     scanf("%c", &unit);

     unit = toupper(unit);

     if (unit == 'C')
     {
        printf("\nEnter the temp is currently in Celsius(C):");
     }
     else if (unit == 'F')
     {
        printf("The temp is currently in F");
     }
     else
     {
        printf("\n %c is not a valid unit of measurement",unit);
     }
     
     
          
return 0 ;
}
     
     
