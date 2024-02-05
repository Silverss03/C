#include <stdio.h>

int find_perfect_num(int n){
    int flag = 0, total=0;    
    for (int i = 1; i < n; i++)
    {
         if (n % i == 0) total+=i;
    }
    if (total == n & n!=0) flag = 1;
    return flag;
}

int main(){
    int start, end;
    scanf("%d %d", &start, &end);
    if (start < end)
    {
        int i = start, check;
        while ( i < end)
        {
            check = find_perfect_num(i);
            if( check == 1 )  printf("%d ", i);
            ++i;
        }
    }
    else
    {
        int i = end, check;
        while ( i < start )
        {
            check = find_perfect_num(i);
            if( check == 1 )  printf("%d ", i);
            ++i;
        }
    }
    
    return 0;
}
