#include <stdio.h>
#include <string.h>

int IsLetterOrDigit(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int IsValidEmail(char* email) {
    int length = strlen(email);

    char* Aindex = strchr(email, '@');

    if (Aindex == NULL)
        return 0;

    if (Aindex == email || Aindex == email + length - 1)
        return 0;

    for (char* p = email; p < Aindex; p++) {
        if (!IsLetterOrDigit(*p) && *p != '.' && *p != '_' && *p != '-') {
            return 0;
        }
    }

    if (email[0] == '.' || Aindex[-1] == '.')
        return 0;

    char* domain = Aindex + 1;
    int domainCount = 0;
    char* part = strtok(domain, ".");

    while (part != NULL) {
        int partLength = strlen(part);

        if (partLength == 0)
            return 0;

        if (!IsLetterOrDigit(part[0]) || !IsLetterOrDigit(part[partLength - 1])) {
            return 0;
        }

        for (int i = 0; i < partLength; i++) {
            if (!IsLetterOrDigit(part[i]) && part[i] != '-') {
                return 0;
            }
        }

        domainCount++;

        part = strtok(NULL, ".");
    }

    if (domainCount != 2 && domainCount != 3)
        return 0;

    return 1;
}

void main() {
    char email[100];

    printf("Enter email: ");
    fgets(email, 100, stdin);

    email[strcspn(email, "\n")] = '\0';

    if (IsValidEmail(email)){
        printf("Email is valid!\n");
    }
    else{
        printf("Email is invalid!\n");
    }
}