/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  09/13/2015 20:56:54
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
#include <sys/timeb.h>

int main(){
    struct timeb tmb;
    ftime(&tmb);
    printf("tmb.time     = %ld (seconds)\n", tmb.time);
    printf("tmb.millitm  = %d (mlliseconds)\n", tmb.millitm);
}
