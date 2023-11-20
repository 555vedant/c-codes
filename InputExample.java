import java.util.Scanner;

public class InputExample {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the console
        Scanner scanner = new Scanner(System.in);

        // Prompt the user for input
        System.out.print("Enter a number: ");

        // Read an integer from the user
        int number = scanner.nextInt();

        // Display the input
        System.out.println("You entered: " + number);

        // Close the Scanner to free up resources (optional but recommended)
        // scanner.close();
    }
}

