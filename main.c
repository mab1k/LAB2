#include <stdio.h>
#include "funcs.h"

int main(){
    char simb;
    char n1[128];
	char n2[128];
    char* line = NULL;
    size_t len = 0;
    int trueLen = getline(&line, &len, stdin);
    line[trueLen - 1] = '\0';
if (sscanf(line, "%s %c %s", n1, &simb, n2) != 3){
        if (line[0] != '~') {
            puts("Ошибка ввода");
            return 0;
        }
        line += 1;
        int x = strlen(n1);
	    memmove(&n1[0], &n1[1], x);
		if (n1[0] != '0' && n1[1] != 'x'){
			int res = ~(atoi2(n1));
			int a = tentobin(res);
            printf("%i (%i)\n",a,res);
		}
		if(n1[0] == '0' && n1[1] != 'x'){
			int x = strlen(n1);
			memmove(&n1[0], &n1[1], x);
			int res;
			res = ~(atoi8(n1));
			int a = tentooct(res);
            printf("%i (%i)\n",a,res);
		}
		if(n1[0] == '0' && n1[1] == 'x'){
			int x = strlen(n1);
			memmove(&n1[0], &n1[2], x - 1);
			int res;
			res = ~(atoi16(n1));
			printf("0x%x\n",res);
		}
         return 0;
        free(line);
	}
else{
		if (n1[0] != '0' && n1[1] != 'x' && n2[0] != '0' && n2[1] !='x'){
            if (simb== '&'||simb== '|'||simb== '^') {
                if (atoi2(n1)<0 || atoi2(n2)<0){
                    puts("Ошибка ввода");
                    return 0;
                }
               
             }
			if(simb == '+'){
				int res = atoi2(n1) + atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '-'){
				int res = atoi2(n1) - atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '*'){
				int res = atoi2(n1) * atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '%'){
				int res = atoi2(n1) % atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '&'){
				int res = atoi2(n1) & atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '|'){
				int res = atoi2(n1) | atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '^'){
				int res = atoi2(n1) ^ atoi2(n2);
				long int res1 = tentobin(res);
                printf("%li (%i)\n",res1,res);
			}
		} 
		else if (n1[0] == '0' && n1[1] != 'x' && n2[0] == '0' && n2[1] !='x' ){
            if (simb== '&'||simb== '|'||simb== '^') {
                if (atoi8(n1)<0 || atoi8(n2)<0){
                    puts("Ошибка ввода");
                    return 0;
                }
               
             }
			int x = strlen(n1);
			memmove(&n1[0], &n1[1], x);
			memmove(&n2[0], &n2[1], x);
			x = strlen(n1);
			if(simb == '+'){
				int res = atoi8(n1) + atoi8(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '-'){
				int res = atoi8(n1) - atoi8(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '*'){
				int res = atoi8(n1) * atoi8(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '%'){
				int res = atoi8(n1) % atoi2(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '&'){
				int res = atoi8(n1) & atoi8(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '|'){
				int res = atoi8(n1) |atoi8(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);
			}
			if(simb == '^'){
				int res = atoi8(n1) ^ atoi8(n2);
				long int res1 = tentooct(res);
                printf("%li (%i)\n",res1,res);;
			}
		}
		else if (n1[0] == '0' && n1[1] == 'x' && n2[0] == '0' && n2[1] == 'x'){
            if (simb== '&'||simb== '|'||simb== '^') {
                if (atoi16(n1)<0 || atoi16(n2)<0){
                    puts("Ошибка ввода");
                    return 0;
                }
               
             }
			int x = strlen(n1);	
			memmove(&n1[0], &n1[2], x - 1);
			memmove(&n2[0], &n2[2], x - 1);
			if(simb == '+'){
				int res = atoi16(n1) + atoi16(n2);
				printf("0x%x\n",res);
			}
			if(simb == '-'){
				int res = atoi16(n1) - atoi16(n2);
				if (res < 0){
					res = -res;
				}
				printf("-0x%x\n",res);
			}
			if(simb == '*'){
				int res = atoi16(n1) * atoi16(n2);
				printf("0x%x\n",res);
			}
			if(simb == '%'){
				int res = atoi16(n1) % atoi16(n2);
				printf("-0x%x\n",res);
			}
			if(simb == '&'){
				int res = atoi16(n1) & atoi16(n2);
				printf("0x%x\n",res);
			}
			if(simb == '|'){
				int res = atoi16(n1) | atoi16(n2);
				printf("0x%x\n",res);
			}
			if(simb == '^'){
				int res = atoi16(n1) ^ atoi16(n2);
				printf("0x%x\n",res);
			}
		}
		else{
			printf("Ошибка: системы счисления не совпадают\n");
	}
	}
    
	return 0;
}