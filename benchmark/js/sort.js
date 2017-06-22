function () {
  function bubbleSort(a)
  {
    var min = 0, tmp = 0;
    var length = a.length;
    for (var i = 0; i < length; ++i) {
      min = a[i];
      k = 0;
      for (var j = i + 1; j < length; ++j) {
        if (a[j] < min) {
          min = a[j];
          k = j;
        }
      }

      if (min != a[i]) {
        tmp = a[i];
        a[i] = min;
        a[k] = tmp;
      }
    }
  }

  var a = [];
  const N = 1000;
  function setup() {
    for (let i = 0; i < N; ++i)
      a[i] = N - i;
  }

  function sort(count) {
    for (let i = 0; i < count; ++i)
      bubbleSort(a);
  }

  return { sort: sort, setup: setup }
}
