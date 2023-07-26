import java.util.*;

class Pattern {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int input;
    input = sc.nextInt();
    for(int i = 0; i < input; i++) {
      for(int j = 0; j < input; j++) {
        if(i>0 && i<input-1) {
          if(j>0 && j<input-1) {
            System.out.print(" ");
          }
          else {
            System.out.print("*");
          }
        }
        else {
          System.out.print("*");
        }
      }
      System.out.println("");
    }
  }
}
