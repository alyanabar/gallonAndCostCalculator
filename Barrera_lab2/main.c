#include <stdio.h>
#include <stdlib.h>

/*
Author: Alyana Barrera
Assignment: Lab 2
Due date: January 23rd

Overview: This lab is a follow up on Lab 1 where we find the total cost of paint needed to paint a rectanlgular
room. Here we will code to ask for user input of measurments and prices. Then we will continue to calculations,
and then output a summary of all events.

Known Issues:
1. I have been having a hard time having the numbers output in my terminal. When I do it through repl.it it works
perfectly fine. I am not sure why it has been doing that.
2. I don't know how to round up the 'gallons needed' and 'total area' to be painted. I ended up having to
leave it as a decimal. This results to a incorrect number of gallons and total cost.
*/

int main()
{
      //list of variables needed
    float gallons_needed;
    double length1, length2, length3, length4;
    double height1, height2, height3, height4;
    double wall1, wall2, wall3, wall4;
    double total_area, gallon_coverage, cost_per_gallon, total_cost;

    //get room dimensions in feet (width and height of all 4 walls)
    printf("Enter the length of the first wall, in feet: ");
    scanf("%lf", &length1);
    printf("Enter the height of the first wall, in feet: ");
    scanf("%lf", &height1);
    printf("Enter the length of the second wall, in feet: ");
    scanf("%lf", &length2);
    printf("Enter the height of the second wall, in feet: ");
    scanf("%lf", &height2);
    printf("Enter the length of the third wall, in feet: ");
    scanf("%lf", &length3);
    printf("Enter the height of the third wall, in feet: ");
    scanf("%lf", &height3);
    printf("Enter the length of the forth wall, in feet: ");
    scanf("%lf", &length4);
    printf("Enter the height of the forth wall, in feet: ");
    scanf("%lf", &height4);

    //get paint information (square feet covered by a gallon and cost per gallon)
    printf("Enter the square feet that can be covered by a gallon of paint: ");
    scanf("%lf", &gallon_coverage);
    printf("Enter the price per gallon of the paint: ");
    scanf("%lf", &cost_per_gallon);

    //calculate the area to be painted
    wall1 = length1 * height1;
    wall2 = length2 * height2;
    wall3 = length3 * height3;
    wall4 = length4 * height4;
    total_area = wall1 + wall2 + wall3 + wall4;

    //calculate number of gallons needed
    gallons_needed = total_area / gallon_coverage;

    //calculate total cost of painting the room
    total_cost = gallons_needed * cost_per_gallon;


    //output: display all input values, the total area to be painted, number of gallons needed, and total cost
    printf("\n\nProgram output: \n");
    printf("Wall 1 dimensions: %.1f x %.1f feet \n", length1, height1);
    printf("Wall 2 dimensions: %.1f x %.1f feet \n", length2, height2);
    printf("Wall 3 dimensions: %.1f x %.1f feet \n", length3, height3);
    printf("Wall 4 dimensions: %.1f x %.1f feet \n\n", length4, height4);
    printf("Paint information: \n");
    printf("Coverage per gallon of paint: %.1f square feet.\n", gallon_coverage);
    printf("Cost per gallon: $%.2f \n\n", cost_per_gallon);
    printf("Calculations: \n");
    printf("Total area to be painted: %.1f square feet \n", total_area);
    printf("Amount of paint needed: %.1f gallons \n", gallons_needed);
    printf("Total cost of paint: $%.2f \n", total_cost);

    printf("\nProgram written by Alyana Barrera.\n");
    return 0;
}
