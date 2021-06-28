import java.util.ArrayList;
import java.util.Iterator;

class Student {
    int id;
    String name;

    public Student(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class ArrayListTest {

    public static void main(String[] args) {
//        ArrayList list = new ArrayList(); <--- old version
//        ArrayList<String> list = new ArrayList<String>();
//
//        list.add("Node");
//        list.add("Python");
//
//        for (String a : list) {
//            System.out.println(a);
//        }
//        Iterator itr = list.iterator();
//        while (itr.hasNext()) {
//            System.out.println(itr.next());
//        }
        Student s1 = new Student(1, "Node");
        Student s2 = new Student(1, "Python");
        ArrayList<Student> list = new ArrayList<Student>();
        list.add(s1);
        list.add(s2);
        Iterator itr = list.iterator();
        while (itr.hasNext()) {
            Student s = (Student) itr.next();
            System.out.println(s.id + " " + s.name);
        }
    }
}
