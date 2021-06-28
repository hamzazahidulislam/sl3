package Classes;

import Enums.Record_Type;

public class Profile {
    private String name;
    private String nid_num;
    private Record_Type record_type = Record_Type.No_record_of_infection;
    private Service service;
    private Expose_Alert expose_alert;

    public Profile(String name, String nid_num) {
        this.name = name;
        this.nid_num = nid_num;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getNid_name() {
        return nid_num;
    }

    public void setNid_name(String nid_name) {
        this.nid_num = nid_name;
    }

    public Record_Type getRecord_type() {
        return record_type;
    }

    public void setRecord_type(Record_Type record_type) {
        this.record_type = record_type;
    }

    public Service getService() {
        return service;
    }

    public void setService(Service service) {
        this.service = service;
    }

    public Expose_Alert getExpose_alert() {
        return expose_alert;
    }

    public void setExpose_alert(Expose_Alert expose_alert) {
        this.expose_alert = expose_alert;
    }

    @Override
    public String toString() {
        return " Profile { " + '\n' +
                " name = " + name + ",\n" +
                " nid_num = " + nid_num + ",\n" +
                " record_type = " + record_type + ",\n" +
                "}";
    }
}
