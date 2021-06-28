import Classes.*;
import Enums.Expose_Type;
import Enums.Record_Type;
import Enums.Service_Type;
import java.util.Date;

public class main {
    public static void main(String[] args) {
        System.out.println("<---------------------  Normal User Profile   -------------------------->");
        Profile tawakkalna = new Profile("Hamza Zahidul Islam","5690284173");
        Medical dch = new Medical("Dhaka Community Hospital","Dhaka","savar",true,"24/05/21", Service_Type.vaccine);
        System.out.println(tawakkalna.toString());
        System.out.println("<---------------------  When User Exposed by symptoms of covid-19   -------------------------->");
        tawakkalna.setExpose_alert(new Expose_Alert(tawakkalna, Expose_Type.HCoVOC43));
        tawakkalna.setRecord_type(Record_Type.Exposed);
        System.out.println(tawakkalna.getExpose_alert());
        System.out.println("<---------------------  When User Covid-Test Service  -------------------------->");
        Service service = new Service(new Covid_Test(dch.getName()));
        System.out.println(tawakkalna.getName() + " " + service.getCovid_test().getAppointment());
        System.out.println("<---------------------  After Covid-Test   -------------------------->");
        tawakkalna.setRecord_type(Record_Type.Infected);
        System.out.println(tawakkalna.getName() + " " + tawakkalna.getRecord_type());
        System.out.println("<---------------------  After Covid-Vaccine   -------------------------->");
        tawakkalna.setService(new Service(new Covid_vaccine(true,tawakkalna, dch.getName())));
        tawakkalna.setRecord_type(Record_Type.Immune_by_first_dose);
        System.out.println(tawakkalna.getName() + " " + tawakkalna.getRecord_type());
        System.out.println("<---------------------  After Second Covid-Vaccine   -------------------------->");
        tawakkalna.setService(new Service(new Covid_vaccine(true,tawakkalna, dch.getName())));
        tawakkalna.setRecord_type(Record_Type.Immune);
        System.out.println(tawakkalna.getName() + " " + tawakkalna.getRecord_type());
    }
}
