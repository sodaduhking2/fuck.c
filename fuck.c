#include <stdio.h>
#include <stdlib.h>

int main()
{

  #ifdef _win32
	system("cls");
#else
	system("clear");
#endif

  printf("fuck");
  printf("\n"); 

return 0;
}
