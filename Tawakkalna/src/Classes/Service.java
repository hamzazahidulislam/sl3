package Classes;

public class Service {
    private Covid_vaccine covid_vaccine;
    private Covid_Test covid_test;

    public Service(Covid_vaccine covid_vaccine) {
        this.covid_vaccine = covid_vaccine;
    }

    public Service(Covid_Test covid_test) {
        this.covid_test = covid_test;
    }
    public Service() {

    }
    public Covid_vaccine getCovid_vaccine() {
        return covid_vaccine;
    }

    public void setCovid_vaccine(Covid_vaccine covid_vaccine) {
        this.covid_vaccine = covid_vaccine;
    }

    public Covid_Test getCovid_test() {
        return covid_test;
    }

    public void setCovid_test(Covid_Test covid_test) {
        this.covid_test = covid_test;
    }

//    @Override
//    public String toString() {
//        return "Service{" +
//                "covid_vaccine=" +  covid_vaccine.getAppointment() +
////                ", covid_test=" + covid_test.getAppointment() +
//                '}';
//    }

}
