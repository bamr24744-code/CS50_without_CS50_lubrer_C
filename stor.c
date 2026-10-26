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

// ========================= ** lecture 3 ** ===============================

#include <stdio.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n;
    printf("Number: ");
    scanf("%d", &n) != 1;
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
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
    printf("String: ");
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

//======   ** lecture 4  **  =======
//======   ** lecture 4  **  =======
#include <stdio.h>
int main(void)
{
    int n = 50;
    printf("pointer is: %p\nAnd Value is: %i \n", &n, n);
} // pointer is:000000000062FE1C && And Value is: 50
//================================
#include <stdio.h>
int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
} // 000000000062FE14
//===============================
#include <stdio.h>
int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}
//===========================

#include <stdio.h>
int main(void)
{
    char *s = "HI!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
}
//========================

#include <stdio.h>
int main(void)
{
    char *s = "HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}
//=========================
#include <stdio.h>
int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    printf("%s\n", s + 1);
    printf("%s\n", s + 2);
}
//============================
#include <stdio.h>
int main(void)
{
    int i;
    int j;
    printf("i : ");
    scanf("%d", &i) != '\n';
    printf("j : ");
    scanf("%d", &j) != '\n';

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
//=================================
#include <stdio.h>
int main(void)
{
    char s[50];
    char t[50];
    printf("s : ");
    scanf("%s", &s) != '\n';
    printf("t : ");
    scanf("%s", &t) != '\n';

    if (*s == *t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
//=========================
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50];
    char t[50];
    printf("s : ");
    scanf("%s", s) != '\n';
    printf("t : ");
    scanf("%s", t) != '\n';

    if (strcmp(s, t) == 0)
    {
        printf("Same: %s  , %s.\n", s, t);
    }
    else
    {
        printf("Different: %s ,  %s.\n", s, t);
    }
}
//================================================
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50];
    char t[50];
    printf("s : ");
    scanf("%s", &s) != '\n';
    printf("t : ");
    scanf("%s", &t) != '\n';

    printf("%p\n ", s);
    printf("%p\n ", t);
}
//=====================
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[50];
    char t[50];

    printf("s : ");
    scanf("%s", &s) != '\n';

    *t = *s;
    t[0] = toupper(t[0]);
    printf("S: %s\n ", s);
    printf("T: %s\n ", t);
}
//==============================
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[50];
    char t[50];

    printf("s : ");
    scanf("%s", &s) != '\n';

    *t = *s;

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("S: %s\n ", s);
    printf("T: %s\n ", t);
}
//=========================
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char s[50];

    printf("s : ");
    scanf("%s", &s) != '\n';

    char *t = malloc(strlen(s) + 1);

    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
        t[i] = toupper(t[i]);
    }
    printf("S: %s\n ", s);
    printf("T: %s\n ", t);
}
//============================
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char s[50];

    printf("s : ");
    scanf("%s", &s) != '\n';

    char *t = malloc(strlen(s) + 1);

    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("S: %s\n ", s);
    printf("T: %s\n ", t);
}
//========================
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    // Get a string
    char s[50];
    printf("s : ");
    scanf("%s", &s) != '\n';
    if (s == NULL)
    {
        return 1;
    }
    // Allocate memory for another string
    char *t = malloc(strlen(s) + 1);

    if (t == NULL)
    {
        return 1;
    }
    // copy string into memory
    strcpy(t, s);
    // capitalize copy
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("S: %s\n ", s);
    printf("T: %s\n ", t);
    // free memory
    free(t);
    return 0;
}
//=========================

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
    free(x);
}
//====================
// Garbage Values
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}
//==========================
// Fail fuction swap
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i , y is %i\n", x, y);
    swap(x, y);
    printf("x is %i , y is %i\n", x, y);
}

void swap(int a, int b)
{
    int tep = a;
    a = b;
    b = tep;
}
//==========================
// Success fuction swap
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;
    printf("x is %i , y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i , y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tep = *a;
    *a = *b;
    *b = tep;
}
//====================
// Overflow
#include <stdio.h>

int main(void)
{
    int n;
    printf("n: ");
    scanf("%i", &n);
    printf("n: %i\n", n);
}
//=====================
// Overflow
#include <stdio.h>

int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%s", &s);
    printf("n: %s\n", s);
}
//======================
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(4);
    if (s == NULL)
    {
        return 1;
    }
    printf("s: ");
    scanf("%3s", s);
    printf("n: %s\n", s);
    free(s);
    return 0;
}
// ====================
#include <stdio.h>
int main(void)
{
    char s[4];
    printf("s: ");
    scanf("%3s", s);
    printf("n: %s\n", s);
    return 0;
}
//=====================
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    char *name[50];
    char *number[50];
    printf("Name: ");
    scanf("%49s", &name);
    printf("Number: ");
    scanf("%49s", number);

    fprintf(file, "%s,%s\n", name, number);
    fclose(file);
}
//================================
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open csv file
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }
    char *name[50];
    char *number[50];
    // Get name and number
    printf("Name: ");
    scanf("%49s", &name);
    printf("Number: ");
    scanf("%49s", number);

    // Close file
    fprintf(file, "%s,%s\n", name, number);
    fclose(file);
}
//===================================
#include <stdio.h>

