#include <stdio.h>
#include<windows.h>
int main() {
 for (float y =1.5f; y > -1.5f; y -= 0.1f) {
  for (float x = -1.5f; x < 1.5f; x += 0.05f) {
   float a =x * x + y * y - 1;
   putchar(a*a*a-x*x *y*y*y<=0.0? '*' : '  ');
  }
  system("color 0c");
  putchar('\n');
 }
return 0;
}#include <stdio.h>
#include<windows.h>
int main() {
	 for (float y =1.5f; y > -1.5f; y -= 0.1f) {
  		for (float x = -1.5f; x < 1.5f; x += 0.05f) {
   float a =x * x + y * y - 1;
   putchar(a*a*a-x*x *y*y*y<=0.0? '*' : '  ');
  }
  system("color 0c");
  putchar('\n');
 }
return 0;
}
