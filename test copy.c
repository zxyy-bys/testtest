/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  07/30/2015 20:53:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char* getlinebuff(char *recvBuff,int num,char * line);
int main(){
    char* buff = "Connect www.google.com:433 http 1.0\n hello world \n hasdfasdfasdf\n";
    char line[1000];
    char* index = buff;
    while((index = getlinebuff(index,sizeof(line),line)) != NULL){
        printf("%s \n",line);
    }
}

char* getlinebuff (char* recvBuff,int num, char *line){
    char* start = recvBuff;
    int length = 0;
    while(*recvBuff !='\n' &&*recvBuff != '\0' && length < num){
        ++length;
        ++recvBuff;
    }
    if(length == 0){
        return NULL;
    }
    recvBuff++;
    memcpy(line,start,length);
    line[length] = '\0';
    return recvBuff;
}
