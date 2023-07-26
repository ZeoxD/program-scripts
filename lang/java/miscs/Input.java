import java.io.*;
import java.util.Scanner;

class Input{
	public static void main(String[] args) throws IOException {
		Scanner scan = new Scanner(System.in);
		String name = scan.nextLine();
		int salary = scan.nextInt();
		System.out.println("Name: " + name + "\nSalary: " + salary);
	}
}
		
