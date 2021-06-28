import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        float number;

        Scanner in = new Scanner(System.in);
        System.out.println("Inter you grade");
        number = in.nextFloat();
        String result;
        if (number >= 80) {
            result = "A+";
        } else if (number >= 70) {
            result = "A";
        } else {
            result = "Fail";
        }
        System.out.println("Your result : " + result);
    }
}