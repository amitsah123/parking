#include <stdio.h>
int main(){
	int r,notes_2000,notes_200,notes_100,notes_1;
	printf("enter amount:");
	scanf("%d",&r);
	notes_2000=r/500;
	notes_200=r%500/200;
	notes_100=r%500%200/100;
	notes_1=r%500%200%100;
	printf("no of 2000 notes =%d\n" ,notes_2000);
	printf("no of 200 notes = %d\n",notes_200);
	printf("no of 100 notes = %d\n",notes_100);
	printf("no of 1 notes = %d\n",notes_1);
	return 0;
}