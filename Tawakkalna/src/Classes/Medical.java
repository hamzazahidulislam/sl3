package Classes;

import Enums.Service_Type;

import java.util.Date;

public class Medical {
    private String name;
    private String location;
    private String region;
    private Boolean allowed;
    private String schedule;
    private Service_Type type;

    public Medical(String name, String location,String region, Boolean allowed, String schedule, Service_Type type) {
        this.name = name;
        this.location = location;
        this.region = region;
        this.allowed = allowed;
        this.schedule = schedule;
        this.type = type;
    }

    public String getName() {
        return name;
    }

}
