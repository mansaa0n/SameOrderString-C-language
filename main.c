//
//  main.c
//  Display inputted string in the same order to the output terminal
//  Language: C
//  Created by Ahmed Almansor on 4/4/17.
//  Copyright © 2017 A&A. All rights reserved.
//
#include <stdio.h>     // I/O library
#include <string.h>   //string library
#include <stdbool.h>  //boolean library
#include <ctype.h>  // C library


char* SameOrder(char s[]){
    // This function will return the same exact inputted string.
    return s;
}

int main(){
    char   c[512]; 				              	//a string to store string inputted
    
    printf("Write the desired sentence: \n");   // Statment will be displayed for the user asking for prompt.
    gets(c);                           // get string from the terminal until user hit "Enter".
    
    printf("%s \n", SameOrder (c));    // print funtion for Same Order String  #1
    
    return 0;
}
