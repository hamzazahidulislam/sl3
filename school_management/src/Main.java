import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Teacher t1 = new Teacher(1,"t1",500);
        Teacher t2 = new Teacher(2,"t2",700);
        Teacher t3 = new Teacher(3,"t3",600);

        List<Teacher> teacherlist = new ArrayList<>();
        teacherlist.add(t1);
        teacherlist.add(t2);
        teacherlist.add(t3);

        Student st1 = new Student(1,"st1",4);
        Student st2 = new Student(2,"st2",12);
        Student st3 = new Student(3,"st3",5);

        List<Student> studentlist = new ArrayList<>();
        studentlist.add(st1);
        studentlist.add(st2);
        studentlist.add(st3);

        School school = new School(teacherlist,studentlist);

        st1.payFees(5000);
        st2.payFees(6000);
        System.out.println("School has earned $"+ school.getTotalMoneyEarned());

        System.out.println("--------Making SCHOOL PAY SALARY------------");
        t1.receiveSalary(t1.getSalary());
        System.out.println("School has spent for salary to "+ t1.getName()
        +" and now has " + school.getTotalMoneyEarned());

        t3.receiveSalary(t3.getSalary());
        System.out.println("School has spent for salary to "+ t3.getName()
                +" and now has " + school.getTotalMoneyEarned());

        System.out.println(st1);
        System.out.println(t1);
    }
}
