
int main() {
  char grid[9][9][10];
  char row[9][9][2];
  char col[9][9][2];
  char box[9][9][2];

  int j, k;

  for(k = 0; k < 9; k++) {
    for(j = 0; j < 9; j++) {
      row[k][j][0] = k;
      row[k][j][1] = j;

      col[j][k][0] = k;
      col[j][k][1] = j;

      box[k / 3 * 3 + j / 3][k % 3 * 3 + j % 3][0] = k;
      box[k / 3 * 3 + j / 3][k % 3 * 3 + j % 3][1] = j;
    }
  }
  return 0;
}
