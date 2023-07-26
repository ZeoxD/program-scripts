import java.io.*;
import java.lang.*;
import java.util.*;

class Prime {
  public static void main(String[] args) {
    int count = 0;
    boolean flag = false;
    for(int i = 2 ; i < 230; i++) {
      flag = false;
      for(int j = 2; j < i; j++) {
        if(i % j == 0) {
          flag = true;
          break;
        }
      }

      if(flag == false) {
        System.out.print(i + " ");
        count++;
      }

    }
    System.out.println("");
    System.out.println("total prime numbers: " + count);
  }
}
