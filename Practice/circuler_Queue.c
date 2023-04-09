#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5

int q[CAPACITY], front = 0, rear = -1, totalItems = 0;

bool isFull()
{
    return totalItems == CAPACITY;
}

bool isEmpty()
{
    return totalItems == 0;
}

void enQ(int value)
{
    if (isFull())
    {
        printf("\nQueue is Full.\n");
        return;
    }
    else
    {
        rear = (rear + 1) % CAPACITY;
        q[rear] = value;
        totalItems++;
        printf("\n%d item added!\n", value);
    }
}

int dQ()
{
    if (isEmpty())
    {
        printf("\nThere are no elements in the queue.\n");
        return -1;
    }
    else
    {
        int frontItem = q[front];
        q[front] = -1;
        front = (front + 1) % CAPACITY;
        totalItems--;
        return frontItem;
    }
}

void printQ()
{
    printf("Queue elements are: ");
    for (int i = 0; i < CAPACITY; i++)
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}

int main()
{
    int num, value;
    while (1) // infinite loop until exit
    {
        printf("\n1. EnQueue.\n2. DeQueue.\n3. Display.\n4. Exit.\n\nEnter your Choice: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter Value: ");
            scanf("%d", &value);
            enQ(value);
            break;
        case 2:
            value = dQ();
            if (value != -1)
            {
                printf("Dequeued Item: %d\n", value);
            }
            break;
        case 3:
            printQ();
            break;
        case 4:
            return 0; // exit the program
        default:
            printf("Invalid Choice!\n");
            break;
        }
    }

    return 0;
}
