import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter student name: ");
        String name = scanner.nextLine();

        System.out.print("Enter number of registered units: ");
        int units = scanner.nextInt();

        String status;
        if (units > 7) {
            status = "Overload - Approval Required";
        } else {
            status = "Registration Accepted";
        }


        System.out.println("\n--- Registration Summary ---");
        System.out.println("Student Name: " + name);
        System.out.println("Registered Units: " + units);
        System.out.println("Status: " + status);

        scanner.close();
    }
}