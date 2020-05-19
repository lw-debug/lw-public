#include <stdio.h>
//12
 
static int stack_direction = 0;
 
static void FindStackDirection()
{
  static char *addr = NULL;
  auto char dummy;
  if (NULL == addr) {
    addr = &dummy;
    FindStackDirection();  //递归调用，让dummy两次被定义，并一先一后入栈
  } else {
    if (&dummy > addr) {  //两次地址相比较，后入栈的dummy地址大于先前的地址则说明是往高地址增长
      stack_direction = 1;
    } else {
      stack_direction = -1;
    }
  }
}
 
int main(int argc, char const *argv[])
{
  FindStackDirection();
  if (1 == stack_direction) {
    puts("stack grew upward");
  } else {
    puts("stack grew downward");
  }
 
  return 0;
}
