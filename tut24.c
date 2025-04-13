#include<stdio.h>
int main()
{
    char input;
    float kmsToMiles=0.621371;
    float inchesToFoot=0.0833333;
    float cmsToInches=0.393701;
    // float poundTokgs=0.453592;
    // float inchesToMeter=0.0254;
    while (1)
    {
        printf("enter the input character .q to quit\n 1.kmsToMiles\n  2.inchesToFoot\n  3.cmsToInches\n");
     scanf("%c",&input);
     switch (input)
     {
     case 'q':
         printf("Qutting the program...");
         goto end;
         break;
     
     default:
         break;
     }
    }
    end:
    return 0;
}