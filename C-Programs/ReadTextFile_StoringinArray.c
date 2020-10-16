#include<stdio.h>
int main(void) {
    
    FILE * fp;
    fp = fopen("abc.txt","r");
    char points[8][3];
    int i,j;
    for(i=0; i<8; i++) {
        for(j=0; j<3; j++) {
            fscanf(fp,"%c",&points[i][j]);
        }
        fseek( fp, 1, SEEK_CUR );
    }
    
	for(i=0; i<8; i++) {
        for(j=0; j<3; j++) {
            printf("%3c",points[i][j]);
        }
        printf("\n");
    }
    return 0;
}
