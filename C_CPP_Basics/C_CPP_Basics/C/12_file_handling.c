/*
 * TOPIC: File Handling in C
 * ------------------------------
 * C allows us to create, read, write, and close files using functions
 * from <stdio.h>. This is useful for saving data permanently on disk.
 *
 * Common functions:
 *   fopen()  -> opens a file (modes: "w"=write, "r"=read, "a"=append)
 *   fprintf()-> writes formatted data to a file
 *   fscanf() -> reads formatted data from a file
 *   fclose() -> closes the file (IMPORTANT: always close files!)
 */

#include <stdio.h>

int main() {
    // ---- Writing to a file ----
    FILE *filePtr = fopen("data.txt", "w");  // "w" = write mode (creates file if not exists)

    if (filePtr == NULL) {                    // always check if the file opened successfully
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(filePtr, "Hello, this is written to a file.\n");
    fprintf(filePtr, "Age: %d\n", 21);
    fclose(filePtr);   // close the file after writing
    printf("Data written to data.txt successfully.\n");

    // ---- Reading from a file ----
    filePtr = fopen("data.txt", "r");   // "r" = read mode

    if (filePtr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    char line[100];
    printf("\nContents of data.txt:\n");
    // fgets reads one line at a time until end of file
    while (fgets(line, sizeof(line), filePtr) != NULL) {
        printf("%s", line);
    }

    fclose(filePtr);  // always close when done

    return 0;
}
