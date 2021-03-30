#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "Word"; /* Example string change to any you want. */
    char* p1 = &word[0];
    char* p2 = &word[strlen(word)-1];
    if(!(strlen(word) % 2 == 0)){
        while(p1 != &word[(strlen(word)-1)/2] && p2 != &word[(strlen(word)-1)/2]){
            char p1_log = *p1;
            char p2_log = *p2;
            *p1 = p2_log;
            *p2 = p1_log;
            *(++p1);
            *(--p2);
        }
    }else{
        while(p1 != &word[(strlen(word)-1)/2+1] && p2 != &word[(strlen(word)-1)/2-1]){
            char p1_log = *p1;
            char p2_log = *p2;
            *p1 = p2_log;
            *p2 = p1_log;
            *(++p1);
            *(--p2);
        }
    }
    printf("%s",word);
}
