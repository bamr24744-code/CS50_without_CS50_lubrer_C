//lecture 2 
#include <stdio.h>

int main(void)
{
    char name[10];
    printf("whats your name: ");
    scanf("%9s", &name) != '\0';
    printf("hello, %s\n", name);
}

//=======================================

#include <stdio.h>
// #include <string.h>

void print_column(int height);

int main(void)
{
    int h;
    printf("Height: ");
    scanf("%d", &h) != '\n';
    print_column(h);
}

void print_column(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("Now num is %i and you Enter%d\n", i, height);
    }
}
//==============================
#include <stdio.h>

int print_hello(char *n);

void main(void)
{
    char n[8];
    printf("Whats your name? ");
    scanf("%7s", &n) != '\0';
    print_hello(n);
}

int print_hello(char *n)
{
    printf("Hello, %s\n", n);
}
//==============================
#include <stdio.h>

void main(void)
{
    // Scores
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;
    // print average

    printf("Average: %0.2f\n", (score1 + score2 + score3) / 3.0);
}
//=================================================
#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %0.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

//     nwe=======
//=============================================
#include <stdio.h>
int main(void)
{
    int scores[3];
    int i = 0;
    do
    {
        printf("score: ");
        scanf("%d", &scores[i]) != '\0';
        i++;
    } while (i < 3);

    printf("Average: %0.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

//===================================================
#include <stdio.h>
int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        printf("score: ");
        scanf("%d", &scores[i]) != '\0';
    }
    printf("Average: %0.2f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}

// ************from fujst*******
//===================================================
#include <stdio.h>

const int N = 3;
float average(int length, int array[]);
int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        printf("score: ");
        scanf("%d", &scores[i]) != 1;
    }

    printf("Average: %0.2f\n", average(N, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}
//==================================

#include <stdio.h>
int main(void)
{
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';
    printf("%i %i %i\n", c1, c2, c3);
}

//================
#include <stdio.h>
int main(void)
{
    char s[] = "HI!";
    printf("%s\n", s);
}

//================
#include <stdio.h>
int main(void)
{
    char s[] = "HI!";
    printf("%c%c%c\n", s[0], s[1], s[2]);
}
//----------------------

#include <stdio.h>
int main(void)
{
    char s[] = "HI!";
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}

//===================

#include <stdio.h>

int main(void)
{
    char s[] = "HI!";
    char t[] = "BYE!";
    printf("%s\n", s);
    printf("%s\n", t);
}

//===================

#include <stdio.h>
int main(void)
{
    char *words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
}

//===================

#include <stdio.h>
int main(void)
{
    char *words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}

//====================
// string length
#include <stdio.h>

int main(void)
{
    char name[50];
    printf("Name: ");
    scanf("%49s", &name);

    // counter
    int n;
    while (name[n] != '\0')
    {
        n++;
    }

    printf("The Alpha is: %i\n", n);
}
//====================
// string length
#include <stdio.h>

int string_length(char *s);

int main(void)
{
    char name[50];
    printf("Name: ");
    scanf("%49s", name);
    int length = string_length(name);
    printf("The Alpha is: %i\n", length);
    return 0;
}

int string_length(char *s)
{

    // counter
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
//==============================

// string length in built function
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50];
    printf("Name: ");
    scanf("%49s", name);
    int length = strlen(name);
    printf("The Alpha is: %i\n", length);
    return 0;
}
//======================
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50];

    printf("Name: ");
    scanf("%s", s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

//================
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[50];

    printf("Name: ");
    scanf("%s", s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
//===========================
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[50];

    printf("Name: ");
    scanf("%s", s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
//============================

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
    return 0;
}
//====================

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("Hello, %s\n", argv[i]);
    }
    return 0;
}
//=========================
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command argument\n");
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        printf("Hello, %s\n", argv[i]);
    }
    return 0;
}

// ========================= ** lectur 3 ** ===============================

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n;
    printf("Number: ");
    scanf("%d", &n) != 1;
    for (int i = 0; i < 7; i++)
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }

    printf("Not found\n");
    return 1;
}

//===============================
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "Mall", "cs50"};

    char s[50];
    printf("Streing: ");
    scanf("%49s", &s) != '\0';
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
//======================================
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[] = {"Kelly", "David", "John"};
    char *numbers[] = {"01251298734", "0119060543", "015303324354"};
    // int n;

    char name[50];
    printf("Name: ");
    scanf("%49s", name) != '\0';
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found : %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
//=======================================

#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
} preson;

int main(void)
{
    preson people[3];

    people[0].name = "Kelly";
    people[0].number = "01251298734";

    people[1].name = "David";
    people[1].number = "0119060543";

    people[2].name = "John";
    people[2].number = "015303324354";

    char name[50];
    printf("Name: ");
    scanf("%49s", name) != '\0';
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found : %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

//===========================================
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height) != 1;
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
//===================================
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d", &height) != 1;
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
//=====================================

