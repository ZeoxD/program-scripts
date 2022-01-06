import java.io.*;

class Input{
	public static void main(String[] args) throws IOException {
		DataInputStream ds = new DataInputStream(System.in);
		String name = ds.readLine();
		String salary = ds.readLine();
		System.out.println("Name: " + name + "\nSalary: " + salary);
	}
}
		
