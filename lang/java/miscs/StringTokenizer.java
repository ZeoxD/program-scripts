import java.util.*;
import java.io.*;
import java.lang.*;

class StringTokenizer {
    public static void main(String[] args) throws Exception {
        
        String data = "hello;next;this;time;bye";
        StringTokenizer st = new StringTokenizer(data, ";");
        ArrayList<String> arr = new ArrayList<>();
        
        while(st.hasMoreTokens()) {
            arr.add(st.nextToken());
        }
        
        Iterator<String> it = arr.iterator();
        
        while(it.hasNext()) {
            System.out.println(it.next());
        }
    }
}
