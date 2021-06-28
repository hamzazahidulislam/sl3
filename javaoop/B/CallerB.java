package B;

import A.*;

public class CallerB extends Test {
    public static void main(String[] args) {
//        Test test = new Test();
//        System.out.println(test.id);
        CallerB callerB = new CallerB();
        System.out.println(callerB.id);
    }
}
