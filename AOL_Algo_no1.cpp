#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 4000

struct house{
	char loc1[1000], loc2[1000], type[1000], furnish[1000], room[10], bath[10], carparks[10];
	double price, area; 
}data[3949];

int input;
int x=0;

void scanInput() {
   	printf("NAMA : Jovan Christian Elbindo\n");
		printf("NIM : 2602087365\n");
		printf("KELAS : LC01\n\n");
		
		printf("1. Location 1\n");
		printf("2. Location 2\n");
		printf("3. Price\n");
		printf("4. Room\n");
		printf("5. Bathroom\n");
		printf("6. Carparks\n");
		printf("7. Type\n");
		printf("8. Area\n");
		printf("9. Furnish\n");
		printf("Type the NUMBER [1-9]\n");
		printf("Choose Feature: ");
    scanf("%d", &input);
}
void loc1(int size){ 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].loc1, data[j].loc1)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    // Maximum & Minimum Value
    int max = 0;
    int min = 10000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].loc1);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].loc1);
        }
    }
    for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].loc1, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
} 
void loc2(int size){ 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].loc2, data[j].loc2)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    // Maximum & Minimum Value
    int max = 0;
    int min = 10000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].loc2);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].loc2);
        }
    }
     for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].loc1, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
} 
void price(int size) {

    // Maximum & Minimum Value
    double max = 0.00;
    double min = 100000000.00;
    for(int k=0; k<size; k++) {
        if(data[k].price > max) {
            max = data[k].price;
        }
        if(data[k].price < min) {
            min = data[k].price;
        }
	}	
    // Average Value
    double average = 0.00;
    double total = 0.00;
    for(int l=0; l<size; l++) {
        total += data[l].price;
    }
    average = total/(x+1);

    // Printing Value
    printf("Maximum value: %.2lf\n", max);
    printf("Minimum value: %.2lf\n", min);
    printf("Average value: %.2lf\n", average);
}
void room(int size){ 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].room, data[j].room)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    // Maximum & Minimum Value
    int max = 0;
    int min = 10000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].room);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].room);
        }
    }
     for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].room, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
}
void bath(int size) { 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].bath, data[j].bath)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    int max = 0;
    int min = 100000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].bath);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].bath);
        }
    }
    for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].bath, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
}
void carparks(int size) { 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].carparks, data[j].carparks)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    int max = 0;
    int min = 100000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].carparks);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].carparks);
        }
    }
    for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].carparks, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
}
void type(int size) { 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].type, data[j].type)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    int max = 0;
    int min = 100000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].type);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].type);
        }
    }
    for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].type, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
}
void area(int size) {
    // Maximum & Minimum Value
    double max = 0.00;
    double min = 100000000.00;
    for(int k=0; k<size; k++) {
        if(data[k].area > max) {
            max = data[k].area;
        }
        if(data[k].price < min) {
            min = data[k].area;
        }
	}	
    // Average Value
    double average = 0.00;
    double total = 0.00;
    for(int l=0; l<size; l++) {
        total += data[l].area;
    }
    average = total/(x+1);
    // Printing Value
    printf("Maximum value: %.2lf\n", max);
    printf("Minimum value: %.2lf\n", min);
    printf("Average value: %.2lf\n", average);
}
void furnish(int size) { 
    int mark[4000]={0};
    int count[4000]={0};
    for(int i=0; i<size; i++) {
        count[i] = 1;
        if(mark[i] != -1) {
            for(int j=i+1; j<size; j++) {
                if(!strcmp(data[i].furnish, data[j].furnish)) {
                    count[i]++;
                    mark[j] = -1;
                }
            }
        } else {
            count[i] = -1;
        }
    }
    int max = 0;
    int min = 100000000;
    char Maxt[1005];
    char Mint[1005];
    for(int k=0; k<size; k++) {
        if(count[k] > max) {
            max = count[k];
            strcpy(Maxt, data[k].furnish);
        }
        if(count[k] < min && count[k] > 0) {
            min = count[k];
            strcpy(Mint, data[k].furnish);
        }
    }
    for(int l=0; l<size; l++) {
        if(mark[l] != -1) {
            printf("%s : %d\n", data[l].furnish, count[l]);
        } 
    }
    printf("Maximum value: %s with frequency: %d\n", Maxt, max);
    printf("Minimum value: %s with frequency: %d\n", Mint, min);
}
int main() {

    FILE *hm = fopen("file.csv", "r");
    char judul[505];
    fscanf(hm, "%[^\n]\n", judul);

    // File Reading
    x=0;
    while(!feof(hm)) {
        fscanf(hm, "%[^,],%[^,],%lf,%[^,],%[^,],%[^,],%[^,],%lf,%[^\n]\n", data[x].loc1, data[x].loc2, &data[x].price, data[x].room, 
		data[x].bath, data[x].carparks, data[x].type, &data[x].area, data[x].furnish);
        x++;
    }
    do {
        scanInput();
        
    // LOCATION 1
    if(input == 1) {
    loc1(x);
    }
    // LOCATION 2
    if(input == 2) {
        loc2(x);
    }
    // PRICE
    if(input == 3) { 
        price(x);
    }
    // ROOM
    if(input == 4) {
        room(x);
    }
    // BATHROOM
    if(input == 5) {
      bath(x);
    }
    // CARPARK
    if(input == 6) {
       carparks(x);
    }  
    // TYPE
    if(input == 7) {
        type(x);
    }
    // AREA
    if(input == 8) {
        area(x);
    }
    // FURNISH
    if(input == 9) {
        furnish(x);
    }
    } while(input!= 0);
    fclose(hm);
    return 0;
}
//void character(int size){
//int count[4000]={0};
//int mark[4000]={0};
//	for(int i=0;i<size;i++){
//		count[i]=1;
//		if(mark[i]!=-1){
//		for(int j=i+1; j<size; j++){
//			  if(strcmp(data[i].loc1, data[j].loc1)==0){
//				count[i]+1;
//				mark[i] = -1;
//        }
//		}	
//		}else{
//        count[i]=-1;
//		}
//		for(int k=0; k<size; k++){
//				if(count[k]<number.mintotal){
//					number.mintotal = count[k];
//					strcpy(number.min,data[i].loc1);
//				}
//				if(count[k]>number.maxtotal){
//					number.maxtotal = count[i];
//					strcpy(number.max,data[i].loc1);		
//				}			
//		}
//		for(int l=0; l<size; l++) {
//        if(mark[l] != -1) {
//            printf("%s : %d\n", data[l].loc1, count[i]);
//        } 
//    }
//}
//		printf("Maximum value : %s with frequency : %d\n", number.max, number.maxtotal);
//		printf("Minimum value : %s with frequency : %d\n", number.min, number.mintotal);
//}
//	
//void value(char input);


