#include <sys/time.h>

#include "sort.c"

float delta_msec(struct timeval t0, struct timeval t1)
{
      return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

int main()
{
  int count[] = {1, 2, 3, 10, 50, 100};

  struct timeval start, end;

  for (int i = 0; i < sizeof(count) / sizeof(int); ++i) {
    setup();
    gettimeofday(&start, NULL); 
    sort(count[i]);
    gettimeofday(&end, NULL);

    printf("%d\telapsed time is %f\n", count[i], delta_msec(start, end));
  }
}
