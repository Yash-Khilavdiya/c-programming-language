#include<stdio.h>
#include <stdlib.h>
#include<string.h>

// Function to Store Data (String) in a Text File.
void saveData(){
    
    char data[2000];
    char path[100];
    char fileName[30];
    
    fflush(stdin);
    printf("Enter Data : \n");
    gets(data);

    printf("Please Paste Path where you want to store data : \n");
    gets(path);

    printf("Enter the name of the file you want to save (with extension) : \n");
    gets(fileName);

    strcat(path,fileName);

    FILE * fptr;
    fptr = fopen(path, "w");
    fputs(data, fptr);

    fclose(fptr);

    printf("Data Saved Successfully");
}

void fetchData(){

    char ch = 'a';
    char fileName[20];
    char data[2000];
    char halfpath[100];
    char fullpath[100];

    fflush(stdin);
    printf("Please Paste Path from where you want to fetch data : \n");
    gets(halfpath);
    strcpy(fullpath, halfpath);

    fflush(stdin);
    printf("Enter the name of the file from which you want to fetch data : \n");
    gets(fileName);

    strcat(fullpath,fileName);

    FILE * fptr;
    fptr = fopen(fullpath, "r");
    
    fgets(data, 2000, fptr);
    
    printf("%s", data);
    
    fclose(fptr);
    
    printf("\nEnter the name of the file you want to save (with extension) : \n");
    gets(fileName);

    strcpy(fullpath, halfpath);

    strcat(fullpath,fileName);
    fptr = fopen(fullpath, "w");

    fputs(data, fptr);

    fclose(fptr);

    printf("Data Saved Successfully");
    

}

int main(){

    printf("For Saving Data in a file Press 1\n");
    printf("For Fetching Data from a file Press 2\n\n");
    // printf("For Saving Data in a file Press 3");
    
    int n=0;
    scanf("%d", &n);

    if(n==1){
        saveData();
    }
    else if(n==2){
        fetchData();
    }
    else if(n==3){

    }
    else{
        printf("Invalid Value Entered..!!");
    }

return 0;
}