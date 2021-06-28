/**
 * This class is responsible for keeping the
 * track of students fees, name, grade & fees paid.
 */
public class Student {
    private int id;
    private String name;
    private int grade;
    private int feesPaid;
    private int feesTotal;

    /**
     * To create a new student by initializing.
     * @param id
     * @param name
     * @param grade
     */
    public Student(int id, String name, int grade) {
        this.feesPaid= 0;
        this.feesTotal= 0;
        this.id = id;
        this.name = name;
        this.grade = grade;
    }

    public void  setGrade(int grade){
        this.grade = grade;
    }

    public void payFees(int fees){
        feesPaid+=fees;
        School.updateTotalMoneyEarned(fees);
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public int getGrade() {
        return grade;
    }

    public int getFeesPaid() {
        return feesPaid;
    }

    public int getFeesTotal() {
        return feesTotal;
    }

    public int getRemainingFees(){
        return feesTotal-feesPaid;
    }

    @Override
    public String toString() {
        return "Student name :" + name+
                " Total Fees paid so far $" + feesPaid;
    }
}
