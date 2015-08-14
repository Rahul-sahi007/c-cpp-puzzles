#include <stdio.h>
#include <string.h>

//swap 0~size-1, 1~size-2, ...
void strreversepart(char* start, char* end) {
    int size = end - start; 
    //printf("%i\n", size);
    while (start<end) {
      char ch = *start;
      *start = *(end-1);
      *(end-1) = ch;
      start++, end--;
    }
}

void strreverse(char* str) {
    char* pstart = str; 
    char* pend   = str + strlen(str);
    strreversepart(pstart, pend);
    printf("%s\n", str);

    while (pstart<pend){
      char* pspace = strchr(pstart, ' ');
      if (pspace==NULL)
	pspace = pend;
      strreversepart(pstart, pspace);
      pstart = pspace + 1;
    }
}

int main()
{
    printf("Reserse a sentence:\n");
    char arr[100] =  "Napa State Hospital";
    //gets(arr);
    printf("%s\n", arr);
    strreverse(arr);
    printf("%s\n", arr);
    return 0;
}

/*

nqu@linux-3pee:~/testcpp> 
nqu@linux-3pee:~/testcpp> gcc reversent.c -o reversent 
nqu@linux-3pee:~/testcpp> ./reversent 
Reserse a sentence:
Napa State Hospital
latipsoH etatS apaN
Hospital State Napa
nqu@linux-3pee:~/testcpp> 


 */