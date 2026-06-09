import java.util.ArrayList;
import java.util.Scanner;

public class BookSearch {
    public static void main(String[] args) {

        // Create ArrayList to store book titles
        ArrayList<String> books = new ArrayList<>();

        // Add at least 5 books
        books.add("Introduction to Java");
        books.add("Data Structures and Algorithms");
        books.add("Machine Learning Basics");
        books.add("Python Programming Guide");
        books.add("Artificial Intelligence Fundamentals");

        // Take search word input from user
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter word to search: ");
        String searchWord = sc.nextLine();

        System.out.println("\nBooks containing \"" + searchWord + "\":");

        // Search for matching books
        for (String book : books) {
            if (book.toLowerCase().contains(searchWord.toLowerCase())) {
                System.out.println(book);
            }
        }

        sc.close();
    }
}
