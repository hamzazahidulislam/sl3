import java.util.Scanner;

public class Timer {
    public static void main(String[] args) throws InterruptedException {

        int limit;
        Scanner in = new Scanner(System.in);

        System.out.println("Enter the amount of Second");
        limit = in.nextInt();
        timer(limit);

        System.out.println("Count of Time");
    }

    public static void timer(int limit) throws InterruptedException {
        for (int i = limit; i >= 0; i--) {
            System.out.print("\033[H\033[2J");
//            Runtime.getRuntime().exec("CLS");
            System.out.println("Time left" + i);
            Thread.sleep(1000);
        }
    }
}