typedef unsigned char BYTE;
int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");
    BYTE b;
    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }
    fclose(dst);
    fclose(src);
}
// to run code :  ./app "phonebook.csv copy.csv"
//==========================================

//  Lecture 5 ----
//1 -- Ipmlements a list of numbers with an array of fixed size
#include <stdio.h>

int main(void)
{
    // list of size 3
    int list[3];
    // iitialize list with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    // print list
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}

// 2 -- =====================================================
// Ipmlements a list of numbers with an array of dynamic size
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // list of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    // initalize list of size 3 witn numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // list of size 4
    int *temp = malloc(4 * sizeof(int));
    if (temp == NULL)
    {
        free(list);
        return 1;
    }

    // copy list of size 3 into list of size 4
    for (int i = 0; i < 3; i++)
    {
        temp[i] = list[i];
    }
    // Add number to list of size 4
    temp[3] = 4;
    // free list of size 4
    free(list);
    // Remember list of size 4
    list = temp;

    // print list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    // Free list
    free(list);
    return 0;
}

// 3 -- ==========-------------=====================-------------------
//Implements a list of numbers with an array of dynamic size using roealloc
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // list of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    // initalize list of size 3 witn numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Resize list to be of size 4
    int *temp = realloc(list, 4 * sizeof(int));
    if (temp == NULL)
    {
        free(list);
        return 1;
    }
    list = temp;

    // Add number to list
    temp[3] = 4;

    // print list
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    // Free list
    free(list);
    return 0;
}
// 4 -- =========== Linked lists ==================-------------
typedef struct node
{
    int number;
    struct node *next;
}
node;
// 5 -- ===========---------------==================-------------
//Start to bulid a linked list by prepending nodes
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // Momery for numbers
    node *list = NULL;

    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node For number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        // n->number = get_int("Number: ");
        int number;
        printf("Number: ");
        scanf("%d", &number);
        n->number = number;
        n->next = NULL;

        // prepend node to list
        n->next = list;
        list = n;
    }
    return 0;
}
// 6 -- =========================================
// print nodes in a linked list with a while loop
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // Memory for numbers
    node *list = NULL;
    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        int number;
        printf("Number: ");
        scanf("%d", &number);
        n->number = number;
        n->next = NULL;

        // prepend node to list
        n->next = list;
        list = n;
    }
    // print numbers
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    return 0;
}

// 7 -- ===========---------------======================---------------
// Appends numbers to a link list 
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // Memory for numbers
    node *list = NULL;
    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        int number;
        printf("Number: ");
        scanf("%d", &number);
        n->number = number;
        n->next = NULL;

        // if list is empty
        if (list == NULL)
        {
            // This node is the whole list
            list = n;
        }
        // if list has number already
        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // if at end of list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    // Print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("ptr -> %i\n", ptr->number);
    }
    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    return 0;
}
// 8 ============--------------=====================------------------
// implements a sorted linked list of numbers
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;
int main(void)
{
    // Momery for numbers
    node *list = NULL;
    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        int number;
        printf("Enter number: ");
        scanf("%d", &number);
        n->number = number;
        n->next = NULL;
        // if list is empty
        if (list == NULL)
        {
            list = n;
        }
        // if number belongs at beginning in list
        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }
        // if number belongs later in list
        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // if at end list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }
                // if in middle of list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
    // Ferr Memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    return 0;
}
//  9 -- =========================
// Frees Memory in cases of Error too
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void unload(node *list);

int main(void)
{
    // Memory for numbers
    node *list = NULL;
    // Build list
    for (int i = 0; i < 3; i++)
    {
        // Allocate node for number
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            unload(list);
            return 1;
        }
        int number;
        printf("Number: ");
        scanf("%d", &number);
        n->number = number;
        n->next = NULL;
        // if list is empty
        if (list == NULL)
        {
            list = n;
        }
        // if number belongs at beginning of list
        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }
        // if number belongs later in list
        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // if at end of list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }
                // if in middle of list
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    // print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
    // Free memory
    unload(list);
    return 0;
}
void unload(node *list)
{
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
// 10  --   ======================
// Tree
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

bool search(node *tree, int number)
{
    if(tree == NULL)
    {
       return false;
    }
    else if(number < tree ->number)
    {
        return search(tree->left , number);
    }
    else if(number > tree ->number)
    {
        return search(tree -> right, number);
    }
    else if(number == tree->number)
    {
        return true;
    }
    return false;
}

// 11  --   ======================
// hash Tables
#include <ctype.h>
unsigned int hash(const char *word)
{
    return toupper(word[0]) - 'A';
} 

