package Abstraction;

public abstract class BSPLimited {
    abstract void establishedConnectionwithTower();
    abstract void DeshtroyConnectionwithTower();
    void DND(){
        System.out.println("DND is ok");
    }
    void sendSMS(){
        establishedConnectionwithTower();
        DND();
        DeshtroyConnectionwithTower();
    }
}
