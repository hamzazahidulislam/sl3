package OOP;

import java.util.ArrayList;

public class Student {
    private String studentName;
    private String studentId;
    private String hobby;
    private Department dept;
    private ArrayList<Courses> courses;

    public Student(String studentName, String studentId, String hobby, Department dept, ArrayList<Courses> courses) {
        this.studentName = studentName;
        this.studentId = studentId;
        this.hobby = hobby;
        this.dept = dept;
        this.courses = courses;
    }

    public Student() {

    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public String getStudentId() {
        return studentId;
    }

    public void setStudentId(String studentId) {
        this.studentId = studentId;
    }

    public String getHobby() {
        return hobby;
    }

    public void setHobby(String hobby) {
        this.hobby = hobby;
    }

    public Department getDept() {
        return dept;
    }

    public void setDept(Department dept) {
        this.dept = dept;
    }

    public ArrayList<Courses> getCourses() {
        return courses;
    }

    public void setCourses(ArrayList<Courses> courses) {
        this.courses = courses;
    }
}
