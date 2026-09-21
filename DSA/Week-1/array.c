#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Traversal");
    printf("\n2. Insertion");
    printf("\n3. Deletion");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Traversal
    if (choice == 1)
    {
        printf("Array elements are: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    // Insertion
    else if (choice == 2)
    {
        printf("Enter position for insertion: ");
        scanf("%d", &pos);

        printf("Enter value: ");
        scanf("%d", &value);

        if (pos < 1 || pos > n + 1)
        {
            printf("Invalid position!");
        }
        else
        {
            for (i = n; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[pos - 1] = value;
            n++;

            printf("Array after insertion: ");

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    // Deletion
    else if (choice == 3)
    {
        printf("Enter position for deletion: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > n)
        {
            printf("Invalid position!");
        }
        else
        {
            for (i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            n--;

            printf("Array after deletion: ");

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }

    else
    {
        printf("Invalid choice!");
    }

    return 0;
}