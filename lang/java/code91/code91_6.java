import java.lang.*;
import java.util.*;
import java.io.*;

class Largest {
  public static void main(String[] args) {
    int[] arr = {5, 6, 65, 234, 45, 64, 23, 74, 32, 31};
    int index = 0, mx = arr[0];
    int len = 0;
    for(int a: arr) {
      ++len;
    }

    for(int i = 0; i < len; i++) {
      if(mx < arr[i]) {
        mx = arr[i];
        index = i;
      }
    }
    arr[index] = -1;
    mx = arr[0];
    for(int i = 0; i < len; i++) {
      if(mx < arr[i]) {
        mx = arr[i];
      }
    }

    System.out.println("Second largest number is: " + mx);
  }
}
