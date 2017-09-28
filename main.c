/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
int sensorValue[]= {1,2,3,4,5};
int filter();

int main(void){
	filter(3);
	filter(5);
    filter(4);
	filter(5);
	filter(8);
	filter(2);
	filter(69);
	filter(7);
	filter(3);
	filter(10);
	filter(12);
	filter(4);
	filter(9);

	printf("The average is %.2 \n",(float) filter(sensorValue));
}

int filter( int sensorValue[])
	{
		float sum=0;
		for( int i=0; i<5; i++ ){
		    sum=sensorValue[i];
	    }
		return sum/5;
	}

