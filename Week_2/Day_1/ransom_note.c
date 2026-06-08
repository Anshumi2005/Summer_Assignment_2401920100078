#include <stdbool.h>
#include <string.h>
bool canConstruct(char *ransomNote,char *magazine) {
    int x= strlen(ransomNote);
    int y= strlen(magazine);
    for (int i=0; i < x; i++) {
        int found= 0;
        for (int j =0; j< y;j++) {
            if (ransomNote[i]== magazine[j]) {
                magazine[j] ='#';  
                found =1;
                break;
            }
        }
        if (found==0) {
            return false;
        }
    }
    return true;
}
