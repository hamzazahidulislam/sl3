public class Profile {
    private String name;
    private String email;
    private String password;

    public Profile(String name) {
        this.name = name;
    }

    public Boolean login(String email, String password){
        return true;
    }

    public String getName() {
        return name;
    }

    @Override
    public String toString() {
        return "My name is "+ name ;
    }
}
