#include<stdio.h>
#define size 10
#define invalid -9999

int cq[20], f = -1, r = -1;

void insert(int item) {
    if ((r + 1) % size == f) {
        printf("QUEUE OVERFLOW");
    } else {
        if (f == -1) {
            f = 0;
        }
        r = (r + 1) % size;
        cq[r] = item;
    }
}

int delete() {
    int item;
    if (f == -1) {
        printf("QUEUE EMPTY");
        return invalid;
    } else {
        item = cq[f];
        if (f == r) {
            f = r = -1;
        } else {
            f = (f + 1) % size;
        }
        return item;
    }
}

void display() {
    int i;
    if (f == -1) {
        printf("QUEUE EMPTY");
    } else if (f <= r) {
        for (i = f; i <= r; i++) {
            printf(" %d", cq[i]);
        }
    } else {
        for (i = f; i < size; i++) {
            printf(" %d", cq[i]);
        }
        for (i = 0; i <= r; i++) {
            printf(" %d", cq[i]);
        }
    }
}

void main() {
    int num, choice;
    char c = 'y';
    printf("1: Insert\n2: Delete\n3: Display\n");

    while (c == 'y' || c == 'Y') {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number to be inserted: ");
                scanf("%d", &num);
                insert(num);
                break;
            case 2:
                int del=delete();
                if (del!= invalid) {
                    printf("Deleted element %d\n",del);
                }
                break;
            case 3:
                display();
                break;
            default:
                printf("Invalid choice");
        }

        printf("\nDo you want to repeat(y/n): ");
        scanf(" %c", &c);
    }
}
