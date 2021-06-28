import java.util.*;

public class Loop {
    public static void main(String[] args) {
        int rows;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of rows : ");
        rows = input.nextInt();

        /* Iterate through rows */
        for (int i = 1; i <= rows; i++) {
            /* Print leading spaces */
            for (int j = i; j < rows; j++) {
                System.out.print(" ");
            }

            /* Print star */
            for (int j = 1; j <= (2 * i - 1); j++) {
                System.out.print("*");
            }

            /* Move to next line */
            System.out.println("");
        }


    }
}
