#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MINUTE=0;
int SECOND=0;
int CYCLE=0;

void longBreak();
void shortBreak();
void focusCounter();

void delay(int ms){
	clock_t timeActual = ms + clock();
	while(timeActual > clock());
}

void longBreak(){
	while(MINUTE < 1){	
		system("cls");
		printf("Long Break\n");
		if(SECOND > 59){
			SECOND = 0;
			MINUTE++;
		}		
		printf("%2i:%2i\n", MINUTE, SECOND);
		delay(1000);
		SECOND++;
	}
	MINUTE, SECOND = 0;
	
} 

void shortBreak(){
	while(MINUTE < 1){	
		system("cls");
		printf("Short Break\n");
		if(SECOND > 59){
			SECOND = 0;
			MINUTE++;
		}		
		printf("%2i:%2i\n", MINUTE, SECOND);
		delay(1000);
		SECOND++;
	}
	MINUTE, SECOND = 0;
	
}


void focusCounter(){
	while(MINUTE < 1){	
		system("cls");
		printf("Focus\n");
		if(SECOND > 59){
			SECOND = 0;
			MINUTE++;
		}		
		printf("%2i:%2i\n", MINUTE, SECOND);
		delay(1000);
		SECOND++;
	}
	
	MINUTE, SECOND = 0;
	
	CYCLE++;

}

int main(){
	focusCounter();
	shortBreak();
	return 0;
}