public class Main {
    public static void main(String[] args) {
        Profile nahid = new Profile("Nahid hasan");
        if (nahid.login("nahid@gmail.com","123")){
            System.out.println(nahid.toString());
        }else{
            System.out.println("Invalid credentials");
        }
    }
}
