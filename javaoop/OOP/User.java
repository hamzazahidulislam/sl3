package OOP;

import java.util.ArrayList;
import java.util.Iterator;

public class User {

    public static void main(String[] args) {
        Student student = new Student();

        Courses c1 = new Courses("Bangla", "101", 4.0);
        Courses c2 = new Courses("English", "102", 3.0);

        ArrayList<Courses> course = new ArrayList<Courses>();
        course.add(c1);
        course.add(c2);

        student.setCourses(course);

        Iterator itr = course.iterator();

        while (itr.hasNext()) {
            Courses s1 = (Courses) itr.next();
            System.out.println(s1.getCourseName() + "" + s1.getCourseCredit() + "" + s1.getCourseCode());
        }

    }
}
