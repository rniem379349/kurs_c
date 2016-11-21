#include <stdio.h>

int main()
{
  long long a = 53289463874623;
  long long*p_do_a = &a;
  long long*q_do_p = p_do_a;
  long long*c_do_q = q_do_p;
  long long bababooy = &c_do_q - & p_do_a;
  printf("%lld %p %p %p %lld\n",a,p_do_a,&q_do_p,&c_do_q,bababooy);
}
