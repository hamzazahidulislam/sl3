package Classes;

import interfaces.Covid;

public class Covid_Test implements Covid {
    private String medical;

    public Covid_Test(String medical) {
        this.medical = medical;
    }

    @Override
    public String getAppointment() {
        return "Your Medical "+ this.medical + " for your Covid-19 Test";
    }


}
