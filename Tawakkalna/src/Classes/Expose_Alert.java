package Classes;
import Enums.Expose_Type;

import java.util.UUID;
public class Expose_Alert {
    private Profile profile;
    private String rand_id = UUID.randomUUID().toString();
    private Expose_Type expose_type;

    public Expose_Alert(Profile profile, Expose_Type expose_type) {
        this.profile = profile;
        this.expose_type = expose_type;
    }

    @Override
    public String toString() {
        return "Expose_Alert{" +
                "rand_id='" + rand_id + '\'' +
                ", expose_type=" + expose_type +
                '}';
    }
}
