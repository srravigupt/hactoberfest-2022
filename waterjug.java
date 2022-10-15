class Pair {
  int first, second;
 
  Pair(int f, int s) {
    first = f;
    second = s;
  }
}
 
void BFS(int a, int b, int target) {
  int m[][] = new int[1000][1000];
  for (int[] i: m) {
    Arrays.fill(i, -1);
  }
 
  boolean isSolvable = false;
  Vector < Pair > path = new Vector < Pair > ();
 
  Queue < Pair > q = new LinkedList < Pair > ();
  q.add(new Pair(0, 0));
 
  while (!q.isEmpty()) {
 
    Pair u = q.peek();
 
    q.poll();
 
    if ((u.first > a || u.second > b ||
        u.first < 0 || u.second < 0))
      continue;
 
    if (m[u.first][u.second] > -1)
      continue;
 
    path.add(new Pair(u.first, u.second));
 
    m[u.first][u.second] = 1;
 
    if (u.first == target || u.second == target) {
      isSolvable = true;
      if (u.first == target) {
        if (u.second != 0)
 
          path.add(new Pair(u.first, 0));
      } else {
        if (u.first != 0)
 
          path.add(new Pair(0, u.second));
      }
 
      int sz = path.size();
      for (int i = 0; i < sz; i++)
        System.out.println("(" + path.get(i).first +
          ", " + path.get(i).second + ")");
      break;
    }
 
    q.add(new Pair(u.first, b));
    q.add(new Pair(a, u.second));
 
    for (int ap = 0; ap <= Math.max(a, b); ap++) {
 
      int c = u.first + ap;
      int d = u.second - ap;
 
      if (c == a || (d == 0 && d >= 0))
        q.add(new Pair(c, d));
 
      c = u.first - ap;
      d = u.second + ap;
 
      if ((c == 0 && c >= 0) || d == b)
        q.add(new Pair(c, d));
    }
 
    q.add(new Pair(a, 0));
    q.add(new Pair(0, b));
  }
 
  if (!isSolvable)
    System.out.print("No solution");
}
