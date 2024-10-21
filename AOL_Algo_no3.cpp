#include<stdio.h>
#include<string.h>
#define n 4000

struct housing{
	char loc1[1000], loc2[1000], type[1000], furnish[1000], room[10], bath[10], carparks[10];
	double price, area; 
};

FILE*hm;
long long int x=0;
struct housing house[n], temp;

int main(){
	hm=fopen("file.csv", "r");

	char judul[1000];
	fscanf(hm, "%[^\n]", judul);
	while(!feof(hm)){
		fscanf(hm, " %[^,],%[^,],%lf,%c,%c,%c,%[^,],%lf,%[^\n]\n", 
		house[x].loc1, house[x].loc2, &house[x].price, &house[x].room, 
		&house[x].bath, &house[x].carparks, house[x].type, &house[x].area, house[x].furnish);
		x++;
	}
	for(int i=0; i<x-1; i++){
        for(int j=0; j<x-i-1; j++){
            if(strcmp(house[j].loc1, house[j+1].loc1)>0){
                temp=house[j];
                house[j]=house[j+1];
                house[j+1]=temp;
            }
        }
    }
    for(int i=0; i<x; i++){
    printf("%s\n", house[i].loc1);
    }
    fclose(hm);
	return 0;
}
