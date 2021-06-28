package Encapsulation;

public class Accountinfo {
    public static void main(String[] args) {
        AccountOwner ao = new AccountOwner();
        ao.setId(5);

        System.out.println(ao.getId());
    }
}
