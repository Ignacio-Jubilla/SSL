#include <stdio.h>
#include <string.h>


int main(){
    char a[35]="Bieeenvenidos al himalaya, Helado?";
    FILE *f=fopen("output.txt","wb");
    
    //printf("Bieeenvenidos al himalaya, Helado?");
    fwrite(&a,sizeof(a),1,f);
    fclose(f);
    return 0;
}