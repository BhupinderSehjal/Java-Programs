#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main(void)
{
    /* Declare two variables for the x and y positions */
    int x_position, y_position;
    int number_entered;
    int number_entered2;

    /* Open a graphics window */
    /* Make it 640 pixels wide by 480 pixels high */
    initwindow(640, 480);

    /* Set up some coordinates */
    x_position = 320;
    y_position = 140;

    printf("Enter a number between 100 and 320 for the horizontal position of the stick man\n");
    scanf("%d", &number_entered);
    printf("Enter a number between 90 and 140 for the vertical position of the stick man\n");
    scanf("%d", &number_entered2);
    printf("You have entered a horizontal position of %d\n", number_entered);
    printf("and a vertical position of %d\n", number_entered2);

    if ((number_entered < 100) || (number_entered2 < 90))
        printf("The number or numbers you have entered are invalid, you cannot go beyond this point\n");

    else if ((number_entered > 320) || (number_entered2 > 140))
        printf("The number or numbers you have entered are invalid, you cannot go beyond this point\n");

    else if ((number_entered >= 100 <= 320) && (number_entered2 >= 90 <= 140))
    {
        /*This list allows the user to choose the colour*/

        printf("Now select the colour of the stick man, choose from the following colours by entering the letter beside each option\n");
        printf("BLUE - B\n");
        printf("GREEN - G\n");
        printf("RED - R\n");
        printf("CYAN - C\n");
        printf("LIGHTMAGNETA - L\n");
        printf("YELLOW - Y\n");
        printf("WHITE - W\n");

        /* choose red pen colour */
        /*Now using switch statements the user should now choose a colour of which the cases are insensitive*/
        int key_entered;
        {
            key_entered = getch();
            switch (key_entered)
            {
            case 'B':
                printf("You have Selected the BLUE colour\n");
                setcolor(1);
                break;

            case 'b':
                printf("You have Selected the BLUE colour\n");
                setcolor(1);
                break;

            case 'G':
                printf("You have Selected the GREEN colour\n");
                setcolor(2);
                break;

            case 'g':
                printf("You have Selected the GREEN colour\n");
                setcolor(2);
                break;

            case 'R':
                printf("You have Selected the RED colour\n");
                setcolor(4);
                break;

            case 'r':
                printf("You have Selected the RED colour\n");
                setcolor(4);
                break;

            case 'C':
                printf("You have Selected the CYAN colour\n");
                setcolor(3);
                break;

            case 'c':
                printf("You have Selected the CYAN colour\n");
                setcolor(3);
                break;

            case 'L':
                printf("You have Selected the LIGHTMAGNETA colour\n");
                setcolor(13);
                break;

            case 'l':
                printf("You have Selected the LIGHTMAGNETA colour\n");
                setcolor(13);
                break;

            case 'Y':
                printf("You have Selected the YELLOW colour\n");
                setcolor(14);
                break;

            case 'y':
                printf("You have Selected the YELLOW colour\n");
                setcolor(14);
                break;

            case 'W':
                printf("You have Selected the WHITE colour\n");
                setcolor(15);
                break;

            case 'w':
                printf("You have Selected the WHITE colour\n");
                setcolor(15);
                break;

            default:
                printf("The letter you selected is invalid\n");
            }
        }

        /* draw a circle on the screen buffer
         at x_position, y_position
         with radius 10 and fill colour using the filled_circle function */
        filled_circle(number_entered, number_entered2, 40, getch());

        /*the co_ordinates for the body*/
        line(number_entered, number_entered2 + 40, number_entered, number_entered2 + 180, 5);

        /*the co_ordinates for the arms*/
        line(number_entered - 50, number_entered2 + 110, number_entered + 50, number_entered2 + 110, 5);

        /*the co_ordinates for the left leg*/
        line(number_entered, number_entered2 + 180, number_entered - 50, number_entered2 + 240, 5);

        /*the co_ordinates for the right leg*/
        line(number_entered, number_entered2 + 180, number_entered + 50, number_entered2 + 240, 5);
        /* move the contents of the screen buffer to the display */
        update_display();
    }

    /* Wait for a key press */
    getch();
    /* remove the display */
    closegraph();

    return 0;
}