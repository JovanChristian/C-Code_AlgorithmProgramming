#include<stdio.h>
#include<string.h>
#define n 4000

struct housing{
	char loc1[1000], loc2[1000], type[1000], furnish[1000], room[10], bath[10], carparks[10];
	double price, area; 
};

FILE*hm;
long long int x=0;
char data[500];
char column[500];
struct housing house[n], temp;

int main(){
	hm=fopen("file.csv", "r");

	char judul[1000];
	fscanf(hm, "%[^\n]", judul);
	while(!feof(hm)){
		fscanf(hm, " %[^,],%[^,],%lf,%c,%c,%c,%[^,],%lf,%[^\n]", 
		house[x].loc1, house[x].loc2, &house[x].price, house[x].room, 
		house[x].bath, house[x].carparks, house[x].type, &house[x].area, house[x].furnish);
		x++;
	} 
	scanf("%s", data);
	scanf("%s", column);
	for(int i=0; i<x;i++){
		if(strstr(house[i].loc1, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
		}else if(strstr(house[i].loc2, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
	}else if(strstr(house[i].room, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
	}else if(strstr(house[i].bath, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
	}else if(strstr(house[i].carparks, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
	}else if(strstr(house[i].type, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
	}else if(strstr(house[i].furnish, data)){
		printf("%s	| %s	| %s	| %s	| %s	| %s	| %s\n", house[i].loc1, house[i].loc2, house[i].room, 
	house[i].bath, house[i].carparks, house[i].type, house[i].furnish);
	}
}
	fclose(hm);
	return 0;
}
