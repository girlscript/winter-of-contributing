int findPosition(int N) {
  int pos = 0, count = 0;
  while (N != 0) {
    if (N & 1 == 1) {
      count++;
    }
    pos++;
    N = N >> 1;
  }
  if (count == 0 || count > 1) {
    return -1;
  }
  return pos;
}
