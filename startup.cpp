#include <windows.h>
#include <Lmcons.h>
#include <stdio.h>


#define STARTUP_FOLDER "C:\\Users\\USERNAME\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\ARQUIVE.bat"
#define DATA_SIZE 1000

void archive(){
    //get pc username
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr = fopen (STARTUP_FOLDER, "w");
    char content[8000];
    printf("%s", "file contents\n>> ");
    scanf("%s", &content);
    fprintf(fPtr, content);
    fclose(fPtr);
    if(fPtr == NULL){
        printf("Unable to create file.");
        exit(EXIT_FAILURE);
    }
}

int main(){
    archive();
    return 0;
}