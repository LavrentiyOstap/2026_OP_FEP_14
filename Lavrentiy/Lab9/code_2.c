#include <stdio.h>
#include <string.h>

void main() {
    int numbers[100];

    char surnames[100][100];
    char names[100][100];

    int count = 0;
    char input[300];

    printf("Enter students (Number Surname Name)\n");

    while (count < 100) {
        printf("Student %d: ", count+1);

        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        if (strlen(input) == 0){
            break;
        }
        if (sscanf(input, "%d %s %s", &numbers[count], &surnames[count], &names[count]) != 3) {

            printf("Invalid input\n");
            continue;
        }

        count++;
    }

    int uniqueNames = 0;

    for (int i = 0; i < count; i++) {
        int exists = 0;

        for (int j = 0; j < i; j++) {
            if (strcmp(names[i], names[j]) == 0) {
                exists = 1;
                break;
            }
        }

        if (exists == 0)
            uniqueNames++;
    }

    int totalLength = 0;

    for (int i = 0; i < count; i++) {
        totalLength += strlen(surnames[i]);
    }

    float averageLength = 0;

    if (count > 0)
        averageLength = (float)totalLength / count;

    printf("\nDifferent names: %d\n", uniqueNames);
    printf("Average surname length: %f\n", averageLength);

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {

            if (strcmp(surnames[j], surnames[j + 1]) > 0) {

                int tempNumber = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = tempNumber;

                char tempSurname[100];

                strcpy(tempSurname, surnames[j]);
                strcpy(surnames[j], surnames[j + 1]);
                strcpy(surnames[j + 1], tempSurname);

                char tempName[100];

                strcpy(tempName, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], tempName);
            }
        }
    }

    printf("\nStudents: (sorted by surname)\n");

    for (int i = 0; i < count; i++) {
        printf("%d %s %s\n", numbers[i], names[i], surnames[i]);
    }
}