import java.io.*;

class Input{
	public static void main(String[] args) throws IOException {
		DataInputStream ds = new DataInputStream(System.in);
		String name = ds.readLine();
		int salary = ds.readInt();
		System.out.println("Name: " + name + "\nSalary: " + salary);
	}
}
		
