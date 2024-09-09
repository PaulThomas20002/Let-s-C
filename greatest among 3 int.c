 #include <stdio.h>
// Finding greatest without using else if ladder
 int main(void)
 {
    int a=10,b=4,c=6;
    
    int s = a > b? 
                ( a > c? a :c ) : 
                ( b > c ? b : c );
    
    printf("%d", s);
 return 0;
 } 
