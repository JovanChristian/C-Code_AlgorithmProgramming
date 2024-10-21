#include<stdio.h>
#include<string.h>

struct database{
	char location1[1000];
    char location2[1000];
    double price;
    char room;
    char bathroom;
    char carparks;
    char type;
    double area;
    char furnish;
}HousingData[4000]; 

int main(){
    FILE * fp = fopen("file.csv", "r");
    database HousingData[4000], swipe;
	char n[250];	//judul
    int count=0;
    fscanf(fp, "[^\n]\n", n);
    while(!feof(fp)){
        fscanf(fp, "%[^,],%[^,],%lf,%[^,],%[^,],%[^,],%[^,],%lf,%[^,],%[^\n]\n" ,HousingData[count].location1, HousingData[count].location2, &HousingData[count].price, HousingData[count].room, HousingData[count].bathroom, HousingData[count].carparks, HousingData[count].type, &HousingData[count].area, HousingData[count].furnish);
        count++;
    }
    for(int i=0; i<count-1; i++){
        for(int j=0; j<count-i-1; j++){
            if(strcmp(HousingData[j].location1, HousingData[j+1].location1)>0){
                swipe= HousingData[j];
               HousingData[j]= HousingData[j+1];
                HousingData[j+1]= swipe;
            }
        }
    } 
     for(int j=0; j<count; j++){
        printf("%s" ,HousingData[j].location1); 
    }
    fclose(fp);
    return 0;
}

   
