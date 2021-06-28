package Classes;

import interfaces.Covid;

public class Covid_vaccine implements Covid {
    private Boolean qualified;
    private Profile profile;
    private String medical;

    public Covid_vaccine(Boolean qualified, Profile profile, String medical) {
        this.qualified = qualified;
        this.profile = profile;
        this.medical = medical;
    }


    @Override
    public String getAppointment() {
        return "Your Medical "+ this.medical + "for your vaccine";
    }




}
