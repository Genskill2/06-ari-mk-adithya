#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <cs50.h>

string ari(string s){
    int chars = 0, words = 0, sens = 0, a;
    float f_1, f_2, t_1, t_2;
    for (int i = 0; i < strlen(s); i++){
        if (isalnum(s[i])){
            chars++;
        }
        if (s[i] == ' '){
            words++;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?'){
            sens++;
        }
    }
    f_1 = (double)chars/words;
    f_2 = (double)words/sens;
    t_1 = 4.71 * f_1;
    t_2 = (0.5 * f_2) - 21.43;
    a = ceil(t_1 + t_2);
    switch (a){
    case 1:
        printf("Kindergarten");
        break;
    case 2:
        printf("First/Second Grade");
        break;
    case 3:
        printf("Third Grade");
        break;
    case 4:
        printf("Fourth Grade");
        break;
    case 5:
        printf("Fifth Grade");
        break;
    case 6:
        printf("Sixth Grade");
        break;
    case 7:
        printf("Seventh Grade");
        break;
    case 8:
        printf("Eight Grade");
        break;
    case 9:
        printf("Ninth Grade");
        break;
    case 10:
        printf("Tenth Grade");
        break;
    case 11:
        printf("Eleventh Grade");
        break;
    case 12:
        printf("Twelfth Grade");
        break;
    case 13:
        printf("College student");
        break;
    case 14:
        printf("Professor");
        break;
    default:
        printf("Error");
    }
}
