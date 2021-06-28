public class Hello {
    public static void main(String[] args) {
        
        StringBuffer buffer = new StringBuffer();
        String s = "I Love Bangladesh";

        long start = System.currentTimeMillis();

        for(int i = 0; i <10000;i++){
            buffer.append(s);
        }
        
        long end = System.currentTimeMillis();
        System.out.println(end - start);
    }
}