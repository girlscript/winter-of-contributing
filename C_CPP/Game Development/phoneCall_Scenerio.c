// The Phone Call Scenerio program is a simple program that simulates a phone call.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

char num[12] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9', '*', '#'}; // The array of numbers

long long int phoneno = 0;
int milli_seconds = 0;

int phone_num[10];

int random_time() // Function to generate random time
{
    int greater = 10, smallest = 1;
    srand(time(NULL));
    int r = rand() % (greater - smallest + 1) + smallest;
    milli_seconds = 1000 * r;
    return milli_seconds;
}

void Sound() // Function to play sound
{
    int time = 0;
    time = random_time();
    Beep(467, time);
}

void delay()
{
    int time = 0;
    time = random_time();
    clock_t startTime = clock();
    while (clock() < startTime + time)
        ;
}

char input_to_end_the_call() // Function to input to end the call
{
    fflush(stdin);
    printf("End the call (Y/N)\n");
    char input;
    scanf("%c", &input);
    return input;
}

void call() //function for call
{
    printf("Calling......\n");
    delay();
    printf("Ringing......\n");
    Sound();
    printf("Connected.......\n");
    char input1;
    input1 = input_to_end_the_call();
    if (input1 == 'Y')
        printf("Call Ended.\n");
    else if (input1 == 'N')
    {
        printf("Please end the call. I'm about to die.....\n");
        input_to_end_the_call();
    }
}

void dialPad() // creating the Dialpad
{
    system("cls");

    printf("\n\n\tDialPad\n\n"); // printing the dialpad

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", num[1], num[2], num[3]);

    printf("*****|*****|*****\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", num[4], num[5], num[6]);

    printf("*****|*****|*****\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", num[7], num[8], num[9]);

    printf("*****|*****|*****\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", num[10], num[0], num[11]);

    printf("     |     |     \n\n");
}

void dial()
{
    dialPad();
    printf("Enter the phone number: \n");
    scanf("%lld", &phoneno);
}

void random_phone_number() // Function to generate random phone number
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        phone_num[i] = (rand() % 9);
    }
}

void secretCall() // Function to make secret call
{
    random_phone_number();
    printf("Calling from ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", phone_num[i]);
    }
    delay();
    printf("\nRinging......\n");
    Sound();
    printf("Connected.......\n");
    char input1;
    input1 = input_to_end_the_call();
    if (input1 == 'Y')
        printf("Call Ended.\n");
    else if (input1 == 'N')
    {
        printf("Please end the call. I'm about to die.....\n");
        input_to_end_the_call();
    }
}

int main()
{
    int choice;
    do
    {
        printf("1. Dial a Number\n");
        printf("2. Make a call\n");
        printf("3. Make a secret call\n");
        printf("Enter your option: \n");
        scanf("%d", &choice); //taking the choice from the user
        switch (choice)       //switch case for the choice
        {
            {
            case 1:
                dial();
                break;
            case 2:
                call();
                break;
            case 3:
                secretCall();
                break;
            case 4:
                printf("Exit.\n");
                break;
            }
        }
        while (choice < 4)
            ;
        return 0;
    }