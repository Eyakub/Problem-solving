#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 200

typedef struct User
{
    char name[50];
    int age;
    struct User *next;
} User;

static int compare_user(const struct User *a, const struct User *b)
{
    return strcmp(a->name, b->name);
}

void displayUsers(struct User *user)
{
    while (user != NULL)
    {
        printf("user info: \n");
        printf("\tName: %s", user->name);
        printf("\tAge: %d\n", user->age);
        user = user->next;
    }
}

void deleteUsers(struct User **user, char name[50])
{
    struct User *temp = *user, *prev;
    printf("%s %s\n", temp->name, name);
    if (temp != NULL && strcmp(temp->name, name) == 0)
    {
        printf("first if true\n");
        *user = temp->next;
        free(temp);
        displayUsers(temp);
        return;
    }

    // find the key to be deleted
    while (temp != NULL && strcmp(temp->name, name) == 1)
    {
        printf("find the key to be deleted\n");
        prev = temp;
        temp = temp->next;
    }

    // if the key is not present
    if (temp == NULL)
        return;

    // remove the node
    prev->next = temp->next;

    free(temp);
    displayUsers(temp);
}

int main()
{
    int i, nUser = 5, isDelete;
    char deleteName[50], confirmDeleteName[50];
    char buffer[LINE_SIZE];
    User *headUser, *nextUser, *headList;

    printf("Enter 5 name and ages corresponding to: \n");

    // allocate memory for first user (node)
    nextUser = (User *)malloc(sizeof(User));
    headList = nextUser;

    // read 5 names and ages from user
    for (i = 0; i < 1; i++)
    {
        // the new element to fill
        headUser = nextUser;

        // user information
        printf("\tName: ");
        fgets(headUser->name, LINE_SIZE, stdin);
        strtok(headUser->name, "\n");

        printf("\tAge: ");
        scanf("%d", &headUser->age);
        fgets(buffer, LINE_SIZE, stdin);

        // allocate memory for one user
        nextUser = (User *)malloc(sizeof(User));

        // link to the next element
        headUser->next = nextUser;
    }

    // the last node of the list
    headUser->next = NULL;

    headUser = headList;

    displayUsers(headUser);

    // call the removed function
    printf("Enter a name to be removed: ");
    // scanf("%s", deleteName);
    gets(deleteName);
    printf("Enter the name again to be confirmed: ");
    // scanf("%s", confirmDeleteName);
    gets(confirmDeleteName);

    // compare both user input to be matched
    isDelete = strcmp(deleteName, confirmDeleteName);

    if (isDelete == 0)
    {
        printf("inside delete confirmed\n");
        deleteUsers(&headUser, deleteName);
    }
    return 0;
}