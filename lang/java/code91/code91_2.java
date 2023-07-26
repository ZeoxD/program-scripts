import java.lang.*;
import java.io.*;
import java.util.*;

class Unique {
  public static void main(String[] args) {
    String text = "hello this is hello world program is this";

    Map<String, Integer> hashmap = new HashMap<>();
    
    String[] words = text.split(" ");

    for(String w: words) {
      if(hashmap.containsKey(w)) {
        hashmap.put(w, hashmap.get(w) + 1);
      }
      else {
        hashmap.put(w, 1);
      }
    }
    System.out.println(hashmap);
  }
}
