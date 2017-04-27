/* PROGRAM:  01_Input.c 
   AUTHOR:
   TOPIC:    Basic C 
   PURPOSE:  01_Lab CST8234
   NOTES:   
             
*/

/**************************************************************************/
/* Declare include files
 **************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/**************************************************************************/
/* Macro Defines
 **************************************************************************/

/**************************************************************************/
/* Function prototypes
 **************************************************************************/
int intGet( int , int );
int error( );


/**************************************************************************/
/* Global variables
 **************************************************************************/



/**************************************************************************
 * Main
 *    Reads a number in between MIN and MAX from the keyboard
 *    Reports errors encountered 
 *    Returns 0 on success
 *            1 on failure
 **************************************************************************/
int main( void ) {
    int MAX = 100;
    int MIN = 0;
    return intGet(MIN,MAX);
}


int intGet( int min, int max ) {
    int numEntered,errorCode;
    char c;

    printf("Enter a number between %d and %d: ",min,max);
    errorCode = scanf( "%d%c", &numEntered,&c);
    if(errorCode == 0){
        return error();
    }
    else if(c != '\n'){
        return error();
    }
    printf("read %d\n",numEntered);
    return EXIT_SUCCESS;

}

int error( ) {
    printf("You have not entered a valid input.\n");
    return EXIT_FAILURE;
}
