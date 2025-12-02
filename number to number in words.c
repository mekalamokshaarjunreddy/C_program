
  
 #include <stdio.h>

int main() {
    int a[50], i = 0, j, num;
    char *word[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    printf("Enter any number: ");
    scanf("%d", &num);

    
    while(num > 0) {
        a[i] = num % 10;
        num /= 10;
        i++;
    }

    
    for(i = i - 1; i >= 0; i--) {
        for(j = 0; j < 10; j++) {
            if(a[i] == j) {
                printf("%s ", word[j]);
            }
        }
    }

    return 0;
}
 

   