#include "Ejercicio02.h"
int c = 0;
bool Ejercicio02::isPalindrome(string& s)
{
    string ss = s;
    int j = s.size();
    if (c < j) {
        char* palabra = &s[0];
        for (int i = 0; i <j; i++) {
            *(palabra + i) = s[j - i];
        }
        if (*(palabra + 0) == s[0]){
            return true;
        }
        c++;
        isPalindrome(ss);
    }
    else {
        return false;
    }
}
