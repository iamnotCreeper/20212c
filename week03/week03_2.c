#include <stdio.h>
2	#include <string.h>
3	char line[15]="123454321";
4	char *p1, *p2;///�D�D: pointer����,����A�n�ݪ��a��
5	int palindrome()
6	{
7	    int N=strlen(line);
8	    for(int i=0; i<N; i++){
9	        p1 = & line[i]; ///�D�D: pointer���� &����ܼƪ�address��}
10	        p2 = & line[N-1-i]; ///�D�D: pointer���� &����ܼƪ�address��}
11	        if( line[i] != line[N-1-i] ) return 0;//bad!!!
12	    }
13	    return 1;
14	}
15	int main()
16	{
17	    ///while( scanf("%s", line)==1 ){//�W�g��week02-1 //���n��while��scanf()
18	        int p = palindrome();
19	        if(p==1) printf("%s -- is a palindrome.\n\n",line);
20	        if(p==0) printf("%s -- is not a palindrome.\n\n",line);
21	    ///}//�W�g��week02-1
22	    return 0;
23	}
