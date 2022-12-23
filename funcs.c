#include <stdlib.h>
#include <stdio.h>
#include <string.h>
long int tentobin(int b)
 {
    if (b<0){
        b = -b;
		printf("-");
    }
    long int c = 0;
    int k = 1;
    while(b){
            c += k*(b%2);
            k *= 10;
            b /= 2;
     }
    return c;
 
}
long int tentooct(int b)
 {
     if (b<0){
        b = -b;
		printf("-");
    }
 	long int c = 0;
    int k = 1;
    while(b){
            c += k*(b%8);
            k *= 10;
            b /= 8;
     }
     return c;

}
int pow2(int s){
	int n = 1;
	for(int i = 0 ;i < s; i++){
		n = n * 2;	
	}
	return n;
}

int atoi2(char* str) {
	int n = 0;
	char* str1 = calloc(strlen(str), sizeof(char));
	for(int i = 0; i < strlen(str); i++) {
		str1[i] = str[strlen(str) - i - 1];
	}
	for(int i = 0; i < strlen(str); i++) {
		n = n + ((str1[i] - '0') * (pow2(i)));
	}
	return n;
}
int pow8(int s){
	int n = 1;
	for(int i = 0 ;i < s; i++){
		n = n * 8;	
	}
	return n;
}

int atoi8(char* str){
	int n = 0;
	char* str1 = calloc(strlen(str), sizeof(char));
	for(int i = 0; i < strlen(str); i++) {	
		str1[i] = str[strlen(str) - i - 1];
	}
	for(int i = 0; i < strlen(str); i++) {
		n = n + ((str1[i] - '0') * (pow8(i)));
	}
	return n;
}
int pow16(int s){
	int n = 1;
	for(int i = 0 ;i < s; i++){
		n = n * 16;	
	}
	return n;
}
int atoi16(char* str){
	int n = 0;
	char* str1 = calloc(strlen(str), sizeof(char));
	for(int i = 0; i < strlen(str); i++) {	
		str1[i] = str[strlen(str) - i - 1];
	}
	for(int i = 0; i < strlen(str); i++) {
		if (str1[i] >= 'a' && str1[i] <= 'f'){
		n = n + ((str1[i] - 'a' + 10) * pow16(i));
	}
		else{
			n = n + ((str1[i] - '0') * (pow16(i)));
		}
	}
	return n;
}