#include <stdio.h>
#include <math.h>

int main (){
    double a, b,c, discriminant , root1 ,root2, realpart, imagpart;
    printf("Enter coefficients a, b and c: ");
    scanf("%1f %1f %1f" , &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant>0){
        root1 =(-b + squart(discriminant))/(2*a);
        root2 =(-b - squart(discriminant))/(2*a);
        printf("roots are and differnt.\n");
        printf("root 1=%.21f\n",root1);
        printf("root 1=%.21f\n",root1);
    }
     else if (discriminant == 0){
        root1 = root2 = -b/(2*a);
        printf("roots are real and equal.\n");
        printf("root 1 = root 2 = %.21f\n", root1);
     }
     else{
        realpart = -b/ (2*a);
        imagpart = sqrt(-discriminant)/(2*a);
        printf("root 1 = %.21f + %.21fi\n", realpart,imagpart);
        printf("root 2 = %.21f - %.21fi\n", realpart,imagpart);
     
     }
     return 0;
     

}
