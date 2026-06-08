#include <string.h>
int firstUniqChar(char *s) {
    int n =strlen(s);
    for (int i= 0; i< n; i++) {
        int count= 0;
        for (int j =0; j <n;j++) {
            if (s[i]==s[j]) {
                count++;
            }
        }
        if(count==1) {
            return i;
        }
    }
    return -1;
}
