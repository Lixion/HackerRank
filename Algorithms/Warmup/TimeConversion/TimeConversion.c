#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void removeChar(char *str, char garbage) {

    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++) {
        *dst = *src;
        if (*dst != garbage) dst++;
    }
    *dst = '\0';
}

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    char* pch[3];
    char* itoaTemp;
    char* iter;
    int i = 1;
    int temp = 0;
    scanf("%s",time);
    iter = strtok (time,":");
    //strcpy(pch[0], iter);
    while (iter != NULL){
        removeChar(iter, 'A');
        removeChar(iter, 'P');
        removeChar(iter, 'M');
        temp = atoi(iter);
        if(i){
            if(time[8] == 'P'){
                if(temp != 12){
                    temp = temp + 12;
                }
            }
            else{
                if(temp == 12){
                    temp = 0;
                    printf("0");
                }
                else if(temp < 10){
                    printf("0");
                }
            }
            
            i = 0;
        }
        else{
            if(temp < 10){
                printf("0");
            }
        }
        printf("%d", temp);
        iter = strtok (NULL, ":");
        if(iter != NULL){
            printf(":");
        }
    }
    return 0;
}