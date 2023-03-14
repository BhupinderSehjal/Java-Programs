#include<stdio.h>

int main()
{
    float Celsius, Fahrenheit, Kelvin;
    int choice;
    printf("Choose the unit you want to convert: \n ");
    printf("1.Kelvin\n");
    printf("2.Fahrenheit\n");
    printf("3.Celsius\n");
    
    scanf("%d",choice);

    switch (choice)       /*A switch statement allows a variable to be tested for
                               equality against a list of values. Each value is
                             called a case, and the variable being switched on is 
                            checked for each switch case. */

    {
    case 1:
        
        printf("Enter the Temperature in Kelvin :");
        scanf("%f",&Kelvin); 
        Celsius = (Kelvin - 273.15);
        Fahrenheit = 1.8 *(Kelvin -273.15) + 32.0;
        printf("In Celsius The value is:\t%f\n",Celsius );
        printf("In Fahrenheit The value is:\t%f\n",Fahrenheit);
 

    case 2:

        printf("Enter the Temperature in Fahrenheit :");
        scanf("%f",&Fahrenheit);
        Celsius = (Fahrenheit - 273.15);
        Kelvin = (Celsius + 273.15);
        Fahrenheit = (Celsius * 1.8) + 32.0;
        printf("In Celsius The value is:\t%f\n",Celsius );
        printf("In Kelvin The value is:\t%f\n",Kelvin);

        break;
        
    case 3:
        printf("Enter the Temperature in Celsius :");
        scanf("%f",&Celsius);
        Kelvin = (Fahrenheit - 32.0) * 5/9 +273.15;
        Celsius = (Fahrenheit - 32.0) * 5/9;
        printf("In Kelvin The value is :\t%f\n",Kelvin );
        printf("In Fahrenheit The value is:\t%f\n",Fahrenheit); 

        break;
        
    default:
         printf("Please Enter the valid value \n ");
         break;

    }
    printf("\n\n");
    return 0;
    

    
}

    

