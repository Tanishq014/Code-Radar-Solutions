#include <string.h>

void compressString(char str[], char compressed[])
{
    int len = strlen(str);
    int count = 1;
    int n = 0;

    for (int i = 0; i < len; i++)
    {
        // Count consecutive same characters
        while (i < len - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Always store the character
        compressed[n++] = str[i];

        // Add count if more than 2
        if (count > 2)
        {
            char buffer[10];             // Temporary buffer to hold the count as a string
            sprintf(buffer, "%d", count); // Convert int to string
            for (int j = 0; buffer[j] != '\0'; j++)
            {
                compressed[n++] = buffer[j];
            }
        }

        count = 1; // Reset count for the next group
    }

    compressed[n] = '\0'; // Null-terminate the string
}
